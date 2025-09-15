# Punteros en C

## 5.1. Todo dato tiene una dirección en memoria
En C, cada variable ocupa una posición específica en la memoria RAM del computador. Esta posición se denomina dirección de memoria. Por ejemplo, si declaramos una variable:

```c
int edad = 25;
```

La variable `edad` se almacena en una dirección única. Podemos obtener esa dirección usando el operador `&`:

```c
printf("La dirección de edad es: %p\n", &edad);
```

## 5.2. La indirección
La indirección es el proceso de acceder al valor de una variable a través de su dirección en memoria. Esto se logra usando punteros. Un puntero es una variable que almacena la dirección de otra variable, permitiendo manipular el valor original indirectamente.

## 5.3. El tipo de datos “puntero a”
Un puntero se declara anteponiendo el operador `*` al nombre de la variable. El tipo indica el tipo de dato al que apunta:

```c
int *p;      // puntero a int
float *pf;   // puntero a float
char *pc;    // puntero a char
```

Los punteros pueden apuntar a cualquier tipo de dato, incluso a estructuras y funciones.

## 5.4. Asignación de una dirección a un puntero
Para que un puntero apunte a una variable, se le asigna la dirección de esa variable usando el operador `&`:

```c
int x = 10;
int *p = &x; // p almacena la dirección de x
```

Ahora, `p` apunta a `x`. Si cambiamos el valor de `*p`, cambiamos el valor de `x`:

```c
*p = 20; // x ahora vale 20
```

## 5.5. La indirección a través de punteros
La indirección permite acceder y modificar el valor de una variable a través de su puntero. El operador `*` se usa para "desreferenciar" el puntero:

```c
int x = 5;
int *p = &x;
printf("Valor de x: %d\n", *p); // imprime 5
*p = 8;
printf("Nuevo valor de x: %d\n", x); // imprime 8
```

## Acceso indirecto a campos de una estructura
Si tenemos una estructura, podemos acceder a sus campos usando punteros y el operador `->`:

```c
struct Persona {
    char nombre[20];
    int edad;
};

struct Persona p1 = {"Ana", 30};
struct Persona *ptr = &p1;
printf("Edad: %d\n", ptr->edad); // imprime 30
```

## 5.6. Punteros a punteros
Un puntero puede almacenar la dirección de otro puntero. Esto se llama puntero a puntero:

```c
int x = 7;
int *p = &x;
int **pp = &p;
printf("Valor de x usando pp: %d\n", **pp); // imprime 7
```

## 5.7. Uso de la indirección
La indirección es fundamental para manipular datos fuera del alcance local, como en funciones y estructuras dinámicas.

### Parámetros por referencia
En C, los parámetros se pasan por valor. Para modificar una variable dentro de una función, se pasa su dirección:

```c
void incrementar(int *n) {
    (*n)++;
}

int main() {
    int x = 10;
    incrementar(&x);
    printf("x incrementado: %d\n", x); // imprime 11
    return 0;
}
```

### Estructuras como parámetros
Las estructuras pueden pasarse por referencia para evitar copias y modificar sus campos:

```c
void cambiarEdad(struct Persona *p, int nuevaEdad) {
    p->edad = nuevaEdad;
}
```

### Enlaces entre estructuras de datos
Los punteros permiten crear listas enlazadas, árboles y otras estructuras dinámicas:

```c
struct Nodo {
    int dato;
    struct Nodo *sig;
};

struct Nodo n1, n2;
n1.dato = 1;
n1.sig = &n2;
n2.dato = 2;
n2.sig = NULL;
```

## 5.8. Punteros a funciones
Un puntero puede almacenar la dirección de una función, permitiendo llamar funciones de forma dinámica:

```c
int suma(int a, int b) { return a + b; }
int resta(int a, int b) { return a - b; }

int (*operacion)(int, int);
operacion = suma;
printf("Suma: %d\n", operacion(2, 3)); // imprime 5
operacion = resta;
printf("Resta: %d\n", operacion(5, 2)); // imprime 3
```

## 5.9. Bibliografía de apoyo
- Kernighan & Ritchie, "The C Programming Language"
- Deitel & Deitel, "C How to Program"
- Stephen Prata, "C Primer Plus"

## 5.10. Ejercicios sobre punteros
1. Declara un puntero a int y úsalo para modificar el valor de una variable.
2. Escribe una función que reciba un puntero a float y multiplique el valor por 2.
3. Implementa una lista enlazada simple usando punteros.
4. Usa punteros a funciones para seleccionar operaciones matemáticas.

## 5.11. Actividades

### Arrays como casos especiales de punteros
Un array es en realidad un puntero al primer elemento:

```c
int arr[3] = {1, 2, 3};
int *p = arr;
printf("Primer elemento: %d\n", *p); // imprime 1
```

### Gestión de memoria dinámica
Los punteros permiten reservar memoria en tiempo de ejecución:

```c
int *p = (int*)malloc(sizeof(int) * 5);
if (p != NULL) {
    p[0] = 10;
    free(p);
}
```

### Arrays de punteros
Se pueden crear arrays cuyos elementos son punteros:

```c
char *nombres[3] = {"Ana", "Luis", "Marta"};
for (int i = 0; i < 3; i++) {
    printf("Nombre: %s\n", nombres[i]);
}
```

### Uso de punteros en C
Los punteros son esenciales para manipular memoria, crear estructuras dinámicas y optimizar el uso de recursos. Su correcto uso permite escribir programas eficientes y flexibles.
