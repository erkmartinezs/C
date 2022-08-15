/* Recursive functions in C*/

#include <stdio.h>

// creacion de funcion factorial
long factorial(long num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}

int main()
{
    int num;
    printf("Ingresa un numero para calculo de factorial: \n");
    scanf("%i", &num);
    for (int i = 0; i <= num; i++)
    {
        printf("%ld\n", factorial(i));
    }
    return 0;
}

/*
    Factorial de un numero
    5! = 5*4*3*2*1 O 5*4!
    4! = 4*3*2*1 O 4*3!
    3! = 3*2*1 O 3*2!
    2! = 2*1 O 2*1!
    1! = 1
    0! = 1

*/