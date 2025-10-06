/* Ejercicio 10: Lista enlazada de strings - Liberar memoria */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Nodo {
    char dato[50];
    struct Nodo *sig;
};

void insertar(struct Nodo **cabeza, const char *valor) {
    struct Nodo *nuevo = malloc(sizeof(struct Nodo));
    strcpy(nuevo->dato, valor);
    nuevo->sig = *cabeza;
    *cabeza = nuevo;
}

void liberar(struct Nodo **cabeza) {
    struct Nodo *actual = *cabeza;
    while (actual) {
        struct Nodo *tmp = actual;
        actual = actual->sig;
        free(tmp);
    }
    *cabeza = NULL;
}

int main() {
    struct Nodo *lista = NULL;
    insertar(&lista, "uno");
    insertar(&lista, "dos");
    insertar(&lista, "tres");
    liberar(&lista);
    printf("Lista liberada.\n");
    return 0;
}
