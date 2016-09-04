/**
* Author/Autor: Matheus Flauzino
* Date/Data: 09.04.2016 - 04/09/2016
**/

#include <iostream>

using namespace std;

int main(void)
{

    int varInt = 12; //variable integer - variável do tipo inteira
    float varFloat = 2.4; //variable float - variável do tipo "ponto flutuante"
    double varDouble = 2.424; //variable double - variável do tipo ponto flutuante para maior precisao
    char varChar = 'M'; //variable character - variável do tipo caracter

    //size of variables - tamanho das variáveis
    cout << "Size of integer is "   <<  sizeof(varInt)      << endl; //size of int - tamanho da inteira
    cout << "Size of float is "     <<  sizeof(varFloat)    << endl; //size of float - tamanho da float
    cout << "Size of double is "    <<  sizeof(varDouble)   << endl; //size of double - tamanho da double
    cout << "Size of char is "      <<  sizeof(varChar)     << endl; //size of char - tamanho do caracter


    //variables long and short integer
    long int varLongInt = 111110; // long int - inteira longa
    short int varShortInt = 3; // short int - inteira curta

    cout << "Size of long int is "  <<  sizeof(varLongInt)  << endl; //long int
    cout << "Size of short int is " <<  sizeof(varShortInt) << endl; //short int

    return 0;
}
