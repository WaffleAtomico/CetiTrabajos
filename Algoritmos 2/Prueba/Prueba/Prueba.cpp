// Prueba.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//



#include <iostream>
#include <fstream>

using namespace std;

void grabatextoarchivotexto(char texto[], char* nombreArchivo);
void grabatextoarchivonum(int numero, char* nombreArchivo);
void imprimeArchvioTexto(char* nombreArchivo);
void grabaeBinarioNumero(char numero[], char* nombreArchivoBin);
imprimearchivobin(char* nombrearchivobin);


int main()
{
	char nombreArchivo[] = "ArchivoTexto.txt", * pntNombre; //<-- un puntero para usar namas
													//^-- este puntero no tiene un lugar fijo
	char ArchivoBinario[] = "ArchivoBinario.bin", * pntNombreBin;
	char arreglocaraceteres[10]; //este es un puntero fijo 
	// igualmente con los caracteres
	char contenido[] = "hola mundo";
	int cantidad = 32158;
	int arreglo[] = { 50,51,52,53,54,55};
	pntNombre = nombreArchivo;
	pntNombreBin = ArchivoBinario;
	int numero = 2;

	grabaBinarioNumero(numero, pntNombreBin);
	cout << contenido;
	cout << arreglo;
	cout << arreglocaraceteres[1]; //el numero es la posicion en la que nos movemos, el puntero se queda en la misma posicion


	imprimearchivobin(pntNombreBin);

	/*
	grabatextoarchivotexto(contenido, pntNombre);
	grabatextoarchivonum(cantidad, pntNombre); //se almacena como texto
	imprimeArchvioTexto(pntNombre);
	*/
	
}

							//numero o letras
void grabaeBinarioNumero(char numero, char* nombreArchivoBin) {
	//si solamente pones fstream tendrias que ponerle ademas un |ios::app
	ofstream archivo(nombreArchivoBin, ios::binary);
	
	archivo.write((char*)&numero, sizeof(int));

	//archivo.write(&letras[0], sizeof(char) * strlen(letras);

	/*
	El metodo write necesita dos parametros
		El primero la possicion donde comienzan los datos por eso el &
		se usa char por tamaño, es el mismo que el de los bytes
	
		El segundo es la cantidad de bytes que se van a grabar en este caso si se desconoce el tamañode bytes

		Asi ya se graba en el archivo

		*/
	archivo.close(); 

}//Binarios

imprimearchivobin(char* nombrearchivobin) {
	ifstream archivo(nombrearchivobin, ios::binary); // aqui vamos a leer
	//depende si comienza en "I" u "O" es que va a ser
	// I = para lectura
	// O = para escritura
	
	bool fin = false;
	int cuantos;
	cout << "archivo binario: \n";

	int tempo = 0;
	while (!fin)
	{
		archivo.read((char*)&variable, sizeof(int));

		if (!archvio.eof()) //se confirma la lectura del dato
			cout << "Datos: " << variable << " " << archivo.tellg() << endl;
		else
			fin = true;
	}

	archivo.clear();
	archivo._seekbeg;
	archivo._seekend;
	variable = archivo.tellg();
	varibale = archivo.tellg();

	cuantos = vairbale / sizeof(int);
	archivo.seekg(ios::beg);
	archivo.read((char*)&arreglo[0], sizeof(int) * cuantos);

	cout << "calculando: "<<endl
}


/*				<--QUITAR PARA ARCHIVOS

// se comentan los archivos de texto si se quiere hacer un binario y viceversa
void grabatextoarchivotexto(char texto[], char* nombreArchivo) {
	//ofstream archivo(nombreArchivo); //por defecto el archivo es de texto

	ofstream archivo (nombreArchivo,ios::app);
	//el modificador "ios::app" es para agregar contenido, si este no esta se sobreescribe
	
	//archivo <<""; pasicamente es un cout, pero para el archivo
	archivo << "Aqui va el contenido a guardar"; //se guarda la cadena
	archivo <<"segunda linea"; //se guarda la cadena
	archivo << "3era linea"; //se guarda la cadena
	archivo << "4ta linea ñ"; //se guarda la cadena

	archivo.close(); //si el archivo no se cierra no guarda los cambios

}//texto

void grabatextoarchivonum(int numero, char* nombreArchivo) {
	//ofstream archivo(nombreArchivo); //por defecto el archivo es de texto

	ofstream archivo(nombreArchivo, ios::app);
	//el modificador "ios::app"

	archivo << "Aqui va el contenido a guardar"; //se guarda la cadena
	archivo << "segunda linea"; //se guarda la cadena
	archivo << "3era linea"; //se guarda la cadena
	archivo << "4ta linea ñ"; //se guarda la cadena

	archivo.close(); //si el archivo no se cierra no guarda los cambios

}//graba texto?


//musho shorro

void imprimeArchvioTexto(char* nombreArchivo) {
	char cadena[100];
	ifstream archivo(nombreArchivo); //archivo para lectura

	archivo >> cadena; //>> este operador va a leer hasta que no encuentre caracteres, deja de leer al tener un espacio " "
	cout << cadena;	

	cout << "por palabra" << endl;

	//musho texto que no pude poner :(

		while (archivo.eof() == false)//verifica que el cursor no este al final
		{
			archivo.getline(cadena, 100); //tambien se puede leer por lineas de esta manera
			archivo >> cadena;
			cout << "palabra: " << cadena << endl;

		}

	archivo.close();
} //leer archivo

/*						<--QUITAR PARA ARCHIVOS
