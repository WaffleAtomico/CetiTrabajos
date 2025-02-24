//
//  main.cpp
//  Modulos
//
//  Created by Oscar Alejandro Penilla Skakievich on 20/08/21.
//

#include <iostream>

 using namespace std;


/* void suma(); //Este se usa para que el compilador lo lea y pueda leerlo

int main() {
    cout << "Hola, suma:\n";
    //Very importante: llamada o invocacion
    suma();//Todavia no ve a suma, por eso se tiene que agregar
    cout << "Fin del programa\n";
    
}

//tipo / nombre: tiene que tener el nombre de lo que hace
void suma(){
    //Se puede poner arriba del main  para ejecutarlo
    int n1,n2,n3;
    
    cin >> n1;
    cin >> n2;
    n3=n1+n2;
    cout << "El resultado es: " <<n3 <<endl;
    
}
*/

// Pero que pasa cuando queremos pasar variables entre dos bloques?

/*              //Pasar varias variables para que haga el proceso dentro del modulo
void suma(int var);
void resta(int var);

int main() {
    
    int n1,n2=5,n3, sr;
    cout << "Hola, suma:\n";
    cout << "Quiere suma o resta? 1/0\n";
    cin >> sr;
    if (sr > 0){
        suma(n2);
        
    }
    else{
        resta(n2);
    }
    
    cout << "Fin del programa\n";
    
    
}


void suma(int var){ //Prototipo
    
    int n1,n2,n3;
    
    cout << "Suma\n";
    cin >> n1;
    cout << "n2 vale 5\n";
    //cin >> n2;
    n3=n1+var;
    cout << "El resultado es: " <<n3 <<endl;
    
    //retorno de funcion: para pasar resultados
}
void resta(int var){ //Prototipo
    
    int n1,n2,n3;
    
    cout << "Resta\n";
    cin >> n1;
    cout << "n2 vale 5\n";
    //cin >> n2;
    n3=n1-var;
    cout << "El resultado es: " <<n3 <<endl;
    
    //retorno de funcion: para pasar resultados
}
*/

                    //practica 1
    float suma(float var, float var2);
    float resta(float var, float var2);
    float multi(float var, float var2);
    float divi(float var, float var2);

int main() {
    
    
    float n1,n2, resultado;
    int sr;
    
    cout << "Hola, puedes hacer tus operaciones basicas:\n";
        cout << "Inserte los numeros que va a usar, independientemente de lo vaya a hacer \n";
        cout << "-";
         cin >> n1;
        cout << "-";
         cin >> n2;
    cout << "Elija la operacion que quiera hacer\n";
            cout <<"1-Suma\n";
            cout <<"2-Resta\n";
            cout <<"3-Multiplicación\n";
            cout <<"4-División\n";
        cout << "-";
        cin >> sr;
    switch (sr) {
        case 1:
            resultado = suma(n1,n2);
            cout <<"El resultado es "<< resultado <<endl;
            break;
            
        case 2:
            resultado = resta(n1,n2);
            cout << "El resultado es "<<resultado <<endl;
            break;
        case 3:
            resultado = multi(n1,n2);
            cout <<"El resultado es "<< resultado <<endl;
            break;
        case 4:
            resultado = divi(n1,n2);
            cout <<"El resultado es "<< resultado <<endl;
            break;
        default:
            cout << "Elija una opcion correcta\n";
            break;
    }
    
    cout << "Fin del programa\n";
    
}

    float suma(float var, float var2){
    
    float n3;
    
    cout << "Suma\n";
    cout << "n1 vale "<< var <<endl ;
    cout << "n2 vale "<< var2 <<endl ;
    n3=var+var2;
    return n3;
    
}
    
    float resta(float var, float var2){
    
    float n3;
    
    cout << "Resta\n";
    cout << "n1 vale "<< var <<endl ;
    cout << "n2 vale "<< var2 <<endl ;
    n3=var-var2;
    return n3;
}

    float multi(float var, float var2){
        
        float n3;
        
        cout << "Multiplicación\n";
        cout << "n1 vale "<< var <<endl ;
        cout << "n2 vale "<< var2 <<endl ;
        n3=var*var2;
        return n3;
    }
    
    float divi(float var, float var2){
        
        float n3;
        
        cout << "División\n";
        cout << "n1 vale "<< var <<endl ;
        cout << "n2 vale "<< var2 <<endl ;
        n3=var/var2;
        return n3;
    }
    

