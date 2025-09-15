# C-Queues-and-Trees

## Compilar y ejecutar ejemplos de punteros en C

Para compilar el archivo `ejemplos_punteros.c` y ejecutar los ejemplos, sigue estos pasos en una terminal Linux:

```bash
# Compilar el archivo
gcc C/ejemplos_punteros.c -o ejemplos_punteros

# Ejecutar el programa
./ejemplos_punteros
```

Esto generará un ejecutable llamado `ejemplos_punteros` que mostrará los resultados de los 10 ejemplos de punteros en C.

---

### Compilar y ejecutar en Windows 11 Pro

1. Instala [MinGW](http://www.mingw.org/) y asegúrate de agregar `gcc` al PATH.
2. Abre la terminal de comandos (CMD) o PowerShell en la carpeta del proyecto.
3. Ejecuta el siguiente comando para compilar:

```cmd
gcc C\ejemplos_punteros.c -o ejemplos_punteros.exe
```

4. Para ejecutar el programa, usa:

```cmd
ejemplos_punteros.exe
```

Esto generará el archivo `ejemplos_punteros.exe` y mostrará los resultados de los ejemplos en la consola de Windows.

---

### Compilar para Windows 11 Pro desde Codespaces (Linux)

Si trabajas en Codespaces o Linux y quieres generar un ejecutable para Windows, instala el compilador cruzado MinGW-w64:

```bash
sudo apt update
sudo apt install mingw-w64
```

Luego compila el archivo así:

```bash
x86_64-w64-mingw32-gcc C/ejemplos_punteros.c -o ejemplos_punteros.exe
```

El archivo `ejemplos_punteros.exe` generado puede ser transferido y ejecutado en Windows 11 Pro.