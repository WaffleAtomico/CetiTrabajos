#include <iostream>
using namespace std;

/*dudas
Como era para poner las sentencias en el codigo? jeje
como se cambia la posicion de un nodo? para cuando es eliminado
*/


class nodo{
	public:
	int x;
	nodo();
	nodo(int x);
	nodo *sig;
	
};

nodo::nodo(){
	x=0;
	sig=NULL;
} 
nodo::nodo(int x){
	this->x=x;
	sig=NULL;	
}


class lista{
	private:
	 nodo *i,*a; //"a" es auxiliar e "i" de inicio
	public:
	lista();
	void add(int x); //anadir un elemento
	void del(int x);//eliminar un elemento
	void delall();//eliminar todos los elementos
	int busc(int x);//buscar un elelemento por su valor
	int cont();//contrar los elementos
	// void impr(); //se deberia imprimir el objeto? no no se puede imprimir, esto solo sirve para guardar info
	nodo* obte(int i);//muestra en donde inician los elementos y en donde terminan
	~lista();
};

lista::lista(){
	a=NULL;
	i=NULL;
}
void lista::add(int x){
	if(i==NULL){ 		//si no hay nada se crea un nodo al inicio
		i = new nodo();
	}else				//sino auxiliar va a tener un nodo
		a= new nodo();
		
		nodo *p=i; 		//se hace un puntero del tipo nodo hacia inicio
	while(p->sig !=NULL){//mientras el siguiente no sea nulo
		p=p->sig;		//nuestro puntero lo asignamos hacia el siguiente
		p->sig=a;		//y este siguiente tomara el lugar de auxiliar que antes ya era una nueva varibale
	}					//en el momento en el que el siguiente tenga algo seguira hasta que encuentre algo vacio
}
void lista::del(int x){
	/*
	hay diferentes casos
	cuando se elimina el primero 
	cuando se elimina uno cualquiera 
	cuando se elimina un espacio nulo \v (palomita bonita)
	puedo llamar a buscar para conocer el valor que quiero eliminar
	*/
	
	if(x==NULL){
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
}

int lista::busc(int x){
	/*
	Cuando lo que se busca no se encuentra
	cuando se encuentra
	no tengo la mas minima idea je je je
	
	*/
	while(i || x==i->x){
		return x;
	}
}
	
int lista::cont(){
	int cont =0;
	while(i){
		i=i->sig;
		cont++;
	}
	if(cont ==0){
		cout << "No hay elementos"<<endl;
	}else
	cout <<"Cantidad de elementos en lista"<<cont<<endl;
}
nodo* lista::obte(int i){
	//cuando no hay nada que obtener
	//cuando si hay algo, contando que deben aparecer todos unidos, sin espacios
}

lista::~lista(){
	delall();
}

int main(){
	//variables main
	int op=0;
//	ob1.lista();
	do{
		cout<<"Elija una opcion"<<endl;
		cout<<"1.-Agregar"<<endl;
		cout<<"2.-Eliminar"<<endl;
		cout<<"3.-Eliminar todos"<<endl;
		cout<<"4.-Buscar"<<endl;
		cout<<"5.-Contar"<<endl;
		cout<<"6.-Obtener"<<endl;
		cout<<"7.-Salir"<<endl;
		//
		cin>> op;
		switch(op){
			case 1:
				{
					cout<<"1"<<endl;
					break;
				}
			case 2:
				{
					cout<<"2"<<endl;
					break;
				}
			case 3:
				{
					cout<<"3"<<endl;
				
				//	ob1.delall();	
					break;
				}
			case 4:
				{
					cout<<"4"<<endl;	
					break;
				}
			case 5:
				{
					cout<<"5"<<endl;	
					break;
				}
			case 6:
				{
					cout<<"6"<<endl;	
					break;
				}
							
		}
	}while(op !=7);
	
	return 0;
}


