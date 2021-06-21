/* Pointers are variables the stores adress of other variables .*/
/* Dev kumar, 14/6/2021*/
// POINTERS
#include <stdio.h>
int main()
{

    /* NOTE = pointer stores 4-Bytes in 64-bit architecture*/
    int x, *y;
    x  =  5;
    y = &x;
    
    printf("%d\n", x);   // value of x
    printf("%u\n", y);   // adress of x
    printf("%u\n", &y);  //adress of y
    printf("%u\n", *&y); //adress of x
    int b = 20;
    *y = b;
    *y = 24; // Derferencing the pointer
    printf("%d\n", *y);  // Value of pointer after its dereferncing
    printf("%u\n", y);    // adress of Y ; it does not change
    return 0;
}

/* OUTPUT = 
5
2210227696
2210227704
2210227696
24
2210227696
*/