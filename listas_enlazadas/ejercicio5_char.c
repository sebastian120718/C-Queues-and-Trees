/* Ejercicio 5: Lista enlazada de chars - Eliminar un nodo */
#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    char dato;
    struct Nodo *sig;
};

void eliminar(struct Nodo **cabeza, char valor) {
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
        printf("%c ", cabeza->dato);
        cabeza = cabeza->sig;
    }
    printf("\n");
}

int main() {
    struct Nodo *lista = NULL;
    insertar(&lista, 'X');
    insertar(&lista, 'Y');
    insertar(&lista, 'Z');
    imprimir(lista);
    eliminar(&lista, 'Y');
    imprimir(lista);
    return 0;
}

void insertar(struct Nodo **cabeza, char valor) {
    struct Nodo *nuevo = malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->sig = *cabeza;
    *cabeza = nuevo;
}
