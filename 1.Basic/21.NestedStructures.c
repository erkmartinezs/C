/*Nested Structures in C*/

//! No usar espacios en los datos ingresados en las esctruturas -- C no permite espacion en un array

#include <stdio.h>

#define length 2 // definimos una constante

struct owner
{
    char name[20];
    char direction[30];
};

struct dog
{
    char name[20];
    int ageMonths;
    struct owner ownerDog; // anidamos la estructura owner a estructura dog

} dogs[length]; // pasamos la constante como parametro(cantidad de estructuras)

int main()
{
    for (int i = 0; i < length; i++) // ciclo para solicitar los datos
    {
        printf("Nombre del perro\n");
        scanf("%s", dogs[i].name);
        printf("Edad del perro en meses\n");
        scanf("%i", &dogs[i].ageMonths);
        printf("Nombre del duenio\n");
        scanf("%s", dogs[i].ownerDog.name); // uso de la estructura anidada -- para pedir datos
        printf("Direccion del duenio\n");
        scanf("%s", dogs[i].ownerDog.direction); // uso de la estructura anidada -- para pedir datos
        printf("\n");
    }

    for (int i = 0; i < length; i++) // ciclo para impresion de los datos ingresados
    {
        printf("El nombre del perro es: %s\n", dogs[i].name);
        printf("La edad del perro es: %i\n", dogs[i].ageMonths);
        printf("El nombre del duenio es: %s\n", dogs[i].ownerDog.name);        // uso de la estructura anidada -- para imprimir datos
        printf("La direccion del perro es: %s\n", dogs[i].ownerDog.direction); // uso de la estructura anidada -- para imprimir datos
    }
    return 0;
}