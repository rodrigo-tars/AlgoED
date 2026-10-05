//
// Created by LENOVO on 4/10/2026.
//

#ifndef HANOI_FUNCIONESAUXILIARES_H
#define HANOI_FUNCIONESAUXILIARES_H
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
#include "StructPila.h"

void construirPila(Pila &pila);
bool listaVacia(Pila pila);
void apilarElemento(Pila &pila,Elemento elemento);
void imprimirPila(Pila &pila);
Elemento  extraer(Pila &pila);


#endif //HANOI_FUNCIONESAUXILIARES_H
