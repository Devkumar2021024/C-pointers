/* Dev kumar, 14/6/2021*/
// POINTERS, Call by value 
#include <stdio.h>
void Increment(int);
int main()
{
    int x;
    x = 10;
    printf("Adress of x in main function is %u .\n", &x);
    Increment(x);
    return 0;
}
void Increment(int x)
{
    x = x + 100;
    printf("Adress of x in user def. function is %u .\n", &x);
}

/*
When we pass a variable in a User def. function its adress chamges weather is value (value of the variable) is same or
not in the function.
*/

/*
OUTPUT :
Adress of x in main function is 6422300 .
Adress of x in user def. function is 6422272 .
*/