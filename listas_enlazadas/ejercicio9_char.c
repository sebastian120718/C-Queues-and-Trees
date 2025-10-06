/* Ejercicio 9: Lista enlazada de chars - Contar nodos */
#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    char dato;
    struct Nodo *sig;
};

int contar(struct Nodo *cabeza) {
    int c = 0;
    while (cabeza) {
        c++;
        cabeza = cabeza->sig;
    }
    return c;
}

int main() {
    struct Nodo *lista = NULL;
    struct Nodo *nuevo;
    nuevo = malloc(sizeof(struct Nodo)); nuevo->dato = 'a'; nuevo->sig = lista; lista = nuevo;
    nuevo = malloc(sizeof(struct Nodo)); nuevo->dato = 'b'; nuevo->sig = lista; lista = nuevo;
    nuevo = malloc(sizeof(struct Nodo)); nuevo->dato = 'c'; nuevo->sig = lista; lista = nuevo;
    printf("Cantidad de nodos: %d\n", contar(lista));
    return 0;
}
