/* Dev kumar, 14/6/2021*/
// POINTERS, Arrays as an function arguements.
#include <stdio.h>
int main()
{
    int Arr[5] = {23, 34, 23, 1, 23};
    int num = sizeof(Arr) / sizeof(Arr[0]);
    Dble(Arr, num);
    for (int i = 0; i < 5; i++)
    {
        printf(" %d, ", Arr[i]);
    }
    return 0;
}
void Dble(int Arr[], int size) //Passing array and its size in User def. function
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        Arr[i] = 2 * Arr[i];
    }
}

/*
OUTPUT:
46,  68,  46,  2,  46,
*/