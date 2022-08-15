/*Arrays of structures in C*/

#include <stdio.h>
struct dog
{
    char name[30];
    int ageMonths;
    float weigth;
} dogs[3];

int main()
{
    for (int i = 0; i < 3; i++) // ciclo para almacenamiento de los datos
    {
        printf("%iIngresa el nombre del perro\n", i + 1);
        scanf("%s", &dogs[i].name);
        printf("%iIngresa la edad en meses del perro\n", i + 1);
        scanf("%i", &dogs[i].ageMonths);
        printf("%iIngresa el peso del perro\n", i + 1);
        scanf("%f", &dogs[i].weigth);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%iEl nombre del perro es: %s\n", i + 1, dogs[i].name);
        printf("%iLa edad del perro es: %i meses\n", i + 1, dogs[i].ageMonths);
        printf("%iEl peso del perro es: %.2f kilos \n", i + 1, dogs[i].weigth);
    }
    return 0;
}