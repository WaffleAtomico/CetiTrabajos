#include <iostream>
#include "pila.h"
#include "cola.h"
#include<string>
using namespace std;


class Hoja
{
public:
	float info;
	Hoja();
	Hoja(float x);
	Hoja* izq; 
	Hoja* der; 
	

};

Hoja::Hoja()
{
	info = NULL;
	der = izq = NULL;
}

Hoja::Hoja(float x)
{

	info = x;
	der = izq = NULL;
}

class Arbol
{
private:
	Hoja* raiz;
	
	Pila	pila, pila2;
	Cola cola, cola2, colaverificar;
	
	int limitador2=0, cont2=0, cont3=0;
	int soporte = 0;
	float cont = 0;

public:
	int limitador = 0;

	Arbol();

	
	Hoja* insertar( Hoja* nodo = (Hoja*)1);
	
	void verificar(Cola &auxiliar);
	 float resolver();
	 void Recorrido_post(Cola &cola, Hoja* nodo = (Hoja*)1);
	 float leer(char arreglo[]);
	 float decodificador(float a, float b, int oper);
	 void verificar_parentesis(Cola auxiliar);
	 int verificar_numeros();
	
};

 Arbol::Arbol()
{
	 raiz = NULL;

}

float Arbol::leer(char arreglo[])
{
	int indice = 0;
	Cola auxiliar;

	while (arreglo[indice] != '\0')
	{
		auxiliar.push((int)arreglo[indice]);
		colaverificar.push((int)arreglo[indice]);
		indice++;
	}

	cont = limitador = 0;
	cont2 = auxiliar.contar();
	
	verificar_parentesis(colaverificar);
	if (soporte == 0)
	{
		verificar(auxiliar);

		insertar((Hoja*)1);


		limitador2 = 0;
		float resultado = resolver();

		return resultado;

	}
	else
	{
		if (cont == 1)
		{
			cout << "Syntax ERROR \n Hay mas parentesis abiertos que parentesis para cerrar" << endl;
		}
		else
		{
			cout << "Syntax ERROR \n Hay mas parentesis de para cerrar que abiertos " << endl;
			
		}
		limitador = 1000;

		return NULL;

		
	}

		
		

	



}


void Arbol::verificar_parentesis(Cola auxiliar)
{
	int num = auxiliar.pop();
	if (num == 40)
	{
		cont++;
		
	}

	if (num == 41)
	{
		
		limitador++;
		
	}

	if (auxiliar.vacio() == 0)
	{
		

		if (cont == limitador)
		{
			soporte =0;
		}
		else
		{

			if (cont > limitador)
			{
				soporte=1;
			}
			else
			{
				soporte= 2;
			}
			
		}

	}
	else
	{
		verificar_parentesis(auxiliar);
	}



}


int Arbol::verificar_numeros()
{
	int aux1, aux2;
	limitador++;
	aux2 = pila2.pop();

	if (pila2.vacio())
		aux1 = pila2.pop();
	else
		return aux2*pow(10,limitador);
	limitador++;

		
			return (aux1 * pow(10, limitador)) + (aux2*pow(10,limitador-1)) + verificar_numeros();

}




void Arbol::verificar(Cola &auxiliar)
{
	

	if (cont2)
	{
		int num = auxiliar.pop();
		cont2--;
		if (num == 40)
		{
			num += 9999;
		
			cola.push(num);
		}

	
		if (num == (42) || num == (43) || num == (45) || num == (47) || num==(41))
		{

			if (soporte == 41)
			{
				soporte = num;
				cola.push((num + 9999));
			}
			else
			{
				limitador = -1;
				soporte = num;
				cola.push(verificar_numeros());
				cola.push((num + 9999));
			}
		}



		if (num >= 48 && num <= 57)
		{
			num -= 48;

			if (cont2 - 1 != -1)
			{
				pila2.push(num);
			}
			else
			{
				if (pila2.vacio())
				{
					limitador = -1;
					pila2.push(num);
					cola.push(verificar_numeros());
				}
				else
				{
					cola.push(num);
				}
				
			}




		}



		verificar(auxiliar);
	}


}









Hoja* Arbol::insertar(Hoja*nodo)
{
	float aux=0;

	if (nodo != (Hoja*)1)
	{
		aux = cola.pop();
	}
	
	
	if (nodo == (Hoja*)1)
	{
		
		nodo = raiz = new Hoja();
		raiz->izq = insertar(new Hoja());
		aux = cola.pop();
		while (aux == 41 + 9999) {
			aux = cola.pop();
		}
		raiz->der = insertar(new Hoja());

		

	}
	



		if (aux == (40 + 9999))
		{
			
			nodo->izq = insertar(new Hoja());
			aux = cola.pop();

			while (aux == 41 + 9999) {
				aux = cola.pop();
			}

			nodo->der = insertar(new Hoja());

		

		}
		
			if (aux == 41 + 9999)
			{
				while (aux == 41 + 9999)
					aux = cola.pop();

			}
			



				if (aux == (42 + 9999) || aux == (43 + 9999) || aux == (45 + 9999) || aux == (47 + 9999))
				{
					nodo->info = aux;

					
					
					return nodo;
				}
				else
				{
					nodo->info = aux;
					return nodo;
				}
			


		


	


	limitador = 0;
	


}

float Arbol::resolver()
{
	
	float aux = NULL;
	float operando1, operando2, operador;
	

	if (limitador2 == 0)
	{
		cola.limpiar();

		Recorrido_post(cola, raiz);

		limitador2 = 1;
	}

	if (cola.contar())
	{
		aux = cola.pop(); 
		
		if (aux == (42 + 9999) || aux == (43 + 9999) || aux == (45 + 9999) || aux == (47 + 9999))

		{
			operador = aux;


			operando2 = pila.pop();
			operando1 = pila.pop();

			if (operador == (47 + 9999) && operando2 == 0)
			{
				cout << "Syntax ERROR \n La operacion: " << operando1 << "/" << "0 no es valida." << endl;

				limitador = 1000;
				return NULL;
			}

			pila.push(decodificador(operando1, operando2, operador ));
			resolver();
		}

		else
		{
			pila.push(aux);
			resolver();
		}

	}


	if (pila.contar())
	{
		cont = pila.pop();
		
	}
	return cont;
		


}

float Arbol::decodificador(float a, float b, int oper)
{
	float csm = 0;
	switch (oper)
	{

	case (42 + 9999):  //multiplicacion


		csm = a * b;
		
		return csm;
		break;
	case (43 + 9999): // suma 

		csm = a + b;
			return csm;

		break;

	case (45 + 9999): // resta


		csm = a - b;
		return csm;

	case (47 + 9999): // division

		
		csm = a / b;
		return csm;

			break;

	}


}




void Arbol::Recorrido_post(Cola& cola, Hoja* nodo)
{
	if (nodo == NULL)
		return;

	Recorrido_post(cola, nodo->izq);
	Recorrido_post(cola, nodo->der);
		cola.push(nodo->info);
		
		delete nodo;
}
int main()
{
	Arbol expresion;
	char texto[70];
	cout << "Bienvenido a este epico arbol de expresiones!!! \n Ingresa la expresion a resolver: " << endl << endl;

	cin.getline(texto, 70, '\n');

	float a=  expresion.leer(texto);

	if (expresion.limitador == 1000)
	{
		
	}
	else
	{
		cout << endl <<  "Resultado: " << a << endl;
	}



}

