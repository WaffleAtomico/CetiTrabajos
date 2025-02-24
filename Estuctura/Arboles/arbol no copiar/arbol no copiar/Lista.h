#include <iostream>
using namespace std;

class nodo
{
public:
    int x;
    nodo();
    nodo(int x);
    nodo* sig;
};

nodo::nodo()
{
    x = 0;
    sig = NULL;
}

nodo::nodo(int x)
{
    this->x = x;
    sig = NULL;
}

class lista
{
private:
    nodo* i, * a, * au;
public:
    lista();
    void add(int x);
    void elim(int x);
    void elimintodo();
    int buscar(int x);
    int contar();
    void obtener();
    int cont;
};

lista::lista()
{
    nodo* inicio = NULL;
    i = inicio;
    a = i;
    au = i;
}

void lista::add(int x)
{
    if (i == NULL)
    {
        i = new nodo(x);
        a = i;
        au = a;
    }

    else
    {
        a = i;
        while (a)
        {

            if (a->sig == NULL)
                break;

            a = a->sig;
        }
        a->sig = new nodo(x);
    }
}

void lista::elim(int x)
{
    contar();
    bool Bool = buscar(x);

    if (i == NULL)
        cout << "No hay datos para Eliminar\n";

    else if (cont == 1)
    {
        cout << "El Dato Eliminado fue: " << a->x << endl;
        delete a;
        i = NULL;
    }

    else if (Bool == 0)
        cout << "El dato que quiere Eliminar no existe\n";

    else
    {
        if (a == i)
            i = a->sig;
        else if (a->sig == NULL)
            au->sig = NULL;
        else
            au->sig = a->sig;
        cout << "El Dato Eliminado fue: " << a->x << endl;
        delete a;
    }
}

void lista::elimintodo()
{
    a = i;
    while (i)
    {
        i = i->sig;
        delete a;
        a = i;
    }
}

int lista::buscar(int x)
{
    bool Bool;
    a = i;
    while (a)
    {
        if (a->x != x)
            au = a;
        if (a->x == x)
            return Bool = 1;
        else
            a = a->sig;
    }
    if (a == NULL)
        return Bool = 0;
}

int lista::contar()
{
    cont = 0;
    a = i;
    while (a)
    {
        a = a->sig;
        cont++;
    }
    return cont;
}

void lista::obtener()
{
    cont = 1;
    a = i;
    while (a)
    {
        cout << "Valor de la Posicion " << cont << ": " << a->x << endl;
        a = a->sig;
        cont++;
    }
}