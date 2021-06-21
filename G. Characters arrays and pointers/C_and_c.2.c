/* Dev kumar, 14/6/2021*/
// POINTERS, Chaharacter arrays and pointers
// Dealing with strings
#include <stdio.h>
void print(char* C)
{
    int i = 0;
    while(*(C+i) != '\0')  // Print value of string until null char is not achieved.
    {
         printf("%c",C[i]);
         i++;
    }
    printf("\n");
}
int main()
{
     char C[] = "Dev";
     printf("%s\n",C);
     print(C);
}

/* Output : 
Dev
Dev 
*/
