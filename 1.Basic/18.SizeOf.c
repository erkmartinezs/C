/* Operator sizeOf in C*/

#include <stdio.h>

size_t getsize(float *ptr)
{
    return sizeof(*ptr);
}

int main()
{
    float array[20];
    printf("El numero de bytes en es arreglo es: %lu\n", sizeof(array));
    printf("\n");
    printf("El numero de bytes devueltos por getsize es : %lu\n", getsize(array));

    return 0;
}