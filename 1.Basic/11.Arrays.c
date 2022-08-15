/*Arrays in C*/
// Example with one-dimensional arrays

// 1
//  #include <stdio.h>

// int main()
// {
//     int arreglo[4] = {9, 7, 5, 1};
//     printf("%i\n", arreglo[2]);

//     return 0;
// }

// 2
//  #include <stdio.h>

// int main()
// {
//     int sizeA;
//     printf("Ingresa el tamanio del array\n");
//     scanf("%i", &sizeA);
//     int age[sizeA];
//     for (int i = 0; i < sizeA; i++)
//     {
//         printf("Ingresa el valor %i\n", i + 1);
//         scanf("%i", &age[i]);
//     }
//     printf("Los valores del array son : \n");
//     for (int i = 0; i < sizeA; i++)
//     {
//         printf("%i-", age[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Example with multi-dimensional arrays

#include <stdio.h>
int main()
{ // Col ..0 1 2
    // fila0|5 3 1
    // fila1|6 4 2
    int multi[2][3] = {{5, 3, 1}, {6, 4, 2}};
    printf("%i\n", multi[1][1]);

    return 0;
}

// test fail
//  #include <stdio.h>
//  int main()
//  {

//     int rows;
//     int columns;

//     printf("Ingresa las filas del array\n");
//     scanf("%i", &rows);
//     printf("Ingresa las columnas del array\n");
//     scanf("%i", &columns);

//     int multi[rows][columns];
//     for (rows = 0; i < rows; i++)
//     {
//         for (j = 0; j < columns; j++)
//         {
//             printf("Ingresa el valor %i\n", j + 1);
//             scanf("%8d", &multi[i][j]);
//         }
//     }
//     printf("Los valores del array son : \n");
//     printf("\n");
//     return 0;
// }