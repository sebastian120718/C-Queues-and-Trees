/* Ejercicio 4: Lista enlazada de chars - Insertar y mostrar */
#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    char dato;
    struct Nodo *sig;
};

void insertar(struct Nodo **cabeza, char valor) {
    struct Nodo *nuevo = malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->sig = *cabeza;
    *cabeza = nuevo;
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
    insertar(&lista, 'A');
    insertar(&lista, 'B');
    insertar(&lista, 'C');
    imprimir(lista);
    return 0;
}
