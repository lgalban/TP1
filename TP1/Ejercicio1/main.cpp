#include <iostream>

using namespace std;

int main1()
{
    int x, y, ma, mb, ba, bb;
    cout<< "Dadas la funcion y = m1*X + b1 y la funcion y = m2*X + b2, ingrese en orden m1, b1, m2 y b2"<< endl;
    cin>> ma >> ba >> mb >> bb;
    x=(bb-ba)/(ma-mb);
    y=ma*x+ba;
    cout<< "Las rectas intersectan en el punto ("<< x << ";" << y << ")" << endl;
    return 0;
}
