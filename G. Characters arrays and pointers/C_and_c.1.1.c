/* Dev kumar, 14/6/2021*/
// POINTERS, Chaharacter arrays and pointers
// Dealing with strings
#include <stdio.h>
int main()
{
    char s[] = "Dev Kumar";
    char *s1;
    s1 = s;
    printf("Printed string = %s", s);
    printf("\nSize pf string = %d Bytes", sizeof(s));
    printf("\n%u", s1);
    printf("\n%c", *s1);
    s1++;
    printf("\n%u", s1);
    printf("\n%c", *s1);
}
/*
Same as in arrys in strings when we assigna value of astring to a poiner character, it stores the adress of only first element
of the string.
*/

//Size of string = Mo.of char in strings + 1
// Adding one to pointer variable will make pointer point to other element of the string.

/*
OUTPUT:
Printed string = Dev Kumar
Size pf string = 10 Bytes
6422290
D
6422291
e
*/