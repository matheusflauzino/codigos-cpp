/**
* Author/Autor: Matheus Flauzino
* Date/Data: 09.04.2016 - 04/09/2016
**/

#include <iostream>

using namespace std;

int main(void)
{

    int a,b,c,d;
    int result;

    cout << "Enter 4 nambers: " << endl;
    cin >> a >> b >> c >> d; //input variable

    cout << "A + B : "; //protuct A and B
    cout << a + b << endl;
    cout << "C - B: "; //subtract A and B
    cout << c - b << endl;
    cout << "A * C: "; //multiplication
    cout << a * c << endl;
    cout << "B / D: ";
    cout << b / d << endl; //division

    double x,y,div = 0.0;
    x = b;
    y = d;
    div = x/y; //double division
    cout << "Correct division: "<< div << endl;



    return false;
}
