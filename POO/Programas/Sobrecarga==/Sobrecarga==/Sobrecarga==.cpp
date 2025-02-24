// Sobrecarga==.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*
#include <iostream>

using namespace std;

class Time
{
    int hr, min, sec;
public:
    // default constructor
    Time()
    {
        hr = 0, min = 0; sec = 0;
    }

    // overloaded constructor
    Time(int h, int m, int s)
    {
        hr = h, min = m; sec = s;
    }

    //overloading '==' operator
    friend bool operator==(Time& t1, Time& t2);
};


bool operator== (Time& t1, Time& t2)
{
    return (t1.hr == t2.hr && t1.min == t2.min && t1.sec == t2.sec);
}

void main()
{
    Time t1(3, 15, 45);
    Time t2(4, 15, 45);
    if (t1 == t2)
    {
        cout << "Ambos valores son igualesl";
    }
    else
    {
        cout << "Ambos valores son diferentes";
    }
}*/

#include <iostream>

using namespace std;


class multi {
public:
    int i_x, i_y;
    multi(int Xingre, int Yingre);
    multi operator*(multi b);
};

multi::multi(int Xingre, int Yingre) {
    i_x = Xingre;
    i_y = Yingre;
}
multi multi::operator*(multi b) {
    return *(new multi(i_x * b.i_x, i_y * b.i_y));
}

int main() {
    multi valores1(7, 32), valores2(7, -2);
    multi result = valores1 * valores2;
    cout << result.i_x << endl;
    cout << result.i_y << endl;
    return 0;
}

