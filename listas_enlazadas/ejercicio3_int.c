/* Ejercicio 3: Lista enlazada de enteros - Eliminar un nodo */
#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *sig;
};

void eliminar(struct Nodo **cabeza, int valor) {
    struct Nodo *actual = *cabeza, *prev = NULL;
    while (actual && actual->dato != valor) {
        prev = actual;
        actual = actual->sig;
    }
    if (!actual) return;
    if (!prev) *cabeza = actual->sig;
    else prev->sig = actual->sig;
    free(actual);
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
    struct Nodo *nuevo;
    nuevo = malloc(sizeof(struct Nodo)); nuevo->dato = 1; nuevo->sig = lista; lista = nuevo;
    nuevo = malloc(sizeof(struct Nodo)); nuevo->dato = 2; nuevo->sig = lista; lista = nuevo;
    nuevo = malloc(sizeof(struct Nodo)); nuevo->dato = 3; nuevo->sig = lista; lista = nuevo;
    imprimir(lista);
    eliminar(&lista, 2);
    imprimir(lista);
    return 0;
}
