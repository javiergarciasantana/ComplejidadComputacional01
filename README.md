# Práctica 1 - Complejidad Computacional

## Descripción

Este proyecto implementa funciones primitivas recursivas (PR) como la función de suma, producto y potencia, utilizando un enfoque orientado a objetos. El archivo principal (`func_pr_main.cc`) permite calcular la potencia de dos números enteros utilizando estas funciones PR. Este código es parte de la **Práctica 1** de la asignatura **Complejidad Computacional**.

### Autor

- **Nombre**: Javier Garcia Santana
- **Correo**: alu0101391663@ull.edu.es
- **Fecha de creación**: 27/09/2024
- **Versión**: 2.0

## Archivos

1. **`func_pr_main.cc`**: Archivo principal que permite ejecutar el programa.
2. **`library.h`**: Implementación de funciones primitivas recursivas como la suma, el producto y la potencia.
3. **`func_pr.h`**: Define la clase base `PrimitiveRecursive` que es utilizada por las clases derivadas.

## Uso del programa

Para ejecutar el programa, primero debes compilarlo. Puedes usar `make` o compilar manualmente con `g++`.

### Compilación

```bash
make
#O bien maunalmente con: g++ -o power func_pr_main.cc
```

### Ejecucion
El programa acepta dos argumentos enteros y devuelve el valor del primer número elevado al segundo número (potencia).

```bash
./power <número base> <exponente>
```
### Detalles del codigo
#### Clases principales
- **PrimitiveRecursive**: Clase abstracta base que define las funciones primitivas recursivas.
- **Zero**: Implementa la función constante que devuelve 0.
- **Successor**: Implementa la función sucesor que incrementa un valor en 1.
- **One**: Implementa la función que devuelve 1.
- **Addition**: Implementa la función de suma.
- **Product**: Implementa la función de multiplicación.
- **Power**: Implementa la función de potencia.
