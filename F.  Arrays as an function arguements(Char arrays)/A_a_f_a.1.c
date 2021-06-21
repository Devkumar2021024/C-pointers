/* Dev kumar, 14/6/2021*/
// POINTERS, Arrays as an function arguements.
#include <stdio.h>
int main()
{
    int Arr[5] = {23, 34, 23, 1, 23}, a;
    int size = sizeof(Arr);                 // Size of the array.
    int num = sizeof(Arr) / sizeof(Arr[0]); // Number of elements in the array. (Total size / size of one element of the array)
    
    a = SumOfElements(Arr, num);

    printf("Size of array = %d Bytes\n", size);
    printf("Number of elements in the array is  = %d \n", num);
    printf("Sum of all the elements of the array is = %d", a);

    return 0;
}
int SumOfElements(int Arr[], int size) //Passing array and its size in User def. function
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + Arr[i];
    }
    return sum;
}

/*
VV Imp. point =
When we pass an arry in an User def. function , our comipiler does not copies full array in the UDF, insted it just creates a 
pointer to the data type of array, Compiler just copies the adress of the first element in the array.
FIRST VALUE IS NOT COPIED ONLY THE ADDRESS IS COPIED. 
int arr --> int *arr;
*/

/*
OUTPUT:
Size of array = 20 Bytes
Number of elements in the array is  = 5 
Sum of all the elements of the array is = 104
*/
