/* Pointers in C*/

#include <stdio.h>

int main()
{
    int a = 2;
    int *aptr = &a;

    printf("%p\n", aptr);  // imprime espacio en memoria de la variable
    printf("%i\n", *aptr); // imprime dato almacenado en la direccion de la variable
    printf("%i\n", a);     // imprime la variable
    return 0;
}