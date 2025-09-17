#include <stdio.h>
#include <stdlib.h>

void ejemplo1(void) {
    int x = 5;
    int *p = &x;
    printf("Ejemplo 1: x = %d, *p = %d\n", x, *p);
}


void imprimir_cola(const int *arr, int n) {
    for (int i = 0; i < n; ++i)
        printf("%d%c", *(arr + i), (i + 1 == n) ? '\n' : ' ');
}

int main(void) {
    ejemplo1();

    int *p = malloc(sizeof *p);
    if (!p) return 1;
    *p = 5;
    printf("Variante: *p (malloc) = %d\n", *p);

    int n = 5;
    int *cola = malloc(n * sizeof *cola);
    if (!cola) { free(p); return 1; }

    for (int i = 0; i < n; ++i) *(cola + i) = i + 3; 

    imprimir_cola(cola, n);

    free(p);
    free(cola);
    return 0;
}
