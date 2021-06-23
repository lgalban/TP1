#include <iostream>

using namespace std;

int main()
{
    int x, y, ma, mb, ba, bb;
    cout<< "Dadas la funcion y = m1*X + b1 y la funcion y = m2*X + b2, ingrese en orden m1, b1, m2 y b2"<< endl;
    cin>> ma >> ba >> mb >> bb;
    if (ma==mb && ba<>bb)
        {cout<< "las rectas son paralelas por lo tanto no se intersectan"<< endl;}
    else {
        if (ma==mb && ba==bb)
        {
            cout<< "las rectas son las mismas por lo que son compatibles indetermindos"
        }
        else
            {
                x=(bb-ba)/(ma-mb);
                y=ma*x+ba;
                cout<< "Las rectas intersectan en el punto ("<< x << ";" << y << ")" << endl;
            }
    return 0;
}
