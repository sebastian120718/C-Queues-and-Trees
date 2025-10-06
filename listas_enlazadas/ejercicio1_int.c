/* Ejercicio 1: Lista enlazada de enteros - Insertar al inicio */
#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *sig;
};

void insertar_inicio(struct Nodo **cabeza, int valor) {
    struct Nodo *nuevo = malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->sig = *cabeza;
    *cabeza = nuevo;
}

void imprimir(struct Nodo *cabeza) {
    while (cabeza) {
        printf("%d ", cabeza->dato);
        cabeza = cabeza->sig;
    }
    printf("\n");
}

int main() {
    struct Nodo *lista = NULL;
    insertar_inicio(&lista, 10);
    insertar_inicio(&lista, 20);
    insertar_inicio(&lista, 30);
    imprimir(lista);
    return 0;
}
