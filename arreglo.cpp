#include "arreglo.h"

ArregloDinamico::ArregloDinamico() {
    arreglo = new string[MAX];
    contador = 0;
    tam = MAX;
}

ArregloDinamico::~ArregloDinamico() {
    delete[] arreglo;
}

void ArregloDinamico::expandir() {
    string *nuevo = new string[tam + MAX];

    for(size_t i = 0; i < contador; i++) {
        nuevo[i] = arreglo[i];
    }

    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}

size_t ArregloDinamico::size() {
    return contador;
}

void ArregloDinamico::insertarFinal(const string &v) {
    if(contador == tam) {
        expandir();
    }

    arreglo[contador] = v;
    contador++;
}

void ArregloDinamico::insertarInicio(const string &v) {
    if(contador == tam) {
        expandir();
    }

    for(size_t i = contador; i > 0; i--) {
        arreglo[i] = arreglo[i - 1];
    }  

    arreglo[0] = v;
    contador++; 
}