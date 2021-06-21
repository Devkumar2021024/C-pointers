/* Dev kumar, 14/6/2021*/
// POINTERS, Call by reference
#include <stdio.h>
void Inc(int* );
int main()
{
    int dev;
    dev = 23;
    printf("Adress of dev in global function is = %u.\n", &dev);
    Inc(&dev);
}
void Inc( int *p)
{
    *p = *p + 1;
    printf("Adress in local function is = %u. \n", p);
    printf("Value of dev in local is  = %d", *p);
}

/*Adress remains same
When we pass the adress of the into user defined function then that type of function call is called "Call by reference".
"Related to pointers"
*/

/*
OUTPUT :
Adress of dev is = 6422300.
Adress in local function is = 6422300. 
Value of dev in local is  = 24
*/
