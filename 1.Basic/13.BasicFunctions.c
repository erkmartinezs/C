/* Basic Functions in C*/

#include <stdio.h>

// imprime un mensaje
void greeting()
{
    printf("Hello, How you doing?\n");
    return;
}

// imprime la suma de dos numeros
int sum()
{
    int num1 = 12;
    int num2 = 4;
    int sum = num1 + num2;
    return sum;
}

int main()
{
    greeting();
    printf("%i\n", sum());
    return 0;
}
