/* Dev kumar, 14/6/2021*/
// POINTERS, pointer to pointer concept.
#include <stdio.h>
int main()
{
    int x = 5; // Type : integer
    int *p;    // Type : pointer to integer, pointing to x.
    p = &x;
    int **q; // Type : pointer to pointer, pointer pointing to pointer p. (int**)
    q = &p;
    int ***r;
    r = &q; // Type : (int***) pointer to pointer to pointer.
    printf("Value of x = %d\n", *p);
    printf("Value of x = %d\n", **q);
    printf("Value of x = %d\n", ***r);
    printf("Value of adress of x = %u \n", p);
    printf("value of adress of p = %u\n", q);
    printf("Value of adress of q = %u\n", r);
    ***r = 10;
    printf("Value of x = %d\n", x);  // We directly dereferenced x
    **q = *p + 2;
    printf("Value of x = %d\n", x);  // Here we added to dereferenced x.

    return 0;
}
/* int** will always point to int* not any integer, same goes for int*** it will always point to int**. */
/*OUTPUT = 
Value of x = 5
Value of x = 5
Value of x = 5
Value of adress of x = 6422296 
value of adress of p = 6422292
Value of adress of q = 6422288
Value of x = 10
Value of x = 12
*/