#include <iostream>
#include "Lista.h"
using namespace std;

lista::lista(){
	a=NULL;
	i=NULL;
}
void lista::add(int x){
	if(i==NULL){ 		//si no hay nada se crea un nodo al inicio
		i = new nodo(x);
	}else				//sino auxiliar va a tener un nodo
		a= new nodo(x);
		
		nodo *p=i; 		//se hace un puntero del tipo nodo hacia inicio
	while(p->sig !=NULL){//mientras el siguiente no sea nulo
		p=p->sig;		//nuestro puntero lo asignamos hacia el siguiente
			//y este siguiente tomara el lugar de auxiliar que antes ya era una nueva varibale
	}	
	p->sig=a;					//en el momento en el que el siguiente tenga algo seguira hasta que encuentre algo vacio
}



void lista::del(int x){
	/*
	hay diferentes casos
	cuando se elimina el primero 
	cuando se elimina uno cualquiera 
	cuando se elimina un espacio nulo \v (palomita bonita)
	puedo llamar a buscar para conocer el valor que quiero eliminar
	*/
	nodo* p = NULL; //creamos un puntero para saber la posicion anterior
	if(i){		
		a=busc(x); //nos va a retornar un puntero de tipo nodo(posicion de memoria) para saber que variable eliminar
		if(a == i){ // si mi valor esta en la primera posicion que va a hacer?
			//Dos casos, si solo tiene un elemento o si existen mas de uno
			i=i->sig; //i lo pasamos a la siguiente posicion
		 //y eliminamos a ya que esta en la primera posicion
		}else{ // que pacas cuando se elimina un valor cualquiera
			p=i;
			while(p->sig != a){ //para que tengamos una variable antes de nuestra posicon actual
				p = p->sig;
			}	 //fin de siguienten't, o sea, pasado
			p->sig = a->sig;
		}		
		delete a; //como al final siempre se va a eliminar a, solamente lo ponemos afuera de nuestras sentencias	
	}else{
		cout << "No hay nada que eliminar"<<endl;
	}
	
}

void lista::delall(){
	if(i==NULL){
		cout<<"Elementos eliminados"<<endl;
	}
	a=i;
	while (i){
		i=i->sig;
		delete a;
		a=i;	
	}
	i=NULL;
	a=NULL;
}


nodo* lista::busc(int x){
	/*
	
	Cuando lo que se busca no se encuentra
	cuando se encuentra
	no tengo la mas minima idea je je je
	
	*/ 
	a=i; //auxiliar es igual al incio
	while(a){ //minetras auxiliar no sea nulo se repetira
		
		if(a->x == x){ // si el valor de x en a es igual a el valor de usuario
		return a; //retornamos el valor de tipo nodo
		a=a->sig; //y pasamos al siguiente
	}
		a=a->sig;
	}
	return NULL; //el while se repetira hasta que encuentre el valor, pero en el caso de que no este, simplemente dará un null
	
	
}
	
int lista::cont(){
	int cont =0;
	a=i; //para no alterar el incio
	while(a){
		a=a->sig;//para tomar el siguiente
		cont++;//aumentamos el contador
	}
		return cont; //retornamos nuestro contador como haya quedado
}
void lista::obte(){
	//cuando no hay nada que obtener
	//cuando si hay algo, contando que deben aparecer todos unidos, sin espacios
	a=i;
	while(a){ // mientras no sea nulo nuestra a
		cout <<" Nodo: " << a <<", Valor del nodo: " <<a->x <<", A donde apunta "<< a->sig <<endl;	
		a=a->sig;
	}
	
}

lista::~lista(){
	delall();
}
