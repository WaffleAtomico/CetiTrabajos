#include <iostream>
using namespace std;
//Tema: indices
/*
Existen cosas llamadas listas enlazadas
datos anlzados: cuando la informacion llega a tener una cracteristica en comun
a esos elementos les llaman TDA (Tipos de datos abstractos).
Es un proceso dinamico en odnde se puede vincular datos.
Estas hechos para contener dos cosas, un tipo de dato(Informacion) y un enlace
Una entidad un conjunto de valores y un enlace

Enlace: consiste en tener un bloque de informacion en donde se puede 
Tener un bloque con la misma informacion

Estos se usan cuando la informacion es variable

La memoria dinamica se almacena en un espacio designadoo para un programa
y esta memoria dinamica tiene un espacio disponible muchisimo mas amplio

Un TDA es una entidad, significa que todos estos habitan en un mismo sitio
Son una clase o una estructura, lo que se prefiera
vamos a usar clases para este tema

Un TDA solo sirve para guardar datos pero de manera dinamica.

*/

class persona{
	public:
	
};

class TDA{
	public://temporalmente va a ser publico
		//info, puede ser de distintos tipos
		int info;
		//enlace
		TDA *enlace; //no se puede crear un objeto dentro del mismo tipo, es una recursividad infinita, se arregla con *
		TDA();
		//los delete invocan al destructor
};
TDA::TDA(){
	enlace = NULL;
}

//depende del lenguaje si se escribe NULL o null /ptrnull o nullptr
int main(){
	/* el 2do punto
	
	//TDA inicio;//he creao un error, ya que no tiene nada de informacion entonces no almacena nadaaa
	TDA *inicio= NULL;//listo, ahora almacena la localidad de alguna variable, en este caso un NULL por ser una direccion
	//de momento el programa no tiene nada de informacion, pero antes tenemos que acceder a las direcciones dinamicas
	inicio = new TDA(); //se crea un objeto y un espacio en la memoria en donde quepa el TDA, lo reserva
	inicio ->info =10; //->acceso indirecto
	//que sucede con el enlace?
//	inicio->enlace = NULL;
	cout <<inicio<<endl; //a donde apunta incio
	cout <<&inicio<<endl;//donde esta incio
	cout <<inicio->info <<endl;//un 10, el dato que se almacena
	cout <<inicio->enlace <<endl;//un 1 o un 0, en este caso un 0
	//supongamos que el usuario ingresa un 8 y lo tenemos que almacenar en nuestro contenedor
	//Tenemos que crear un nuevo TDA, el siguiente, solo que no se pueden poner mas variables
	
	inicio->enlace=new TDA(); 
	inicio->enlace->info=8;
//	inicio->enlace->enlace = NULL; //se pueden usar constructores para que no sea tan repetitivo
	cout <<"En otro nivel..."<<endl;
	cout <<inicio->enlace<<endl;
	cout <<&inicio->enlace<<endl;
	cout <<inicio->enlace->info<<endl;
	cout <<inicio->enlace->enlace<<endl;
	
	inicio->enlace->enlace =new TDA(); 
	inicio->enlace->enlace->info=9;
//	inicio->enlace->enlace->enlace = NULL; //se pueden usar constructores para que no sea tan repetitivo /hecho
	cout <<"En otro nivel+1..."<<endl;
	cout <<inicio->enlace->enlace <<endl;
	cout <<&inicio->enlace->enlace <<endl;
	cout <<inicio->enlace->enlace->info<<endl;
	cout <<inicio->enlace->enlace->enlace <<endl;
	
	*/
	
	//esto a la larga esta horrible, hay que disminuir la cantidad de "Enlace" bla bla bla
	//y tambien lo de null
	//no olvidar eliminar todos los delete
	//1era solucion mas sencilla, constructores para los null
	//2da achicar el codigo
	
	TDA *inicio = NULL, *i;
	// todo lo del enlace bla bla bla
	i=inicio;
	int i_cont =0;//para contar las veces que se repite
	while(i/*->enlace*/){//para detenerse en el ultimo que no sea NULL / en sintaxis esto esta mal "->", que pasa si no hay datos?
	//Por lo tanto el bloque de ->enlace no existe, por eso se elimina
	
	i=i->enlace;//se mueve la i conforme pasan las iteraciones
	//i=i->enlace;
	i_cont++;
	}
	
	i->enlace=new TDA();
	i->enlace->info=80;
	
	//i=inicio;
	while(inicio){
		inicio = inicio->enlace;
		delete i;
		i=inicio;
	}
	
	//cout<<  <<endl;
	//delete();
	return 0;
}
