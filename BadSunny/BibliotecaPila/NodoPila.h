
#ifndef PILA_NODOPILA_H
#define PILA_NODOPILA_H
#include "ElementoPila.h"
struct NodoPila {
    struct ElementoPila elemento; /*Dato que cambia por double, char, struct */
    struct NodoPila * siguiente; /*puntero a una variable de tipo struct Nodo*/
};
#endif //PILA_NODOPILA_H