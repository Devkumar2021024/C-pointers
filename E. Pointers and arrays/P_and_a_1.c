/* Dev kumar, 14/6/2021*/
// POINTERS, Pointers and Arrays
#include <stdio.h>
int main()
{
    int D[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("Value of D[%d] is %d. \n", i, D[i]);
    }
    for(int j = 0; j < 5; j++)
    {
        printf("\n\nAdress of D[%d] is %u", j, &D[j]);
    }
    return 0;
}
/*Allocation of memeory for an array in RAM . */
/*
OUTPUT:
Value of D[0] is 1. 
Value of D[1] is 2.      
Value of D[2] is 3.      
Value of D[3] is 4.      
Value of D[4] is 5.      


Adress of D[0] is 6422276
Adress of D[1] is 6422280
Adress of D[2] is 6422284
Adress of D[3] is 6422288
Adress of D[4] is 6422292
*/
