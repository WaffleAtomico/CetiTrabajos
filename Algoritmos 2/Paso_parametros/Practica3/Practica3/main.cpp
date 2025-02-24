//
//  main.cpp
//  Practica3
//
//  Created by Oscar Alejandro Penilla Skakievich on 01/09/21.
//

#include <iostream>
using namespace std;

void arreglo(int D, int arr[]);
int compararM( int aarre[], int primdat, int segundat, int &respa, int dati);
int compararm( int aarre[], int primdat, int segundat, int &respi);
    
int main() {
    int datos, arr[10];
    bool bandera = true;
    int primerdat=0;
    int segundat=0;
    int resp=0, respi=51;
    
    while (bandera){
            
        cout << "Hola, cuantos numeros quieres ingresar?\n";
        cin >> datos;
        
        if (datos >= 11 || datos <= 1){
            bandera = true;
        }else{
            bandera = false;
            cout << "Perfecto \n";
            arreglo(datos, arr);
            
            for (int i=0; datos+1>=i; i++ ){
                        primerdat= arr[i];
                        segundat=arr[i+1];
                    resp = compararM(arr,primerdat,segundat, resp, datos);
            }//for1
            for (int i=0; datos+1>=i; i++ ){
                        primerdat= arr[i];
                        segundat=arr[i+1];
                    respi = compararm(arr,primerdat,segundat, respi);
            }//for2
            cout << "Este es el mas chico -- "<< respi <<endl;
            cout << "Este es el mas grande -- "<< resp <<endl;
            
        }// else
        
    } //while
}// main

void arreglo(int D, int arr[]){
    bool suban = true;
    int tmp = 0;
    
    cout << "Solamente puedes ingresar numeros entre 1 a 50\n";
    cout << "Ingresa los numeros necesarios: \n";
    
    for (int i = 0; i <= D-1; i++){
        suban = true;
        while (suban){
             cout << "- ";
             cin >> tmp;
                if (tmp >= 51 || tmp <= 0){
                    suban = true;
                }else{
                    arr[i]=tmp;
                    suban = false;
                } //else
        } //while
    } //for
}//arreglo

int compararM( int aarre[], int primdat, int segundat, int &respa, int dati){
    int numa=0;
    
            if (primdat >= respa && primdat >= segundat && primdat < 51){
                numa=primdat;
            }
            if (segundat>0 && segundat < 51 && segundat>primdat && segundat >= respa){
                numa = segundat;
            }
        
    if (numa > 0){
        respa = numa;
    }
    
    aarre[dati-1]=respa;
    return aarre[dati-1];
    
}//CompararM

int compararm( int aarre[], int primdat, int segundat, int &respi){
    int numi=51;
    
            if (primdat < respi && primdat < segundat && primdat > 0 && primdat < 51){
                numi=primdat;
                
            }
            if (segundat > 0 && segundat<primdat && segundat < respi && segundat > 0 && primdat <51){
                numi = segundat;
                
            }
    if (numi <= 50){
        respi = numi;
    }
    
    aarre[0]=respi;
    return aarre[0];
    
}//Compararm
