#include <iostream>
#include "Lista.h"
using namespace std;

///Funciones///

class hoja
{
public:
    hoja();
    hoja(int x);
    int inf;
    hoja* izq;
    hoja* der;
    hoja* papa;
    int altura;
};

hoja::hoja()
{
    izq = NULL;
    der = NULL;
    inf = 0;
    altura = 0;
}

hoja::hoja(int x)
{
    izq = NULL;
    der = NULL;
    this->inf = x;
    altura = 0;
}


class arbol
{
private:
    hoja* r, * p,* au;
public:
    hoja* r2;
    arbol();
    void agregar(int x, hoja* nodo);
    void eliminar(hoja* nodo, int x, bool existe);
    void vaciar(lista& ListaSimple, hoja* nodo);
    void impresion(lista &ListaSimple);
    void orden(lista& ListaSimple, hoja* nodo);
    void preorden(lista &ListaSimple, hoja* nodo);
    void postorden(lista& ListaSimple, hoja* nodo);
    int buscar(hoja* nodo, int x, bool existe);
    int contar(lista& ListaSimple, hoja* nodo, int contar);
    void LimpiarLista(lista& ListaSimple);
    void LimpiarRaiz();
    int equilibrio(hoja* nodo);
    void ActualizarAltura(hoja* nodo);
    void rotacion(hoja* nodo, bool izquierda);
    void RotacionDoble(hoja* nodo, bool izquierda);
    void Balance(hoja* nodo);
    ~arbol();
};

arbol::arbol()
{
    r = NULL; // R de racismo 
    p = NULL; // P de pajaro
    au = NULL; //AU de lobo
    r2 = r;
}

///Funciones///

void arbol::agregar(int x, hoja* nodo)
{
    if (nodo == NULL && r == nodo)
    {
        nodo = new hoja(x);
        r = nodo;
        r2 = r;
    }

    else if (x > nodo->inf)
    {
        if (nodo->der == NULL)
        {
            nodo->der = new hoja(x);
            p = nodo;
            nodo->der->papa = nodo;
        }
        else
        {
            au = nodo;
            agregar(x, nodo->der);
        }
    }

    else
    {
        if (nodo->izq == NULL)
        {
            nodo->izq = new hoja(x);
            p = nodo;
            nodo->izq->papa = nodo;
        }
        else
        {
            au = nodo;
            agregar(x, nodo->izq);
        }
    }

    Balance(nodo);
    ActualizarAltura(nodo);
    r2 = r;
}

void arbol::eliminar(hoja* nodo, int x, bool existe)
{
    existe = buscar(nodo, x, existe);
    if (existe == 0)
        cout << "El dato que quiere eliminar no existe\n\n";
    else if (existe == 1)
    {
        if (p == r)
        {
            if (p->der == NULL && p->izq == NULL)
            {
                delete p;
                r = NULL;
                p = NULL;
            }

            else if (p->izq == NULL)
            {
                r = p->der;
                delete p;
                p = r;
            }

            else if (p->der == NULL)
            {
                r = p->izq;
                delete p;
                p = r;
            }

            else
            {
                au = p->izq;
                while (au->der != NULL)
                {
                    p = au;
                    au = au->der;
                }
                r->inf = au->inf;
                if (au->izq != NULL)
                {
                    p = au->izq;
                    delete au;
                    nodo->papa = NULL;
                }
                else
                {
                    delete au;
                    p->izq = NULL;
                    nodo->papa = NULL;
                }
            }
        }

        else if (p->izq == NULL && p->der == NULL)
        {
            if (au->izq == p)
                au->izq = NULL;
            else if (au->der == p)
                au->der = NULL;
            delete p;
        }

        else
        {
            if (p->izq == NULL)
            {
                au->izq = p->der;
                delete p;
                p = NULL;
            }

            else if (p->der == NULL)
            {
                au->izq = p->izq;
                delete p;
                p = NULL;
            }

            else
            {
                au = p;
                while (au->der != NULL)
                    au = au->der;
                p->inf = au->inf;
                while (p->der != au)
                    p = p->der;
                delete au;
                p->der = NULL;
            }
        }
    }
    if (r == NULL)
        r2 = NULL;

    else
    {
        Balance(nodo);
        ActualizarAltura(nodo);
        r2 = r;
    }
    r2 = r;
}

void arbol::vaciar(lista& ListaSimple,hoja* nodo)
{
    if (nodo->izq != NULL)
    {
        vaciar(ListaSimple, nodo->izq);
        nodo->izq = NULL;
    }
    if (nodo->der != NULL)
    {
        vaciar(ListaSimple, nodo->der);
        nodo->der = NULL;
    }
    delete nodo;
}

void arbol::impresion(lista &ListaSimple)
{
    ListaSimple.obtener();
}

void arbol::orden(lista& ListaSimple, hoja* nodo)
{
    if (nodo->izq != NULL)
        orden(ListaSimple, nodo->izq);
    ListaSimple.add(nodo->inf);
    if (nodo->der != NULL)
        orden(ListaSimple, nodo->der);
}

void arbol::preorden(lista &ListaSimple, hoja *nodo)
{
    ListaSimple.add(nodo->inf);
    if (nodo->izq != NULL)
        preorden(ListaSimple, nodo->izq);
    if (nodo->der != NULL)
        preorden(ListaSimple, nodo->der);
}

void arbol::postorden(lista& ListaSimple, hoja* nodo)
{
    if (nodo->izq != NULL)
        postorden(ListaSimple, nodo->izq);
    if (nodo->der != NULL)
        postorden(ListaSimple, nodo->der);
    ListaSimple.add(nodo->inf);
}

int arbol::buscar(hoja* nodo, int x, bool existe)
{
    if (existe == 1)
        return 1;
    if (nodo->inf == x)
    {
        p = nodo;
        existe = 1;
    }
    else
    {
        if (nodo->der != NULL || nodo->izq != NULL)
            au = nodo;
        existe = 0;
    }
    if (nodo->izq != NULL)
        existe = buscar(nodo->izq, x, existe);
    if (nodo->der != NULL)
        existe = buscar(nodo->der, x, existe);
    return existe;
}

int arbol::contar(lista& ListaSimple, hoja* nodo, int cont)
{
    cont++;
    if (nodo->izq != NULL)
        cont = contar(ListaSimple, nodo->izq, cont);
    if (nodo->der != NULL)
        cont = contar(ListaSimple, nodo->der, cont);
    return cont;
}

void arbol::LimpiarLista(lista& ListaSimple)
{
    ListaSimple.elimintodo();
}

void arbol::LimpiarRaiz()
{
    r = NULL; // R de racismo 
    p = NULL; // P de pajaro
    au = NULL; //AU de lobo
    r2 = r;
}

int arbol::equilibrio(hoja* nodo)
{
    if (nodo == NULL)
        return -1;
    else
        return nodo->altura;
}

void arbol::ActualizarAltura(hoja* nodo)
{
    if (nodo != NULL)
        nodo->altura= max(equilibrio(nodo->izq), equilibrio(nodo->der)) + 1;
}

void arbol::rotacion(hoja* nodo, bool derecha)
{
    bool existe = 0, raiz = 0;
    hoja* nodo1;
    if (derecha)
    {
        nodo1 = nodo->izq;
        nodo->izq = nodo1->der;
        nodo1->der = nodo;
    }
    else
    {
        nodo1 = nodo->der;
        nodo->der = nodo1->izq;
        nodo1->izq = nodo;
    }
  
    p = r;

    if (derecha == 1)
    {
        if (nodo->papa)
        {
            if (nodo->papa->der == nodo1->der)
            {
                nodo->papa->der = nodo1;
            }
            else
                nodo->papa->izq = nodo1;
        }
        else
        {
            r = nodo1;
        }
    }
    else
    {
        if (nodo->papa)
        {
            if (nodo->papa->izq == nodo1->izq)
            {
                nodo->papa->izq = nodo1;
            }
            else
                nodo->papa->der = nodo1;
        }
        else
        {
            r = nodo1;
        }
    }
}

void arbol::RotacionDoble(hoja* nodo, bool izquierda)
{
    if (izquierda)
    {
        rotacion(nodo->izq, false);
        rotacion(nodo, true);
    }
    else /* rotación derecha */
    {
        rotacion(nodo->der, true);
        rotacion(nodo, false);
    }
    /* la actualización de las alturas se realiza en las rotaciones
    simples */
}

void arbol::Balance(hoja* nodo)
{
    if (nodo != NULL)
    {
        if (equilibrio(nodo->izq) - equilibrio(nodo->der) == 2)
        {
            if (equilibrio(nodo->izq->izq) >= equilibrio(nodo->izq->der))
                rotacion(nodo, true);
            else
                RotacionDoble(nodo, true);
        }
        else if (equilibrio(nodo->der) - equilibrio(nodo->izq) == 2)
        {
            if (equilibrio(nodo->der->der) >= equilibrio(nodo->der->izq))
                rotacion(nodo, false);
            else
                RotacionDoble(nodo, false);
            }
    }
}

arbol::~arbol()
{
    cout << "Saliendo del Programa...\n";
}

///MAIN///

int main()
{
    int x = 0, contar = 0;
    bool existe = 0;
    arbol dat;
    lista dato;
    int menu = 0;
    cout << "Bienvenido al Programa de Arbol AVL\n";
    do
    {
        menu = 0;
        cout << "\nMENU:\n   Ingresar un dato (Pulse 1)\n" << "   Eliminar un dato (Pulse 2)\n" << "   Eliminar todo (Pulse 3)\n" << "   Recorrer:\n" << "      Orden (Pulse 4)\n" << "      Preorden (Pulse 5)\n" << "      Postorden (Pulse 6)\n" << "   Buscar (Pulse 7)\n" << "   Contar (Pulse 8)\n" << "   Salir (Pulse 9)\n";

        cin >> menu;

        cout << endl;

        switch (menu)
        {
            {
        case 1:
            cout << "Escriba el dato que desea agregar: ";
            cin >> x;
            dat.agregar(x, dat.r2);
            break;
            }

            {
        case 2:
            if (dat.r2 == NULL)
            {
                cout << "No hay datos en el Arbol\n"; break;
            }
            cout << "Escriba el dato que desea eliminar: ";
            cin >> x;
            dat.eliminar(dat.r2, x, existe);
            break;
            }

            {
        case 3:
            if (dat.r2 == NULL)
            {
                cout << "No hay datos en el Arbol\n"; break;
            }
            dat.vaciar(dato, dat.r2);
            dat.LimpiarRaiz();
            cout << "Borrando el Arbol...\n";
            break;
            }

            {
        case 4:
            if (dat.r2 == NULL)
            {
                cout << "No hay datos en el Arbol\n"; break;
            }
            dat.LimpiarLista(dato);
            dat.orden(dato, dat.r2);
            dat.impresion(dato);
            break;
            }

            {
        case 5:
            if (dat.r2 == NULL)
            {
                cout << "No hay datos en el Arbol\n"; break;
            }
            dat.LimpiarLista(dato);
            dat.preorden(dato, dat.r2);
            dat.impresion(dato);
            break;
            }

            {
        case 6:
            if (dat.r2 == NULL)
            {
                cout << "No hay datos en el Arbol\n"; break;
            }
            dat.LimpiarLista(dato);
            dat.postorden(dato, dat.r2);
            dat.impresion(dato);
            break;
            }

            {
        case 7:
            if (dat.r2 == NULL)
            {
                cout << "No hay datos en el Arbol\n"; break;
            }
            cout << "Escriba el dato que desea buscar: ";
            cin >> x;
            existe = 0;
            existe = dat.buscar(dat.r2, x, existe);
            if (existe == 1)
                cout << "El valor buscado " << x << ", Existe en el Arbol\n";

            else
                cout << "El valor buscado " << x << ", No Existe en el Arbol\n";
            existe = 0;
            break;
            }

            {
        case 8:
            if (dat.r2 == NULL)
            {
                cout << "No hay datos en el Arbol\n"; break;
            }
            contar = dat.contar(dato, dat.r2, 0);
            cout << "El numero de datos que hay en el arbol es igual a " << contar << endl;
            contar = 0;
            break;
            }

            {
        case 9:
            if (dat.r2 == NULL)
                return 0;
            dat.vaciar(dato, dat.r2);
            dat.LimpiarRaiz();
            dat.LimpiarLista(dato);
            return 0;
            }

            {
        default:
            cout << endl << "Esa opcion no existe, Por favor intente de nuevo\n\n";
            }
        }
    } while (menu != 9);
    return 0;
}