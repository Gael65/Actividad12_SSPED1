#include <iostream>

#include "arreglo.h"

using namespace std;

int main() {
    ArregloDinamico arreglo;

    arreglo.insertarFinal("cadena final 1");
    arreglo.insertarFinal("cadena final 2");
    arreglo.insertarFinal("cadena final 3");
    arreglo.insertarFinal("cadena final 4");
    arreglo.insertarFinal("cadena final 5");
    arreglo.insertarFinal("cadena final 6");
    arreglo.insertarFinal("cadena final 7");
    arreglo.insertarFinal("cadena final 8");

    cout << "Insertando 8 cadenas al final del arreglo: " << endl;
    for(size_t i = 0; i < arreglo.size(); i++) {
        cout << arreglo[i] << endl;
    }

    cout << endl;

    arreglo.insertarInicio("cadena inicio 1");
    arreglo.insertarInicio("cadena inicio 2");

    cout << "Insertando 2 cadenas al inicio del arreglo: " << endl;
    for(size_t i = 0; i < arreglo.size(); i++) {
        cout << arreglo[i] << endl;
    }

    return 0;
}