#include <stdio.h>
int main()
{
    int edad;
    printf("Ingresa tu edad\n");
    scanf("%d", &edad);
    if (edad >= 18)
    {
        printf("Eres mayor de edad\n");
    }
    else if (edad == 17)
    {
        printf("Ya casi!, espera un poco mas");
    }
    else
    {
        printf("Eres menor de edad;");
    }
    return 0;
}