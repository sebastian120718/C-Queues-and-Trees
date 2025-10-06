/* Ejercicio 8: Lista enlazada de enteros - Buscar un valor */
#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *sig;
};

int buscar(struct Nodo *cabeza, int valor) {
    while (cabeza) {
        if (cabeza->dato == valor) return 1;
        cabeza = cabeza->sig;
    }
    return 0;
}

int main() {
    struct Nodo *lista = NULL;
    struct Nodo *nuevo;
    nuevo = malloc(sizeof(struct Nodo)); nuevo->dato = 5; nuevo->sig = lista; lista = nuevo;
    nuevo = malloc(sizeof(struct Nodo)); nuevo->dato = 10; nuevo->sig = lista; lista = nuevo;
    nuevo = malloc(sizeof(struct Nodo)); nuevo->dato = 15; nuevo->sig = lista; lista = nuevo;
    printf("Buscar 10: %s\n", buscar(lista, 10) ? "Encontrado" : "No encontrado");
    printf("Buscar 20: %s\n", buscar(lista, 20) ? "Encontrado" : "No encontrado");
    return 0;
}
