#include <iostream>

using namespace std;
class hoja{
	public:
		hoja();
		hoja(int x);
		int info;
		hoja *izq;
		hoja *der;
		hoja *padre;
};
hoja::hoja(){
	info=0;
	izq=NULL;
	der=NULL;
	padre = NULL;	
} 
hoja::hoja(int x){
	this->info=x;
	der=NULL;
	izq=NULL;
	padre=NULL;	
}
//los de nodod depues tendr�n que eliminarse, todo debe de ser entorno a hoja


class nodo{ //como no quiero que implosione mi codigo ccon un archivo .h, mejor agrego la lista aqui :c
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
	 nodo *i,*a; 
	public:
	lista();
	void add(int x);
	void del(int x);
	void delall();
	nodo* busc(int x);
	int cont();
	void obte();
	~lista();
};
lista::lista(){
	a=NULL;
	i=NULL;
}
void lista::add(int x){
	if(i==NULL){ 	
		i = new nodo(x);
	}else			
		a= new nodo(x);
		
		nodo *p=i; 	
	while(p->sig !=NULL){
		p=p->sig;

	}	
	p->sig=a;
}
void lista::del(int x){
	nodo* p = NULL;
	if(i){		
		a=busc(x); 
		if(a == i){ 
			i=i->sig; 
		}else{ 
			p=i;
			while(p->sig != a){ 
				p = p->sig;
			}
			p->sig = a->sig;
		}		
		delete a;
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
	a=i; 
	while(a){ 
		if(a->x == x){ 
		return a;
		a=a->sig; 
	}
		a=a->sig;
	}
	return NULL; 
}
int lista::cont(){
	int cont =0;
	a=i;
	while(a){
		a=a->sig;
		cont++;
	}
		return cont;
}
void lista::obte(){
	a=i;
	while(a){ 
	//	cout <<" Nodo: " << a <<", Valor del nodo: " <<a->x <<", A donde apunta "<< a->sig <<endl;	
	cout<< a->x << ", ";
		a=a->sig;
	}	
	cout << "\n";
}
lista::~lista(){
	delall();
}

//hacemos nuestro arbol

class arbol{
	private:
	lista list;
	hoja *raiz, *a, *lob, *sus, *p;
	public:
	arbol();
	void add(int x, hoja *nodo); //anadir un elemento
	void del(int x, bool i, hoja *nodo);//eliminar un elemento
	void delall(hoja *nodo);//eliminar todos los elementos
	int busc(int x, bool i, hoja *nodo);//buscar un elelemento por su valor
	int contar(int cont, hoja *nodo);//contrar los elementos
	lista* recorrer(char selec, lista &list, hoja *nodo);//muestra en donde inician los elementos y en donde terminan
	void orden(hoja *nodo, lista &list);
	void preorden(hoja *nodo, lista &list);
	void postorden(hoja *nodo, lista &list);
	~arbol();
};
arbol::arbol(){
	raiz=NULL;
	a=NULL;
	lob=NULL; //otra auxiliar
	sus=NULL; //valor que vamos a sustituir
	p = NULL;
	//sigizq = a->izq;
	//sigder = a->der;
}
void arbol::add(int x, hoja *nodo = (hoja*)1){
	if(nodo == (hoja*)1)
	{
		nodo= raiz;
	}

	if(raiz == NULL){ //si no tiene una raiz
		raiz = new hoja(x);	
		raiz->padre = NULL;
	}
	else{ //si ya tiene una raiz
		//se tiene que comparar si es mayor a la raiz, si es mayor se agrega a la derecha
		if(x > nodo->info){
			if(nodo->der == NULL){ //para saber si no tiene algo
					nodo->der = new hoja(x);//como no tiene agregamos el valor
					(nodo->der)->padre = nodo;
			}
			else{
				add(x, nodo->der); //lo movemos ala derecha ya que ya sabemos que es mayor y si tiene algo
			}
		}
		else{//si llega a ser menor
			if(nodo->izq == NULL){ //para saber si no tiene algo
					nodo->izq = new hoja(x);//como no tiene agregamos el valor
					(nodo->izq)->padre = nodo;
			}
			else{
				add(x, nodo->izq); //lo movemos ala izquierda ya que ya sabemos que es menor y si tiene algo
			}
		}
	}
	
}
void arbol::del(int x, bool i, hoja *nodo = (hoja*)1){
//ta canon, pq, look hermano, de que tenemos este pedo aca bn hecho no
//vamos a agarrar mayor de los menores como bien dicen por ahi los chavos
/*	if(nodo == (hoja*)1)
	{
		nodo= raiz;
	}
	if(raiz == NULL){
		cout << "No hay nada que eliminar"<<endl;
	}else{
		cout <<busc(x,0,nodo)<<endl;
		if(busc(x,0,nodo) == 1){ //para saber si existe o no
			/*
			cosas a tomar en cuenta para eliminar
			el nodo tiene hijos?
			si
				hacia que lado?
					derecha 
					menor de los mayores
						se toma el valor de la izquierda 
						y todas las siguientes iteraciones
						iremos al de la derecha hasta toparnos con un valor sin hijos a la derecha
						si tiene hijos a la izquierda.... mayor de los menores
					si no
					mayor de los menores
						se toma el valor de la derecha 
						y todas las siguientes iteraciones
						iremos al de la izquierda hasta toparnos con un valor sin hijos a la izquierda
						si tiene hijos a la derecha.... menor de los mayores
			no
				eliminalo sin mas ya que es una hoja	
			*/	
		/*	
			//ya se cual nodo voy a intercambiar para eliminar
			if(x > nodo->info){//si x es mayor al nodo actual
				del(x,nodo->der); //mandamos este valor a otra iteracion
			}else if(nodo->info == x){//si es el que buscamos ya sabemos donde esta :D
				a = nodo; //en nuestra auxiliar tenemos donde esta el que eliminaremos
				cout<< "Valor a eliminar: "<<nodo->info <<" nodo: "<< a <<endl;
						if(a->der == NULL && a->izq == NULL && a->padre == NULL && a==raiz){ //si es raiz
							cout <<"Ola entre a la raiz"<<endl;
							delall(nodo);
							//delete a;
							//raiz = NULL;
							return;
						}else if(a->der == NULL && a->izq == NULL && a !=raiz ){ //si es hoja
							cout<<"A era una hoja "<<endl;
							if( (a->padre)->der != NULL && ((a->padre)->der == a) ){
								(a->padre)->der = NULL;
							}
							else if( (a->padre)->izq != NULL && ((a->padre)->izq == a) ){
								(a->padre)->izq = NULL;		
							}
							delete a;
							return;
						}else /*if(a->der != NULL && a->izq != NULL && a != raiz)*//*{
							cout <<"Ola entre a Mm mM"<< lob->info <<endl;
							if (a->der != NULL){//si si tiene a la derecha mayor de los menores
								lob = a->der;
									while( (lob->izq) !=NULL ){// mientras tenga valores a la izquierda
										lob=lob->izq; //lob sera el valor que tenemos a la izquierda
									}
								cout <<"Ola entre a Mm mM"<< lob->info <<endl;
								sus = a; //lob va a ser el valor que se habra encontrado y que se sustituira
								a = lob;
								a = sus;
								delete a;
							}else{//si si tiene a la izquierda
									cout <<"oli";
								if (a->izq != NULL){//si si tiene a la derecha mayor de los menores
								lob = a->izq;
									while( (lob->der) !=NULL ){// mientras tenga valores a la izquierda
										lob=lob->der; //lob sera el valor que tenemos a la izquierda
									}
								cout <<"Ola entre a Mm mM"<< lob->info <<endl;
								sus = a; //lob va a ser el valor que se habra encontrado y que se sustituira
								a = lob;
								a = sus;
								delete a;
								}
							}	
						}	
			}else if(x < nodo->info){//si es menor entonces esta a la izquierda
				del(x,nodo->izq);
			}	
		}else{ //si el valor no existe
			cout<<"Este valor no se puede eliminar porque no existe"<<endl;
		}
	}*/
	
	
	
		if(nodo == (hoja*)1)
	{
		nodo= raiz;
	}
	
    i = busc(x,i, nodo);
    if (i == 0)
        cout << "El dato que quiere eliminar no existe\n\n";
    else if (i == 1)
    {
        if (p == raiz)
        {
            if (p->der == NULL && p->izq == NULL)
            {
                delete p;
                raiz = NULL;
                p = NULL;
            }

            else if (p->izq == NULL)
            {
                raiz = p->der;
                delete p;
                p = raiz;
            }

            else if (p->der == NULL)
            {
                raiz = p->izq;
                delete p;
                p = raiz;
            }

            else
            {
                lob = p->izq;
                while (lob->der != NULL)
                {
                    p = lob;
                    lob = lob->der;
                }
                raiz->info = lob->info;
                if (lob->izq != NULL)
                {
                    p = lob->izq;
                    delete lob;
                    nodo->padre = NULL;
                }
                else
                {
                    delete lob;
                    p->izq = NULL;
                    nodo->padre = NULL;
                }
            }
        }

        else if (p->izq == NULL && p->der == NULL)
        {
            if (lob->izq == p)
                lob->izq = NULL;
            else if (lob->der == p)
                lob->der = NULL;
            delete p;
        }

        else
        {
            if (p->izq == NULL)
            {
                lob->izq = p->der;
                delete p;
                p = NULL;
            }

            else if (p->der == NULL)
            {
                lob->izq = p->izq;
                delete p;
                p = NULL;
            }

            else
            {
                lob = p;
                while (lob->der != NULL)
                    lob = lob->der;
                p->info = lob->info;
                while (p->der != lob)
                    p = p->der;
                delete lob;
                p->der = NULL;
            }
        }
    }
	
	
}
void arbol::delall(hoja *nodo = (hoja*)1){
	if(nodo == (hoja*)1)
	{
		nodo = raiz;
	}
	if(raiz == NULL){
		cout <<"Elementos eliminados"<<endl;
	}
	else{
		if(nodo->izq != NULL){
			delall(nodo->izq);
		}
		if(nodo->der != NULL){
			delall(nodo->der);
		}
		delete nodo;
		raiz = NULL;	
	}
}
int arbol::busc(int x, bool i, hoja *nodo = (hoja*)1){
//	if(contar(0,nodo) > 0){
	/*	if(nodo == (hoja*)1)
		{	nodo = raiz;	}
		if(nodo->info == x || i == 1){
			i=1;
		return (nodo->info==x); //si existe
		}else{	
		if(nodo->izq != NULL)
			busc(x, i, nodo->izq);
		if(nodo->der != NULL)
			busc(x, i, nodo->der);
		}
	//}*/
	if(nodo == (hoja*)1)
	{
		nodo = raiz;
	}
	if (i == 1)
        return 1;
    if (nodo->info == x)
    {
        p = nodo;
        i = 1;
    }
    else
    {
        if (nodo->der != NULL || nodo->izq != NULL)
        lob = nodo;
        i = 0;
    }
    if (nodo->izq != NULL)
        i = busc(x, i, nodo->izq);
    if (nodo->der != NULL)
        i = busc(x, i, nodo->der);
    return i;	
}	
int arbol::contar(int cont, hoja *nodo = (hoja*)1){
//	cout << "cont "<< cont <<endl;
	if(nodo == (hoja*)1)
	{
		nodo= raiz;
	}
	if(raiz == NULL){
		return 0;
	}
	else{
		
		if (nodo == raiz){
			cont++;
		}
		if(nodo->izq != NULL){
			cont++;
			cont = contar(cont, nodo->izq);
		}
		if(nodo->der != NULL){
			cont++;
			cont = contar(cont, nodo->der);
		}
		return cont;
	}

}
lista* arbol::recorrer(char selec, lista &list, hoja *nodo = (hoja*)1){
	//cuando no hay nada que obtener
	//cuando si hay algo, contando que deben aparecer todos unidos, sin espacios
	if(nodo == (hoja*)1)
	{
		nodo= raiz;
	}
	if(raiz == NULL){
		cout<< "No hay elementos"<<endl;
		return &list;
	}
	else{
		switch(selec){
		case 'a':
			cout<<"Orden"<<endl;	
			orden(raiz, list);			
		break;	
		case 'b':
			cout<<"Preorden"<<endl;	
			preorden(raiz, list);
		break;
		case 'c':
			cout<<"Postorden"<<endl;	
			postorden(raiz, list);
		break;	
	}
	return &list;
	}	
}
void arbol::orden(hoja *nodo, lista &list){
	if(nodo->izq != NULL)
		orden(nodo->izq, list /*lista(El nombre)*/);
	list.add(nodo->info);
	//agregar a la lista(nodo-<info)
	if(nodo->der != NULL)
		orden(nodo->der, list /*lista(El nombre)*/);
}
void arbol::preorden(hoja *nodo, lista &list){

	//agregar a la lista(nodo-<info)
	list.add(nodo->info);
	if(nodo->izq != NULL)
		preorden(nodo->izq, list /*lista(El nombre)*/);
	if(nodo->der != NULL)
		preorden(nodo->der, list /*lista(El nombre)*/);

}
void arbol::postorden(hoja *nodo, lista &list){
	if(nodo->izq != NULL)
		postorden(nodo->izq, list /*lista(El nombre)*/);
	if(nodo->der != NULL)
		postorden(nodo->der, list /*lista(El nombre)*/);
	list.add(nodo->info);
	//agregar a la lista(nodo-<info) listasimple.add(nodo->nfo)
}

arbol::~arbol(){
	delall();
}

int main(){
	//variables main
	int op=0, x=0;
	arbol ob1;
	lista listaMain;
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
					ob1.del(x, 0);
						//	cout<<"Valor eliminado"<<endl;
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
				//	cout <<"hay????? "<<( ob1.busc(x, 0) )<<endl;				
					if(ob1.busc(x, 0) == 1){
						cout << "Elemento encontrado: ";
						cout << x <<endl;
					}else{
						cout << "Elemento no encontrado"<<endl;
					}
					break;
				}
			case 5:
				{
					cout<<"5"<<endl;
					x = ob1.contar(0);
					cout<<"Hay "<< x <<" elementos"<<endl;	
					break;
				}
			case 6:
				{
					char reco = 'S';
					cout<<"6"<<endl;	
					cout<<"Elija el metodo de como recorrer� el arbol"<<endl;
					cout<<"a.-Orden"<<endl;
					cout<<"b.-Preorden"<<endl;
					cout<<"c.-Postorden"<<endl;
					cout<<"s.-Salir"<<endl;
					cin >> reco;
					ob1.recorrer(reco, listaMain);
					listaMain.obte();
					listaMain.delall();
					break;
				}					
		}
	}while(op !=7);
	
	return 0;
}


