#include <stdio.h>
// #include "nombre del archivo"
#define PI 3.14159
#define CUBO(a) a *a *a

int main()
{
    // int suma = PI + 3;
    // printf("%i", suma);
    int a = 3;
    printf("El cubo de la variable a es: %i\n", CUBO(a));
    return 0;
}