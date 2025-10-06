/* Ejercicio 2: Lista enlazada de enteros - Insertar al final */
#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *sig;
};

void insertar_final(struct Nodo **cabeza, int valor) {
    struct Nodo *nuevo = malloc(sizeof(struct Nodo));
    nuevo->dato = valor;
    nuevo->sig = NULL;
    if (!*cabeza) {
        *cabeza = nuevo;
        return;
    }
    struct Nodo *actual = *cabeza;
    while (actual->sig) actual = actual->sig;
    actual->sig = nuevo;
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
    insertar_final(&lista, 1);
    insertar_final(&lista, 2);
    insertar_final(&lista, 3);
    imprimir(lista);
    return 0;
}
