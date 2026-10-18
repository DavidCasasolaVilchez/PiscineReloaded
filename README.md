# Piscine Reloaded

> Una colección de ejercicios de **42** para recuperar, reforzar y poner en
> práctica los fundamentos de Shell y C.

![42](https://img.shields.io/badge/42-Piscine-black?style=for-the-badge)
![Lenguaje](https://img.shields.io/badge/language-C%20%7C%20Shell-blue?style=for-the-badge)
![Ejercicios](https://img.shields.io/badge/ejercicios-28-6f42c1?style=for-the-badge)

## Índice

- [Sobre el proyecto](#sobre-el-proyecto)
- [Contenido](#contenido)
- [Mapa de ejercicios](#mapa-de-ejercicios)
- [Cómo usarlo](#cómo-usarlo)
- [Buenas prácticas](#buenas-prácticas)

## Sobre el proyecto

**Piscine Reloaded** reúne soluciones de ejercicios progresivos orientados a
trabajar la lógica de programación y las bases del lenguaje C:

- comandos y automatización con Shell;
- sintaxis, funciones y estructuras de control;
- punteros y paso por referencia;
- strings y argumentos de línea de comandos;
- recursividad y algoritmos sencillos;
- memoria dinámica;
- headers, macros y estructuras;
- punteros a función y callbacks;
- creación de una librería estática con `make`;
- entrada/salida de archivos con descriptores y llamadas al sistema.

Cada ejercicio vive en su propia carpeta (`ex00` a `ex27`) y mantiene el
formato habitual de los proyectos de la Piscina.

## Contenido

| Bloque | Ejercicios | Enfoque |
|:------:|:----------:|---------|
| Shell | `ex00` – `ex05` | Ficheros, comandos, variables y filtros |
| C · fundamentos | `ex06` – `ex11` | Bucles, condiciones y punteros |
| C · algoritmos | `ex12` – `ex14` | Factorial iterativo, recursividad y raíz cuadrada |
| C · strings | `ex15` – `ex20` | Salida, longitud, comparación, argumentos y duplicación |
| C · memoria y headers | `ex21` – `ex24` | Rangos, macros, estructuras y Makefile |
| C · callbacks | `ex25` – `ex26` | Punteros a función y procesamiento de arrays |
| C · archivos | `ex27` | Descriptores, `open`, `read`, `write` y `close` |

## Mapa de ejercicios

### Shell

| Ejercicio | Qué se practica |
|:---------:|-----------------|
| [`ex00`](./ex00) | Trabajar con un archivo comprimido |
| [`ex01`](./ex01) | Crear una salida concreta desde Shell |
| [`ex02`](./ex02) | Buscar y eliminar archivos temporales |
| [`ex03`](./ex03) | Obtener nombres de scripts con `find` y `basename` |
| [`ex04`](./ex04) | Extraer la dirección MAC de una interfaz |
| [`ex05`](./ex05) | Crear un archivo con un nombre especial |

### C

| Ejercicio | Archivo | Qué se practica |
|:---------:|---------|-----------------|
| [`ex06`](./ex06) | `ft_print_alphabet.c` | Recorrer e imprimir el alfabeto |
| [`ex07`](./ex07) | `ft_print_numbers.c` | Recorrer e imprimir dígitos |
| [`ex08`](./ex08) | `ft_is_negative.c` | Condicionales y clasificación de signos |
| [`ex09`](./ex09) | `ft_ft.c` | Modificar un valor mediante un puntero |
| [`ex10`](./ex10) | `ft_swap.c` | Intercambiar dos valores |
| [`ex11`](./ex11) | `ft_div_mod.c` | División, módulo y parámetros de salida |
| [`ex12`](./ex12) | `ft_iterative_factorial.c` | Factorial con un bucle |
| [`ex13`](./ex13) | `ft_recursive_factorial.c` | Factorial mediante recursividad |
| [`ex14`](./ex14) | `ft_sqrt.c` | Buscar una raíz cuadrada exacta |
| [`ex15`](./ex15) | `ft_putstr.c` | Imprimir una cadena |
| [`ex16`](./ex16) | `ft_strlen.c` | Calcular la longitud de una cadena |
| [`ex17`](./ex17) | `ft_strcmp.c` | Comparar dos cadenas |
| [`ex18`](./ex18) | `ft_print_params.c` | Recorrer argumentos de `main` |
| [`ex19`](./ex19) | `ft_sort_params.c` | Ordenar argumentos alfabéticamente |
| [`ex20`](./ex20) | `ft_strdup.c` | Reservar memoria y duplicar strings |
| [`ex21`](./ex21) | `ft_range.c` | Crear un rango con memoria dinámica |
| [`ex22`](./ex22) | `ft_abs.h` | Definir y usar una macro |
| [`ex23`](./ex23) | `ft_point.h` | Declarar una estructura |
| [`ex24`](./ex24) | `Makefile` | Compilar una librería estática |
| [`ex25`](./ex25) | `ft_foreach.c` | Aplicar una función a cada elemento |
| [`ex26`](./ex26) | `ft_count_if.c` | Contar elementos mediante un callback |
| [`ex27`](./ex27) | `ft_display_file.c` | Leer y mostrar el contenido de un archivo |

## Cómo usarlo

Clona el repositorio y entra en la carpeta del proyecto:

```bash
git clone <URL_DEL_REPOSITORIO>
cd PiscineReloaded
```

Los ejercicios de Shell se pueden revisar y ejecutar directamente:

```bash
cat ex03/find_sh.sh
sh ex03/find_sh.sh
```

Las funciones de C no incluyen un `main` de prueba en la mayoría de los casos.
Para probar una de ellas, crea un archivo temporal con un `main`, compílalo
junto con la solución y revisa el resultado:

```bash
cc -Wall -Wextra -Werror test.c ex16/ft_strlen.c -o test
./test
```

El ejercicio `ex24` contiene la base de una librería estática y se construye
desde su propia carpeta cuando están disponibles sus fuentes:

```bash
cd ex24
make
```

`ex27` genera el ejecutable `ft_display_file`, que recibe exactamente un
nombre de archivo:

```bash
cd ex27
make
./ft_display_file archivo.txt
```

Si no se proporciona ningún archivo, se pasan demasiados argumentos o el
archivo no se puede abrir, el programa muestra un mensaje de error.

## Buenas prácticas

- Compila C con `-Wall -Wextra -Werror`.
- Comprueba los casos límite: valores negativos, `NULL`, cadenas vacías y
  rangos inválidos.
- Libera toda la memoria reservada dinámicamente.
- Mantén cada solución aislada dentro de su ejercicio.
- Usa `git diff` antes de entregar para revisar exactamente los cambios.

---

Hecho como práctica de la Piscina de **42** · C y Shell, paso a paso.