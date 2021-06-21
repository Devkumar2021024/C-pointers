/* Dev kumar, 14/6/2021*/
// POINTERS
// Pointer arithmetic
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    int *p;
    a = 10;
    p = &a;
    printf("Adress p id = %u\n", p);
    printf("Adress (p + 1) is = %u\n", p + 1);        //It will increment p by 4-bytes.
    printf("Value at adress p : %d\n", *p);           // Value of a.
    printf("Value at adress (p + 1) : %d", *(p + 1)); // Garbage value will be stored.

    printf("\n\nSize of integers : %d-bytes\n", sizeof(int));
    printf("Size of characters : %d-bytes\n", sizeof(char));
    printf("Size of float : %d-bytes\n", sizeof(float));

    return 0;
}

/*OUTPUT :
Adress p id = 4248737988
Adress (p + 1) is = 4248737992
Value at adress p : 10
Value at adress (p + 1) : -46229308

Size of integers : 4-bytes
Size of characters : 1-bytes
Size of float : 4-bytes
*/