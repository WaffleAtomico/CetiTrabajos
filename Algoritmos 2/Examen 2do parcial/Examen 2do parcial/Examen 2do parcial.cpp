// Examen 2do parcial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <time.h>
using namespace std;

//procedimientos
void Adop(bool* adop, char* tipo, int* edad, int* estado, int sino);
void info(bool* adop, char* tipo, int* edad, int* estado, char espe);
float edadprom(char* tipo, int* edad, char espe); //esto falla y no tengo ni idea de como
//void salud(char* tipo, int* estado, char espe);


int main()
{
	struct Animales
	{
		int DESDE = 1, HASTA = 3;
		int op, subop;//los switch
		bool door[3] = {false, false, false};
		struct GPC{

			char tipo[10] = {'G','P','C','G','P','C', 'G','P','C', 'C'};
		int edad[10];
		int estsad[10];
		bool adop[10] = {true, false, true, true, false, true, false, true, false, false};
		}; // gato perro cuyo

		 GPC nimal;
	};

	Animales pet;

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {//para asignarle el valor a cada uno de los datos
		pet.nimal.edad[i] = rand() % (pet.HASTA - pet.DESDE + 1) + pet.DESDE;
		pet.nimal.estsad[i] = rand() % (pet.HASTA - pet.DESDE + 1) + pet.DESDE;
	}
	//para hacer pruebas
	for (int i = 0; i < 10; i++) {
		cout << "Mascota " << i+1 << endl;
		cout <<pet.nimal.tipo[i] <<endl;
		cout << pet.nimal.edad[i] << endl;
		cout << pet.nimal.estsad[i] << endl;
		cout << pet.nimal.adop[i] << endl;

	}

	while (!pet.door[1]) {
		char temp; // para pasar al final
		pet.door[0] = false; //para que siempre que se repita agarre el valor incial de nuevo

		cout << "1--- Mostrar informacion de los animales que NO estan en proceso de adopcion\n";
		cout << "2-- Mostrar la informacion de los animales que SI estan en proceso de adopcion\n";
		cout << "3--Mostrar la infromacion de todos los perros O gatos O cuyos\n";
		cout << "4-- Edad promedio de los perros, gatos O cuyos\n";
		cout << "5-- Seleccion se se quiere mostrar un perro, gato o cuyo, que la edad sea igual o menor a un valor ingresado\n";
		cout << "6-- Ver en forma cronologica desde el animal que tiene menos tiempo en el albergue hasta el que tiene mas\n";
		cout << "7 Mostrar todos los perros O gatos O cuyos que tienen un estado bueno o regular\n";
		while (!pet.door[0]) {
			cout << "Que vas a elegir?\n";
			cin >> pet.op;

			if (pet.op > 0 && pet.op < 8) {
				pet.door[0] = true;
			}

		}
		switch (pet.op)
		{
		case 1:
			cout << "1--- Mostrar informacion de los animales que NO estan en proceso de adopcion\n";
			Adop(pet.nimal.adop, pet.nimal.tipo, pet.nimal.estsad, pet.nimal.edad, pet.op);
			break;
		case 2:
			cout << "2-- Mostrar la informacion de los animales que SI estan en proceso de adopcion\n";
			Adop(pet.nimal.adop, pet.nimal.tipo, pet.nimal.estsad, pet.nimal.edad, pet.op);
			break;
		case 3:
			
			cout << "3--Mostrar la infromacion de todos los perros O gatos O cuyos\n";
			cout << "Vas a pedir la informacion de..\n";
			cout << "	1 -- Perros\n";
			cout << "	2 -- Gatos\n";
			cout << "	3 -- Cuyos\n";
			cin >> pet.subop;
			
			if (pet.subop == 1) {
				temp = 'P';
			}
			if (pet.subop == 2) {
				temp = 'G';
			}
			if (pet.subop == 3) {
				temp = 'C';
			}
			switch (pet.subop) //no lo voy a quitar solo por si el valor es diferente
			{
			case 1:
				info(pet.nimal.adop, pet.nimal.tipo, pet.nimal.edad, pet.nimal.estsad, temp);
				break;
			case 2:
				info(pet.nimal.adop, pet.nimal.tipo, pet.nimal.edad, pet.nimal.estsad, temp);
				break;
			case 3:
				info(pet.nimal.adop, pet.nimal.tipo, pet.nimal.edad, pet.nimal.estsad, temp);
				break;
			default:
				cout << "Ingresa un valor valido\n";
				break;
			}
			break;

		case 4:
			cout << "4-- Edad promedio de los perros, gatos O cuyos\n";
			//char temp; // mismo caso que antes
			cout << "Vas a pedir la informacion de..\n";
			cout << "	1 -- Perros\n";
			cout << "	2 -- Gatos\n";
			cout << "	3 -- Cuyos\n";
			cin >> pet.subop;

			if (pet.subop == 1) {
				temp = 'P';
			}
			if (pet.subop == 2) {
				temp = 'G';
			}
			if (pet.subop == 3) {
				temp = 'C';
			}
			switch (pet.subop) //no lo voy a quitar solo por si el valor es diferente
			{
			case 1:
				cout << "La edad promedio de los perros es " << edadprom(pet.nimal.tipo, pet.nimal.edad, temp) << endl;
				break;
			case 2:
				cout << "La edad promedio de los Gatos es " << edadprom(pet.nimal.tipo, pet.nimal.edad, temp) << endl;
				break;
			case 3:
				cout << "La edad promedio de los Cuyos es " << edadprom(pet.nimal.tipo, pet.nimal.edad, temp) << endl;
				break;
			default:
				cout << "Ingresa un valor valido\n";
				break;
			}//switch interno
			
			break;
		case 5:
			cout << "5-- Seleccion si se quiere mostrar un perro, gato o cuyo, que la edad sea igual o menor a un valor ingresado\n";

			break;
		case 6:
			cout << "6-- Ver en forma cronologica desde el animal que tiene menos tiempo en el albergue hasta el que tiene mas\n";

			break;
		case 7:
			cout << "7-- Mostrar todos los perros O gatos O cuyos que tienen un estado bueno o regular\n";
			//char temp;
			cout << "3--Mostrar la infromacion de todos los perros O gatos O cuyos\n";
			cout << "Vas a pedir la informacion de..\n";
			cout << "	1 -- Perros\n";
			cout << "	2 -- Gatos\n";
			cout << "	3 -- Cuyos\n";
			cin >> pet.subop;

			if (pet.subop == 1) {
				temp = 'P';
			}
			if (pet.subop == 2) {
				temp = 'G';
			}
			if (pet.subop == 3) {
				temp = 'C';
			}
			switch (pet.subop) //no lo voy a quitar solo por si el valor es diferente
			{
			case 1:
				//info(pet.nimal.tipo, pet.nimal.estsad, temp);
				break;
			case 2:
				//info(pet.nimal.tipo, pet.nimal.edad, pet.nimal.estsad, temp);
				break;
			case 3:
				//info(pet.nimal.tipo, pet.nimal.edad, pet.nimal.estsad, temp);
				break;
			default:
				cout << "Ingresa un valor valido\n";
				break;
			}
			break;
			break;
		default:
			cout << "Imposible, como entraste?\n";
			break;
		}



		//preguntamos para repetir
		cout << "Quieres repetir el menu?s/n\n";
		cin >> temp;
		if (temp != 's') {
			pet.door[1] = true;
			}//if puerta principal
}//while principal
	

}//main


void Adop(bool* adop, char* tipo, int* edad, int* estado, int sino) {

	for (int i=0; i < 10; i++) {
		if (sino == 1  && adop[i] == false ) {
			cout << "Mascota " << i + 1 << endl;
			cout << "Es un " << tipo[i] << endl;
			cout << "Edad " << edad[i] << endl;
			if (estado[i] == 1) { //posiblemente muy usado
				cout << "Estado bueno"<<endl;
			}//bien
			if (estado[i] == 2) {
				cout << "Estado regular" << endl;
			}//regu
			if (estado[i] == 3) {
				cout << "Esta siendo atendido" << endl;
			}//mal
		}//if
		else if(sino == 2 && adop[i]== true ) { //si si esta adoptado entonces lo muestra esto, tanto por la opcion como por el condicion
			cout << "Mascota " << i + 1 << endl;
			cout << "Es un " << tipo[i] << endl;
			cout << "Edad " << edad[i] << endl;
			if (estado[i] == 1) {
				cout << "Estado bueno" << endl;
			}//bien
			if (estado[i] == 2) {
				cout << "Estado regular" << endl;
			}//regu
			if (estado[i] == 3) {
				cout << "Esta siendo atendido" << endl;
			}//mal
		}//else
	}//for
	
}//adop


void info(bool* adop, char* tipo, int* edad, int* estado, char espe) {
	for (int i = 0; i < 10; i++) {
		if (tipo[i] == espe) { //esta chikito, pq al final solo es mostrar informacion de una especie
			cout << "Mascota " << i + 1 << endl;
			cout << "Edad " << edad[i] << endl;
			cout << "Estado de adopcion " << adop[i] << endl;
			if (estado[i] == 1) {
				cout << "Estado bueno" << endl;
			}//bien
			if (estado[i] == 2) {
				cout << "Estado regular" << endl;
			}//regu
			if (estado[i] == 3) {
				cout << "Esta siendo atendido" << endl;
			}//mal

		}//if
	}//for


}//void

float edadprom(char* tipo, int* edad, char espe)
{
	float prom = 0.00;
	float cont = 0;
	
	for (int i = 0; i < 10; i++) {
		if (tipo[i] == espe) { //esta chikito, pq al final solo es mostrar informacion de una especie
			prom += edad[i];
				cont++;
		}//if
	}//for
	prom = prom / cont;
	
	return prom;
}//void


//void salud(char* tipo, int* estado, char espe) {
//aqui pondria los animales con estdo de salud buenos

//}