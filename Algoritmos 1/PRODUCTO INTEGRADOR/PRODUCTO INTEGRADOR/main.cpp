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
    int DESDE=300, HASTA=2000;
    int casas[4][4], casapre[4][4], casapag[5][5] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int costo=0, sw=0, cal=0, cas=0;
    
    cout <<"Antes que nada, cual es es valor x metro^2 en su coto? --- ";
    cin >> costo;
    for (int i=0; i<=4; i++ ){
        for (int a=0; a<=4; a++){
            
            casas[i][a] = rand()%(HASTA-DESDE+1)+DESDE;
        }
    }
    for (int i=0; i<=4; i++ ){
        for (int a=0; a<=4; a++){
            
            casapre[i][a]=casas[i][a]*costo;
        }
    }
while (rep == 's'){;

    //Menu
    cout << "Tiene estas opciones para hacer con tus datos\n";
    cout << "1 Mostrar los costos completos de las casas\n";
    cout << "2 Pagar una casa\n";
    cout << "3 Decir en cada calle cuantas casas han pagado o no han pagado\n";
    cout << "4 El total de dinero que ha ingresado una casa en especifico y todos sus datos\n";
    cout << "5 Dar un listado de las casas que ya abonaron y cuanto les falta para pagar\n";
    cin >> sw;
            if (sw >=7){
                    cout << "Elije un numero que si sea valido\n";
                    rep = 'n';
                }
    
    switch (sw) {
            
    case 1: //Aqui podemos mostrar todos los costos de las casas
            
            cout << "Ha elegido la opcion 1"<<endl;
            for (int i=0; i<=4; i++ ){
                cout << "Estan en la calle " <<i+1<<endl;
                for (int a=0; a<=4; a++){
                    /*if (casas[i][a]>2000){
                        casas[i][a] = casas[i][a]/150;
                        casapre[i][a] = casapre[i][a]/100;
                    }*/
                    cout <<"La casa "<< a+1 << "  mide "<< casas[i][a] << "  mts^2 y ";
                    if (casapre[i][a] == 0){
                        
                        cout << "cuesta $" << casapre[i][a] << " en total porque ya esta pagada"<<endl;
                    }else{
                    cout <<  "cuesta $" << casapre[i][a] << " en total" << endl;
                    }
                   
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
            if (casapre[cal-1][cas-1] > 0){
            cout << "Ha elegido la calle " << cal<< " de la casa " << cas <<" que cuesta " << casapre[cal-1][cas-1] <<endl;
            cout << "1 - Quiere abonar un parte \n2 - Toda la casa \n";
            int abonpa, pag;
            cin >> abonpa;
            if (abonpa == 1){
                cout << "Cantidad a pagar --- ";
                cin >> pag;
                casapag[cal-1][cas-1] += pag;
                if (casapre[cal-1][cas-1] - pag > 0){
                casapre[cal-1][cas-1] = casapre[cal-1][cas-1] - pag;
                    cout << "Le faltarian $" << casapre[cal-1][cas-1] <<endl;
                    
                }else{
                    cout << "Seguro quiere pagar mas de la cuenta?\n";
                    cout << "Esto es lo que le queda de pagar su casa " << casapre[cal-1][cas-1] <<endl ;
                    cout << "Si desea pagarla completamente le recomiendo que vaya al apartado de pagar toda la casa\n";
                }
                
            }else{
                casapag[cal-1][cas-1] = casas[cal-1][cas-1]*costo;
                casapre[cal-1][cas-1] = casapre[cal-1][cas-1]-casapre[cal-1][cas-1];
                cout << "Le faltarian $" << casapre[cal-1][cas-1] <<endl;
                cout << "Felicidades ha pagado su casa :D\n";
            }
                
            }else{
                cout << "Felicidades esta casa ya esta pagada :D\n";
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
                for (int i=0; i<=4; i++ ){
                    
                    for (int a=0; a<=4; a++){
                        if (casapre[i][a] == 0){
                        cout << "Esta en la calle " <<i+1<<endl;
                        cout <<"La casa "<< a+1 << "  mide  ";
                        cout << casas[i][a] << "  mts^2 y ya ha pagado" << endl;
                        }
                    }
                }
            }else{
                cout << "Le vamos a mostrar las casas que no han pagado"<<endl;
                for (int i=0; i<=4; i++){
                    cout << "Esta en la calle " <<i+1;
                    for (int a=0; a<=4; a++){
                        if (casapre[i][a] == casas[i][a]*costo ){
                        
                        cout <<"La casa "<< a+1 << " NO ha pagado " << endl;
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
            if (casapag[cal-1][cas-1]>0){
                cout << "La casa ha pagado $"<< casapag[cal-1][cas-1];
            cout <<" vale $"<< casas[cal-1][cas-1]*costo<<endl;
            if (casapre[cal-1][cas-1] == casapag[cal-1][cas-1] ){
                cout << "La casa esta pagada\n";
            }
            if (casapre[cal-1][cas-1] != casapag[cal-1][cas-1] ){
                cout << "La casa no esta pagada por completo\n";
            }
            
        cout << "Quiere revisar otras casas?s/n\n";
        cin >> rep2;
        }
            rep2 = 's';
    break;
            
    case 5: //casas que si han pagado un parte
            cout << "Ha elegido la opcion 5\n"<<endl;
        while (rep2 == 's'){;
            cout << "Le vamos a dar el listado de todas las casas que ya han pagado pero todavia les falta\n"<<endl;
            bool f;
            for (int i=0; i<=4; i++ ){
                f=false;
                for (int a=0; a<=4; a++){
                    if (casapag[i][a] >= 1 && casapag[i][a]< casapre[i][a]){
                    cout <<"La casa "<< a+1 << " de la calle " <<i+1<<  " ha abonado " << casapag[i][a] << " de los " << casapre[i][a] << " que tiene que pagar " << endl;
                        f=true;
                    }
                    
                    }
                if (f == false){
                    cout << "Ninguna casa ha abonado en esta calle\n";
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
}
