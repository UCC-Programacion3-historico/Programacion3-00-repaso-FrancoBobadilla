#include <iostream>
#include <string>
#include "Calculadora.h"

using namespace std;

int main() {
    cout << "Ejercicio 00/03\n" << endl;
    Calculadora<int> calInt;
    calInt.setA(16);
    calInt.setB(0);
    try {
        cout << calInt.dividir() << endl;
    } catch (int e) {
        cout << "Error " << e << endl;
    }

    return 0;
}