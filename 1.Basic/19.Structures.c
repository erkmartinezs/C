/* Structures in C*/

#include <stdio.h>
struct test
{
    char nombre[30];
    int edadMeses;
    float peso;
} test1 = {"Quentin", 29, 16.9};
test2 = {"Berlin", 12, 14};
int main()
{
    printf("El nombre de mi mascota es: %s\n", test1.nombre);
    printf("La edad de %s es %i meses\n", test1.nombre, test1.edadMeses);
    printf("El peso de %s es %.2f\n", test1.nombre, test1.peso);
    printf("%s tiene %i meses y pesa %.2f kilos\n", test1.nombre, test1.edadMeses, test1.peso);
    printf("\n");
    return 0;
}