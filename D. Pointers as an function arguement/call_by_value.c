/* Dev kumar, 14/6/2021*/
// POINTERS, Call by value
#include <stdio.h>
int factorial(int);
int main()
{
    int a, fact;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    fact = factorial(a);
    printf("The value of factorial of %d is %d.", a, fact);
    return 0;
}
int factorial(int a)
{
    int fact, i;
    fact = 1;
    for (i = a; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
/*
When we define a user define function in main function then this process is called function call.

When we pass the value of a variable in the function and that type of call is "Call by value".
*/

/*
OUTPUT :
Enter the value of a = 5
The value of factorial of 5 is 120.
*/