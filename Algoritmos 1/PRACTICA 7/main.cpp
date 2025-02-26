//
//  main.cpp
//  PRACTICA 7
//
//  Created by Oscar Alejandro Penilla Skakievich on 19/05/21.
//

/*
#include <iostream>

using namespace std;

int main(){
    int num=15;
    int arreglo[15] ={4,3,2,1,6,8,9,21,88,2,4,0,9,14,4};
    for (int i=0; i >= num; i++){;
        
    cout <<arreglo[i];
        
    }
}



/*
 #include <iostream>

 using namespace std;

 int main(){
     int num, i=0, a=0, j=0, e=0, res, aux;
     char rep ='s';
     int arreglo[15];
     int nr[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, con[8] = {0,0,0,0,0,0,0,0};
   while (rep == 's'){;
       cout <<"Cuantos numeros quieres que aparezcan?\n";
       cin>> num;
         
           if (num < 2 || num >=15 ){;
               rep = false;
           }

         for (i=0; i <= num-1; i++ && a++){;
           cout <<"El caracter "<<i+1<<" va a ser: ";
               cin>>arreglo[i];
               nr[i] = arreglo[i];
               
               
               /*if (nr[i] == arreglo[i-1]){;
                   con[e]++;
               }
               else{
                 
                 e++;
               }*/
             
         /*
         }

               for (i=0; i>=num-1; i++){
                   if(nr[i] > nr[i+1]){
                       aux=nr[i];
                       nr[i]=nr[i+1];
                       nr[i+1]=aux;
                 }
             }

       for (i=0; i <= num-1; i++){;
           cout <<arreglo[i] <<endl;
       }
       cout << "Comienzo"<<endl;
       for (i=0; i <= num-1; i++){;
           cout << nr[i] <<endl;
       }
       cout << "Se repite el numero " <<nr[a] <<", "<< con[e]+1<< " veces\n";

   cout << "Quieres repetir el programa? s/n \n"; //Preguntamos para repetir
         cin >> rep;
         
         if (rep == 's'){
             rep = 's';
             
         }
         else {
             rep = 'n';
         }
   }
 }

*/

#include <iostream>

using namespace std;

int main(){     //Variables

    int num, i=0, a=0, j=0, e=0, res, aux, vari, conti=0, nf;
    char rep ='s';
                //Arreglos
    int arreglo[15];
    int nr[15], numdif[15], contdif[15];


  while (rep == 's'){;
      cout <<"AVISO: si no aparece nada es que ningun numero se repitió\nCuantos numeros quieres que aparezcan?\n";
      cin>> num;
        
          if (num < 2 || num >=15 ){;
              rep = false;
          }

          vari = num-1;
                //Ingresar los valores
        for (i=0; i <= vari; i++ && a++){;
          cout <<"El numero "<<i+1<<" va a ser: ";
              cin>>arreglo[i];
              nr[i] = arreglo[i];
        }
                //Se ordenan
              for (i=0; i<=vari-1; i++){
                for (j=i+1; j<=vari; j++)
                  if(nr[j] < nr[i]){
                      aux=nr[i];
                      nr[i]=nr[j];
                      nr[j]=aux;
                  }
              }

                //Salida
      cout << "\n\n";

      int x = 0, numant = -1, cu = 1;
      for (i=0; i <= vari; i++){
          if (numant != nr[i]){
              numant = nr[i];
              numdif[x]=nr[i];
              
              cu=1;
              contdif[x] = cu;
              x++;
          }
          else{
            cu++;
            contdif[x-1] = cu;
          }
      }

      for (i=0; i <= x-1; i++){
        if (contdif[i] > 1){
          cout << "El" << numdif[i] << " aparece  " << contdif[i] << "  veces en la serie\n"<< endl;
        }
      }
          //Preguntamos para repetir
  cout << "Quieres repetir el programa? s/n --- ";
        cin >> rep;
        
        if (rep == 's'){
            rep = 's';
            
        }
        else {
            rep = 'n';
        }
  }
}


