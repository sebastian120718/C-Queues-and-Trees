/* Ejercicio 6: Lista enlazada de strings - Insertar y mostrar */
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

void imprimir(struct Nodo *cabeza) {
    while (cabeza) {
        printf("%s ", cabeza->dato);
        cabeza = cabeza->sig;
    }
    printf("\n");
}

int main() {
    struct Nodo *lista = NULL;
    insertar(&lista, "uno");
    insertar(&lista, "dos");
    insertar(&lista, "tres");
    imprimir(lista);
    return 0;
}
