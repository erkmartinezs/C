#include <stdio.h>

int main()
{
    int a = 80;
    float f = 45.3;
    float suma = (float)a + f; // Convertimos a a float y le sumamos f -- y lo almacenamos en la variable suma

    printf("entero %i\n float %.2f\n double %.3f\n caracter %c\n", a, (float)a, (double)a, (char)a);
    printf("%.2f", suma); // imprimimos la suma de la conversion de a a float + f que ya esta definido como float
                          // pedimos dos decimales en la impresion
}