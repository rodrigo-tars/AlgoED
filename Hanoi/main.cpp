#include <iostream>
using namespace std;
#include "Bibliotecas/FuncionesAuxiliares.h"
#include "Bibliotecas/StructPila.h"
void hanoi(int n, Pila &pilaOriginal, Pila &pilaCopia, Pila &pilaAuxiliar)
{
    int maximoNumero;
    while (!listaVacia(pilaOriginal))
    {
        maximoNumero = 0;
        while (!listaVacia(pilaOriginal))
        {
            Elemento extraido = extraer(pilaOriginal);
            apilarElemento(pilaCopia, extraido);
            if (extraido.numero > maximoNumero)
            {
                maximoNumero = extraido.numero;
            }
        }

        while (!listaVacia(pilaCopia))
        {
            Elemento extraido2 = extraer(pilaCopia);
            if (extraido2.numero != maximoNumero)
            {
                apilarElemento(pilaOriginal, extraido2);
            }else
            {
                apilarElemento(pilaAuxiliar, extraido2);

            }

        }

    }

}

int main() {
    Pila pilaOriginal, pilaCopia, pilaAuxiliar;
    construirPila(pilaOriginal);
    construirPila(pilaCopia);
    construirPila(pilaAuxiliar);

    Elemento elemento;
    int n = 10;
    int matriz[] = {10, 15, 5, 4, 8, 9, 80, 100, 74, 1};
    for (int i = 0; i < n; i++)
    {
        elemento.numero = matriz[i];
        apilarElemento(pilaOriginal, elemento);
    }


    cout << "Pila original: ";
    imprimirPila(pilaOriginal);
    cout << "Pila copia: ";
    imprimirPila(pilaCopia);
    cout << "Pila auxiliar: ";
    imprimirPila(pilaAuxiliar);
    hanoi(n, pilaOriginal, pilaCopia, pilaAuxiliar);
    cout << "Pila original: ";
    imprimirPila(pilaOriginal);
    cout << "Pila copia: ";
    imprimirPila(pilaCopia);
    cout << "Pila auxiliar: ";
    imprimirPila(pilaAuxiliar);

    return 0;
}
