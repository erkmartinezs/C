/*Break and continue in C*/

// #include <stdio.h>

// Con break para el ciclo cuando la condicion se cumple
// int main()
// {
//     int num = 0;
//     while (num <= 7)
//     {
//         if (num == 2)
//         {
//             break;
//         }
//         printf("%i\n", num);
//         num++;
//     }
//     return 0;
// }

// Con continue salta el ciclo cuando la condicion se cumple
//  !dejar el incrementador despues de la preginta puede generar un bucle infinito!
#include <stdio.h>

int main()
{
    int num = 0;
    while (num <= 7)
    {
        num++;
        if (num == 2)
        {
            continue;
        }
        printf("%i\n", num);
    }
    return 0;
}