
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
	nodo* busc(int x);//buscar un elelemento por su valor
	int cont();//contrar los elementos
	// void impr(); //se deberia imprimir el objeto? no no se puede imprimir, esto solo sirve para guardar info
	void obte();//muestra en donde inician los elementos y en donde terminan solo vamos a mostrar
	~lista();
};

