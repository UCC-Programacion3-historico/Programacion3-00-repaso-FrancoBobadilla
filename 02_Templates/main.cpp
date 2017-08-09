#include <iostream>
#include <string>
#include "Calculadora.h"

using namespace std;

int main() {

    cout << "Ejercicio 00/02\n" << endl;

    Calculadora<int> calInt;
    Calculadora<char> calChar;
    Calculadora<float> calFloat;
    Calculadora<string> calString;

    calInt.setA(16);
    calInt.setB(2);
    cout << calInt.dividir() << endl;

    calChar.setA(40);
    calChar.setB(66);
    cout << calChar.sumar() << endl;

    calFloat.setA(5);
    calFloat.setB(3);
    cout << calFloat.dividir() << endl;

    calString.setA("Hola ");
    calString.setB("mundo");
    cout << calString.sumar() << endl << endl;

    return 0;
}