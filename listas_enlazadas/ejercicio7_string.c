/* Ejercicio 7: Lista enlazada de strings - Eliminar un nodo */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Nodo {
    char dato[50];
    struct Nodo *sig;
};

void eliminar(struct Nodo **cabeza, const char *valor) {
    struct Nodo *actual = *cabeza, *prev = NULL;
    while (actual && strcmp(actual->dato, valor) != 0) {
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
        printf("%s ", cabeza->dato);
        cabeza = cabeza->sig;
    }
    printf("\n");
}

int main() {
    struct Nodo *lista = NULL;
    insertar(&lista, "a");
    insertar(&lista, "b");
    insertar(&lista, "c");
    imprimir(lista);
    eliminar(&lista, "b");
    imprimir(lista);
    return 0;
}

void insertar(struct Nodo **cabeza, const char *valor) {
    struct Nodo *nuevo = malloc(sizeof(struct Nodo));
    strcpy(nuevo->dato, valor);
    nuevo->sig = *cabeza;
    *cabeza = nuevo;
}
