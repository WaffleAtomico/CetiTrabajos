﻿// Practica 7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// OSCAR ALEJANDRO PENILLA SKAKIEVICH 20300701

#include <iostream>
using namespace std;


double ohmresis(int c1, int c2, int c3);
void Corlresis(int C);
void IRn(double* resis, float resistot, float intenstot, int Nr); // AL usar un apuntador, este va hacia donde esta el arreglo
void VRn(double resis[], float resistot, float voltajtot, int Nr); // la otra manera seria con [] y sin el asterisco

int main()
{
	int i_circuito=-1;
	bool b_door[4];
	for (int i=0; i < 4; i++) { //asignamos a toooodas las banderas su valor
		b_door[i]=false;
	}
	
	struct Circuito
	{
		float VT=0; //voltaje total
		float RT=0; // resistencia total
		float IT=0; //intensidad total
		int NR=0; //numero de resistencia
		int Color_resis[5][3]; //5 por resistencia maxima que puede haber, 4 por numero de bandas
			struct valoresF
			{
				double Rn[5]; // por ser 5 resistencias maximo y aqu se guarda el valor en ohms de c/u
				float IRn[5]; // same pero en ampers
				float VRn[5]; // same pero en volts
			};
			
			valoresF Valfin;
	};
	Circuito circuit;
	cout << "Hola, aqui puedes calcular tus circuitos de resistencias\n";

	cout << "Antes que nada, que tipo de circuito es el tuyo?\n";
	while (!b_door[0]) {
		cout << "Serie-- 1        Paralelo--- 2\n";
		cin >> i_circuito;
			if (i_circuito == 1 || i_circuito == 2) {
				b_door[0]=true;
			}
			

	}
	cout << "Perfecto, ahora necestio saber cuantas resistencias vas a usar y tambien el voltaje\n";
	while (!b_door[1]) {
		cout << "Numero de resistencias:";
			cin >> circuit.NR;
		if (circuit.NR>1 && circuit.NR<6) {
			b_door[1] = true;
		}
	}//numero de resistencias
	while (!b_door[2]) {
		cout << "Voltaje: ";
		cin >> circuit.VT;
		if (circuit.VT > 1) {
			b_door[2] = true;
		}
	}//voltaje


	cout << "Ahora necesito saber el codigo de colores de tus resistencias,\n te mostraré los colores, debes de elegir el orden en el que estan,\n contando que son de 4 bandas, colo agrega 3 valores\n";
	cout << "0: negro\n"; //prefiero poner numeros para que no haya problema de escritura
	cout << "1: café\n";
	cout << "2: Rojo\n";
	cout << "3: naranja\n";
	cout << "4: amarillo\n";
	cout << "5: verde\n";
	cout << "6: azul\n";
	cout << "7: morado\n";
	cout << "8: gris\n";
	cout << "9: blanco\n"; //voy a  exepturar el dorado y plateado


	for (int a = 0; a < circuit.NR; a++) { // para cuando el numero de resistencia sea alcanzado
		cout << "Resistencia " << a+1 <<endl;
		for (int i = 0; i < 3; i++) { //comeinza en 0, hasta que sea igual a 3 para capturar los colores
			b_door[3] = false; //se reincia su valor cada vez que pasa el for
			while (!b_door[3]) {
				cin >> circuit.Color_resis[a][i];
				if (circuit.Color_resis[a][i] > -1 && circuit.Color_resis[a][i] < 10) {
					b_door[3] = true;
				} //if 
			} //para que no se pase del valor while
		} //for para 3 colores
	}//for de resistencia


	for (int a = 0; a < circuit.NR; a++) {
		cout << "Resistencia " << a + 1 << " vale: ";
				circuit.Valfin.Rn[a] = ohmresis(circuit.Color_resis[a][0], circuit.Color_resis[a][1], circuit.Color_resis[a][2]);
				
		cout << circuit.Valfin.Rn[a] << " ohms" << endl;
	}//ohms
	for (int a = 0; a < circuit.NR; a++) {
		cout << "Resistencia " << a + 1 << " tiene colores: \n";
		for (int i = 0; i < 3; i++) { //comeinza en 0, hasta que sea igual a 3 para mostrar los colores
			Corlresis(circuit.Color_resis[a][i]);
		} //for para mostrar 3 colores
		cout << "\n";
	}//colores

	cout << "\nAhora ya tenemos toooodas las resistencias, asi que ahora vamos a calcular cada uno de tus valores, espera:\n";
	if (i_circuito == 1) { // resistencia total en serie
		for (int i = 0; i < circuit.NR; i++) {
			circuit.RT += circuit.Valfin.Rn[i];
		}//serie
	}
	else {//sacar la resistencia total en paralela
		float aux = 0;
		for (int i = 0; i < circuit.NR; i++) {
			aux += 1 / circuit.Valfin.Rn[i];
		}//paralelo
		cout << aux << endl;
		circuit.RT = 1 / aux;
	}
	Circuito *voltaje_tot, *intensidad_tot; // apuntador hacia la estructura
	voltaje_tot = &circuit;
	intensidad_tot = &circuit;
	//voltaje_tot->VT;
	//intensidad_tot->IT;

	cout << voltaje_tot->VT;
	cout << "Resistencia total: " << circuit.RT<< " ohms" << endl;
	//cout << "Voltaje total: " << circuit.VT << " volts" << endl;
	cout << "Voltaje total: " << voltaje_tot->VT << " volts" << endl;
	//circuit.IT = circuit.VT / circuit.RT;
	intensidad_tot->IT = circuit.VT / circuit.RT;
	cout << "Intensidad total: " << intensidad_tot->IT << " amperes" << endl;
	
	cout << "\n"; //espacio
	if (i_circuito == 1) {
		cout << "La intensidad de todas las resistencias es igual a la intensidad total\n";
		//IRn(circuit.Valfin.Rn, circuit.RT, circuit.IT, circuit.NR); primer manera
		IRn(circuit.Valfin.Rn, circuit.RT, intensidad_tot->IT, circuit.NR); //segunda manera
	} 
	else {
		cout << "El Voltaje de todas las resistencias es igual a el voltaje total\n";
		//VRn(circuit.Valfin.Rn, circuit.RT, circuit.VT, circuit.NR); primer manera
		VRn(circuit.Valfin.Rn, circuit.RT, voltaje_tot->VT, circuit.NR); //segunda manera
	}



}//main

double ohmresis(int c1, int c2, int c3) { //este solo lo voy a usar una vez, pero nunca se sabe
	 double Rn=0;
	 // c1= 1
	 Rn += (c1 * 10.00);
	 //c2 = 2
	 Rn += c2;
	 //cout << "Vale Rn" << Rn << endl;
	 switch (c3)
	 {	
	 case 0:
		 Rn = Rn;
		 break;
	 case 1:
		 Rn = Rn * 10;
		 break;
	 case 2:
		 Rn = Rn * 100;
		 break;
	 case 3:
		 Rn = Rn * 1000;
		 break;
	 case 4:
		 Rn = Rn * 10000;
		 break;
	 case 5:
		 Rn = Rn * 100000;
		 break;
	 case 6:
		 Rn = Rn * 1000000;
		 break;
	 case 7:
		 Rn = Rn * 10000000;
		 break;
	 case 8:
		 Rn = Rn * 100000000;
		 break;
	 case 9:
		 Rn = Rn * 1000000000; // problematica: c++ no tiene tantos digitos, tengo que abreviar
		 break;
	 default:
		 cout << "Como pudiste entrar aqui? jeje\n";
		 break;
	 }

	return Rn;
}


void Corlresis(int C) { //no necesitamos guardar estos datos, por eso el void
	switch (C)
		{
	case 0:
		cout << "Negro, ";
		break;
	case 1:
		cout << "Cafe, ";
		break;
	case 2:
		cout << "Rojo, ";
		break;
	case 3:
		cout << "Naranja, ";
		break;
	case 4:
		cout << "Amarillo, ";
		break;
	case 5:
		cout << "Verde, ";
		break;
	case 6:
		cout << "Azul, ";
		break;
	case 7:
		cout << "Morado, ";
		break;
	case 8:
		cout << "Gris, ";
		break;
	case 9:
		cout << "Blanco, ";
		break;
	default:
		cout << "Como pudiste entrar aqui? jeje\n";
		break;
		}

}//colores


void IRn(double* resis, float resistot,float intenstot, int Nr) {
	float IRn[5]; // por las maximas resistencias
	for (int i = 0; i < Nr; i++) {
		IRn[i] = intenstot * (resis[i]/resistot);
		cout << "Intensidad de la resistencia " << i + 1 << ": " << IRn[i] << endl;
	}
}//IRN

void VRn(double resis[], float resistot, float voltajtot, int Nr) {
	float VRn[5]; // por las maximas resistencias
	for (int i = 0; i < Nr; i++) {
		VRn[i] = voltajtot * (resistot/resis[i]  );
		cout << "Voltaje de la resistencia " << i + 1 << ": " << VRn[i] <<endl;
	}
}//IRN


//Fin del codigo hermnoso