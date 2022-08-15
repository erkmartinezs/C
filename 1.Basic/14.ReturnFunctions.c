/* Return Functions in C*/

#include <stdio.h>

// creacion de la funcion suma

int num3 = 2; // creacion variable global
int sum(int num1, int num2)
{
    int sum = num1 + num2 + num3;
    return sum;
}

// funcion main inicia la ejecucion del programa
int main()
{
    int num1, num2;
    printf("Ingresa el primer valor: \n");
    scanf("%i", &num1);
    printf("Ingresa el segundo valor: \n");
    scanf("%i", &num2);
    printf("El resultado de la suma es: %i\n", sum(num1, num2));
    return 0;
}