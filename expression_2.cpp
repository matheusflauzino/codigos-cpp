#include <iostream>
#define ZERO 0 //define static


using namespace std;

int main(void)
{

    float a,b; //declaration

    cin >> a >> b; //input


    cout << a++ << endl;
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;
    cout << "===============" << endl;

    cout << b << endl;
    b += a;
    cout << b << endl;
    b -= b;
    cout << b << endl;


    return ZERO; //exemple of using constant
}
