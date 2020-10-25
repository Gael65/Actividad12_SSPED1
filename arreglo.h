#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>

using namespace std;

class ArregloDinamico {
private:
    string *arreglo;
    size_t tam;
    size_t contador;
    const static size_t MAX = 5;

    void expandir();
public:
    ArregloDinamico();
    ~ArregloDinamico();

    void insertarFinal(const string &v);
    void insertarInicio(const string &v);

    size_t size();

    string operator[](size_t p) {
        return arreglo[p];
    }
};

#endif