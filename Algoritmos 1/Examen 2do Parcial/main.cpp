//
//  main.cpp
//  Examen 2do Parcial
//
//  Created by Oscar Alejandro Penilla Skakievich on 06/05/21.
//

#include <iostream>
using namespace std;

int main() {
    
    int est, in = 1;
    char comp, disp;
    // valores que se van a contar
    int pc = 0, lap = 0, tel = 0;
    int per = 0, com = 0;
    int vel, vel2 = 0;
    

    cout << "Bienvenido\nAqui va a poder capturar las estadisticas de sus estudiantes\n\n";
    cout << "Cuantos alumnos tiene?:  ";
    cin >> est;
    
    while (est >= in){;
                                //capturamos datos
        cout << "Que dispositivo usa su estudiante " << in << "? p/l/t      ";
        cin >> disp;
            if ( disp == 'p'){
                pc++;
            }
            
            if ( disp == 'l'){
                lap++;
            }
        
            if( disp == 't'){
                tel++;
            }
        
        cout << "Es de uso personal o compartido?p/c        ";
        cin >> comp;
            if ( disp == 'p'){
                per++;
            }
            
            if ( disp == 'c'){
                com++;
            }
           
        cout << "Cual es la velocidad de internet que tiene?:    ";
            cin >> vel;
        
                    vel2 = vel + vel2;
            
        cout << "\n\n";
        
        in++;
    }
    int estnocom = (per * 100)/est;
    int estcompar = 100-((per * 100)/est);
                            //parte matematica/estadistica
    cout << "Alumnos que usan Pc de escritorio:       " << (pc * 100)/est <<"%"<<endl;
    cout << "Alumnos que usan Laptop:                 " << (lap * 100)/est << "%"<<endl;
    cout << "Alumnos que usan Telefonos:              " << (tel * 100)/est <<"%\n" <<endl;
    
    cout << "Alumnos tienen que no tienen que compartir equipo:       " << estnocom <<"%" <<endl;
    
    cout << "Alumnos que que tienen que compartir equipo:             " << estcompar << "%" <<endl;
    
    
    cout << "Promedio de velocidad de internet:       " <<  vel2/est << " MB"<<endl;
   
    
    
    
}
