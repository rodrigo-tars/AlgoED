//
// Created by LENOVO on 4/10/2026.
//

#include "FuncionesAuxiliares.h"
void construirPila(Pila &pila)
{
    pila.inicio = nullptr;
    pila.numElementos = 0;
}
bool listaVacia(Pila pila)
{
    return pila.inicio == nullptr;
}
void apilarElemento(Pila &pila,Elemento elemento)
{
    Nodo *nuevo = new Nodo;
    nuevo->elemento = elemento;
    nuevo->siguiente = pila.inicio;
    pila.inicio = nuevo;
    pila.numElementos++;
}
void imprimirPila(Pila &pila)
{
    Nodo *rec = pila.inicio;
    if (rec != nullptr){
        cout << "[ ";
        while (rec != nullptr)
        {
            cout << rec->elemento.numero;
            if (rec->siguiente != nullptr)
            {
                cout << ", ";
            }
            rec = rec->siguiente;
        }
        cout << " ]" << endl;
    }else
    {
        cout << "Pila Vacia" << endl;
    }

}
Elemento  extraer(Pila &pila){
    Nodo *extraccion = pila.inicio;
    Elemento extraer = extraccion->elemento;
    pila.inicio = pila.inicio->siguiente;
    pila.numElementos--;
    delete extraccion;
    return extraer;
}