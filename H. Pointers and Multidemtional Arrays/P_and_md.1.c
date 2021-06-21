#include<stdio.h>
void printtable(int *mulTable, int num, int n)
{
    printf("The nultiplication table of %d is : \n", num);
    for(int i = 0; i < n;i++)
    {
        mulTable[i] = num*(i+1);
    }
    for(int j = 0; j < n; j++)
    {
        printf("%d X %d = %d \n", num, n, mulTable[j]);
    }
    printf("\n \n *************************************************** \n \n");
}
int main()
{
     int mulTable[4][10];
     printtable(mulTable[0], 2, 10);
     printtable(mulTable[1], 3, 10);
     printtable(mulTable[2], 4, 10);
     printtable(mulTable[3], 5, 10);
     printtable(mulTable[4], 6, 10);

     return 0;
}