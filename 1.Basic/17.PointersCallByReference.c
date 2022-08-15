/* Pointers in C*/
// Calls by reference

// Call By Value
//  #include <stdio.h>
//  int cube(int n)
//  {
//      return n * n * n;
//  }

// int main()
// {
//     int num = 5;
//     printf("Valor Inicial%i\n", num);
//     num = cube(num);
//     printf("Nuevo valor%i\n", num);

//     return 0;
// }

// Call By Reference
#include <stdio.h>
void cube(int *n)
{
    *n = *n * *n * *n;
}

int main()
{
    int num = 5;
    printf("Valor Inicial%i\n", num);
    cube(&num);
    printf("Nuevo valor%i\n", num);

    return 0;
}