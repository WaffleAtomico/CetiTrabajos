//
//  main.cpp
//  POObjetos
//
//  Created by Oscar Alejandro Penilla Skakievich on 15/09/21.
//          POObjetos

#include <iostream>

using namespace std;

class Persona{ // Asi se hace una clase, comienzan con una letra mayuscula
    //vamos a ponerle atributos
    private: // atributos
                //en privado pq normalmente estan privados para el ususario
        int edad;
        string nombre;
    public: // metodos
                //En publico pq estos si estan disposibles para el publico
       
    Persona(int, string); //Construcctor de la clase
        void leer();
        void correr();
};
//Hay un metodo constructor que ayuda a inicializar las caracteristicas
//constructor
//tipo::otra vez
Persona::Persona(int _edad,string _nombre){
    edad = _edad;
    nombre =_nombre;
}

//estos van a ser acciones
//Este va a leer, no de cin, leer de accion de la persona
    //v-- Aqui indicamos la clase
void Persona::leer(){
    cout << "Soy un " << nombre <<" y estoy leyendo un libro y tengo " << edad<<endl;
}

//corre de accion de persona
void Persona::correr(){
    cout << "Soy un " << nombre <<" y estoy corriendo una maraton y tengo " << edad<<endl;
}



int main() {
    //se va a crear un objeto
         //Nombre  inicializar        atributos
        //  |    con el constructor      |
         // v       v               v----|-----v
    Persona p1 = Persona(          20,     "Alejandro");
    //Asi se hace un objeto
    
    Persona p2(19,"Maria");
    //asi se simplifica
    Persona p3(21, "Juan");
    
    p1.leer();
    p2.correr();
    
    p3.correr();
    p3.leer();
    
    return 0;
}
