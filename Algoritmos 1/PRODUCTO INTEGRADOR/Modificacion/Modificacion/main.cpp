//
//  main.cpp
//  PRODUCTO INTEGRADOR
//
//  Created by Oscar Alejandro Penilla Skakievich on 02/06/21.
//
#include <iostream>

#include <time.h>
#include<stdlib.h>
#include<unistd.h>

using namespace std;

int main(){     //Variables

        srand(time(NULL));
        char rep = 's';
        char rep2 = 's';
    int DESDE=90, HASTA=150;
    int casas[5][5], casapag[5][5];
    int costo=0, sw=0, cal=0, cas=0;
    
    for (int i=0; i<5; i++ ){
        for (int a=0; a<5; a++){
            casapag[i][a] = 0;
        }
    }
    cout <<"Cual es el precio de mantenimiento x metro^2 en su coto? --- ";
    cin >> costo;
    for (int i=0; i<5; i++ ){
        for (int a=0; a<5; a++){
            
            casas[i][a] = rand()%(HASTA-DESDE+1)+DESDE;
            //cout << "casas["<< i << "]["<< a <<"] = "<<casas[i][a]<<endl;
        }
    }
    
while (rep == 's'){;

    //Menu
    cout << "Tiene estas opciones para hacer con tus datos\n";
    cout << "1 Mostrar los datos completos de las casas\n";
    cout << "2 Pagar el mantenimiento de una casa\n";
    cout << "3 Decir en cada calle cuantas casas han pagado o no han pagado\n";
    cout << "4 El total de dinero que ha ingresado una casa en especifico y todos sus datos\n";
    cout << "5 Dar un listado de las casas que ya abonaron y cuanto les falta para pagar\n";
    cin >> sw;
    if (sw >=6){
            cout << "Elije un numero que si sea valido\n";
            rep = 'n';
    }

    switch (sw) {
            
        case 1: //Aqui podemos mostrar todos los costos de las casas
           
                cout << "Ha elegido la opcion 1"<<endl;
                for (int j=0; j<5; j++ ){
                    cout << "Estan en la calle " << j+1 <<endl;
                    
                    for (int k=0; k<5; k++){
                        int metros = casas[j][k];
                        int cuota = metros*costo;
                        cout <<"La casa " << k+1 << "  mide "<< metros << "  mts^2 y ";
                        cout << "su cuota es de $" << cuota <<endl;
                    }
                
                } // este no lo repito porque es mas bien como un chequeo
                
        break;

    case 2:         //Pagos de casas
            
            cout << "Ha elegido la opcion 2"<<endl;
            
        while (rep2 == 's'){;
            cout << "Calle de la casa que quiere pagar --- ";
            cin >> cal;
            cout << "Casa que quiere pagar --- ";
            cin >> cas;
            int cuota= casas[cal-1][cas-1]*costo ;
            int pagado= casapag[cal-1][cas-1];
            int porpag= cuota-pagado;
            
            if (porpag > 0){
                cout << "Ha elegido la calle " << cal<< " de la casa " << cas <<" que cuesta " << cuota <<endl;
                cout << "1 - Quiere abonar un parte \n2 - Toda la casa \n";
                int abonpa, pag;
                cin >> abonpa;
                if (abonpa == 1){
                    cout << "Cantidad a pagar --- ";
                    cin >> pag;
                    if (pag > porpag){
                        cout << "Seguro quiere pagar mas de la cuenta?\n";
                        cout << "Esto es lo que le queda de pagar su casa " << porpag <<endl ;
                        cout << "Si desea pagarla completamente le recomiendo que vaya al apartado de pagar toda la casa\n";
                    }
                    else {
                        casapag[cal-1][cas-1] += pag;
                        pagado = casapag[cal-1][cas-1];
                        if (cuota - pag > 0){
                            int z;
                            z = cuota - pagado;
                            cout << "Le faltarian $" << z <<endl;
                        }
                    }
                
                }else{
                    casapag[cal-1][cas-1] = casas[cal-1][cas-1]*costo;
                    cout << "Felicidades ha pagado el mantenimiento de su casa :D\n";
                }
            }else{
                cout << "Felicidades la cuota ya esta pagada :D\n";
            }
            
        cout << "Quiere pagar otra casa?s/n\n";
        cin >> rep2;
        }
            rep2 = 's';
    break;
            

    case 3:     //casas que pagaron o no
        while (rep2 == 's'){;
            
                cout << "Ha elegido la opcion 3\n"<<endl;
            cout << "1 -- Si quiere mostrar las casas que han pagado\n2 -- Si quiere mostrar las casas que no han pagado\n";
            int sipa;
            cin >> sipa;
            if (sipa == 1){
                cout << "Le vamos a mosrar las casas que ya han pagado (Si no aparece ninguna es que ninguna ha pagado)"<<endl;
                for (int i=0; i<=5; i++ ){
                    
                    for (int a=0; a<5; a++){
                        int cuota = casas[i][a]*costo;
                        int pagado= casapag[i][a];
                        int porpag= cuota-pagado;
                        if (porpag == 0){
                        cout <<"La casa "<< a+1 << " de la calle " << i+1;
                        cout << " ya ha pagado" << endl;
                        }
                    }
                }
            }else{
                cout << "Le vamos a mostrar las casas que no han pagado"<<endl;
                for (int i=0; i<5; i++){
                    for (int a=0; a<5; a++){
                        int pagado = casapag[i][a];
                        if (pagado == 0 ){
                        cout <<"La casa "<< a+1 << " de la calle " << i+1;
                        cout << " NO ha pagado nada" << endl;
                        }
                    }
                }
            }
        cout << "Quiere volver a ver las casas?s/n\n";
        cin >> rep2;
        }
            rep2 = 's';
    break;
  
    case 4: // Chequeo de casa si ha pagado algo
                cout << "Ha elegido la opcion 4\n"<<endl;
        while (rep2 == 's'){;
            cout << "Calle de la casa que quiere revisar --- ";
            cin >> cal;
            cout << "Casa que quiere revisar --- ";
            cin >> cas;
            int cuota= casas[cal-1][cas-1]*costo ;
            int pagado= casapag[cal-1][cas-1];
            int porpag= cuota-pagado;
            if (pagado > 0){
                cout << "La casa ha pagado $"<< pagado;
                cout <<" su cuota es $"<< cuota<<endl;
            }
            if (porpag == 0 ){
                cout << "La casa esta pagada\n";
            }
            if (porpag > 0 ){
                cout << "La casa no esta pagada por completo\n";
            }
            cout << "y mide " << casas[cal-1][cas-1] << " m^2\n";
            
        cout << "Quiere revisar otras casas?s/n\n";
        cin >> rep2;
        }
            rep2 = 's';
        
    break;
            
            
    case 5:     //casas que si han pagado un parte
            cout << "Ha elegido la opcion 5\n"<<endl;
        while (rep2 == 's'){;
            cout << "El listado de pagos incompletos es este\n"<<endl;
            bool callepag = false;
            for (int i=0; i<5; i++ ){
                callepag=false;
                for (int a=0; a<5; a++){
                    int pagado = casapag[i][a];
                    int cuota = casas[i][a]*costo;
                    if (pagado > 0 && pagado<cuota){
                    cout <<"La casa "<< a+1 << " de la calle " <<i+1<<  " ha abonado $" << pagado << " de los $" << cuota << " que tiene que pagar " << endl;
                        callepag=true;
                    }
                    
                }
                if (callepag == false){
                    cout << "Ninguna casa ha abonado en la calle " << i+1 <<endl;
                }
            }
            cout << "Quiere revisar otra vez?s/n\n";
            cin >> rep2;
            }
            rep2 = 's';
    break;
    
    }//fin case/swich
    
   //Preguntamos para repetir
  cout << "Quieres elegir otra opcion(s) o quieres salir del programa(n)? s/n --- ";
        cin >> rep;
        
        if (rep == 's'){
            rep = 's';
            
        }
        else {
            rep = 'n';
        }
  }

}


