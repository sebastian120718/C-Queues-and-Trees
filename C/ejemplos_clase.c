#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ejemplo 1

void ejemplo1() {
    int y = 42;
    int *q = &y;
    printf("Ejemplo 1: y = %d, *q = %d\n", y, *q);
}

// ejemplo 2

void ejemplo2() {
    int y = 50;
    int *q = &y;
    *q = 100;
    printf("Ejemplo 2: y = %d\n", y);
    
}

// ejemplo 3

void ejemplo3() {
    int nums[3] = {4, 5, 6};
    int *q = nums;
    printf("Ejemplo 3: Primer elemento = %d\n", *q);
}

//ejemplo 4

void ejemplo4() {
    int nums[5] = {5, 15, 25, 35, 45};
    int *q = nums;
    printf("Ejemplo 4: Array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(q + i));
    }
    printf("\n");
}

// ejemplo 5

struct Persona {
    char nombre[20];
    int edad;
};

void ejemplo5() {
    struct Persona p2 = {"Luis", 25};
    struct Persona *q = &p2;
    printf("Ejemplo 5: %s tiene %d años\n", q->nombre, q->edad);
    
}

//ejemplo 6

void ejemplo6() {
    int y = 15;
    int *q = &y;
    int **qq = &q;
    printf("Ejemplo 6: y = %d, *q = %d, **qq = %d\n", y, *q, **qq);
}

int main() {
    ejemplo1();
    ejemplo2();
    ejemplo3();
    ejemplo4();
    ejemplo5();
    ejemplo6();
}