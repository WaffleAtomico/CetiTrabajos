#include <iostream>
using namespace std;

class hoja{
	public:
		hoja();
		hoja(int x);
		int info;
		hoja *izq;
		hoja *der;
};
class nodo{
	public:
	int x;
	nodo();
	nodo(int x);
	nodo *sig;
	nodo *izq;	
};

hoja::hoja(){
	info=0;
	izq=NULL;
	der=NULL;	
} 
nodo::nodo(){
	x=0;
	sig=NULL;
	izq=NULL;	
} 
hoja::hoja(int x){
	this->info=x;
	der=NULL;
	izq=NULL;	
}
nodo::nodo(int x){
	this->x=x;
	sig=NULL;
	izq=NULL;	
}


class arbol{
	private:
	 //nodo *i,*a;
	 hoja *raiz, *a;
	public:
	arbol();
	void add(int x); //anadir un elemento
	void del(int x);//eliminar un elemento
	void delall();//eliminar todos los elementos
	int busc(int x);//buscar un elelemento por su valor
	int cont();//contrar los elementos
	nodo* recorrer(char selec);//muestra en donde inician los elementos y en donde terminan
	~arbol();
};

arbol::arbol(){
	raiz=NULL;
	a=NULL;
}
void arbol::add(int x){
/*	if(i==NULL){ 		//si no hay nada se crea un nodo al inicio
		i = new nodo();
	}else				//sino auxiliar va a tener un nodo
		a= new nodo();
		
		nodo *p=i; 		//se hace un puntero del tipo nodo hacia inicio
	while(p->sig !=NULL){//mientras el siguiente no sea nulo
		p=p->sig;		//nuestro puntero lo asignamos hacia el siguiente
		p->sig=a;		//y este siguiente tomara el lugar de auxiliar que antes ya era una nueva varibale
	}					//en el momento en el que el siguiente tenga algo seguira hasta que encuentre algo vacio
*/
	if(raiz == NULL){ //si no tiene una raiz
		raiz = new hoja(x);	
	}else{ //si ya tiene una raiz
		if()
	}
	
}

void arbol::del(int x){
	/*
	if(x==NULL){
		cout << "No hay nada que eliminar"<<endl;
	}
	*/
}

void arbol::delall(){
	/*
	if(i==NULL){
		cout<<"Elementos eliminados"<<endl;
	}
	a=i;
	while (i){
		i=i->sig;
		delete a;
		a=i;	
	}
	*/
}

int arbol::busc(int x){
	/*
	while(i || x==i->x){
		return x;
	}
	*/
}
	
int arbol::cont(){
	/*
	int cont =0;
	while(i){
		i=i->sig;
		cont++;
	}
	if(cont ==0){
		cout << "No hay elementos"<<endl;
	}else
	cout <<"Cantidad de elementos en arbol"<<cont<<endl;
	*/
}
nodo* arbol::recorrer(char selec){
	//cuando no hay nada que obtener
	//cuando si hay algo, contando que deben aparecer todos unidos, sin espacios
	switch(selec){
		case 'a':
			cout<<"Orden"<<endl;	
			
		break;	
		case 'b':
			cout<<"Preorden"<<endl;	
			
		break;
		case 'c':
			cout<<"Postorden"<<endl;	
			
		break;	
	}
}



arbol::~arbol(){
	delall();
}

int main(){
	//variables main
	int op=0, x=0;
	arbol ob1;
	do{
		cout<<"Elija una opcion"<<endl;
		cout<<"1.-Agregar"<<endl;
		cout<<"2.-Eliminar"<<endl;
		cout<<"3.-Eliminar todos"<<endl;
		cout<<"4.-Buscar"<<endl;
		cout<<"5.-Contar"<<endl;
		cout<<"6.-Recorrer"<<endl;
		cout<<"7.-Salir"<<endl;
		//
		cin>> op;
		switch(op){
			case 1:
				{
					cout<<"1"<<endl;
					cout<<"Valor a agregar:";
					cin >> x;
					ob1.add(x);
					break;
				}
			case 2:
				{
					cout<<"2"<<endl;
						cout<<"Valor a eliminar:";
					cin >> x;
					ob1.del(x);
					break;
				}
			case 3:
				{
					cout<<"3"<<endl;
					ob1.delall();
					break;
				}
			case 4:
				{
					cout<<"4"<<endl;	
						cout<<"Valor a buscar: ";	
					cin >> x;					
					if(ob1.busc(x)){
						cout << "Elemento encontrado: ";
						cout << ob1.busc(x) <<endl;
					}else{
						cout << "Elemento no encontrado"<<endl;
					}
					break;
				}
			case 5:
				{
					cout<<"5"<<endl;
					x = ob1.cont();
					cout<<"Hay "<< x <<" elementos"<<endl;	
					break;
				}
			case 6:
				{
					char reco = 'S';
					cout<<"6"<<endl;	
					cout<<"Elija el metodo de como recorrerá el arbol"<<endl;
					cout<<"a.-Orden"<<endl;
					cout<<"b.-Preorden"<<endl;
					cout<<"c.-Postorden"<<endl;
					cout<<"s.-Salir"<<endl;
					cin >> reco;
					ob1.recorrer(reco);
					/*switch(reco){
						case 'a':
							cout<<"Orden"<<endl;	
							
						break;	
						case 'b':
							cout<<"Preorden"<<endl;	
							
						break;
						case 'c':
							cout<<"Postorden"<<endl;	
							
						break;	
					}*/
					break;
				}
							
		}
	}while(op !=7);
	
	return 0;
}


