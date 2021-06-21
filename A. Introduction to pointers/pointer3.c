/* Dev kumar, 14/6/2021*/
// POINTERS
#include <stdio.h>
int main()
{
    int a = 1025;
    // 1025 in Binary = 00000000 00000000 00000100 00000001
    int *p;
    p = &a;
    printf("Size of integer is = %d-bytes . \n", sizeof(int));
    printf("Adress of a = %u, Value of a = %d\n", p, *p);
    printf("Adress of p + 1 = %u, Value of p + 1 = %d\n", p + 1, *(p + 1));  // Value = Garbage value

    char *p0;       // We have stored the value of pointer of p into another pointer p0;
    p0 = (char *)p; // Typecasting
    printf("Size of integer is = %d-bytes . \n", sizeof(char));
    printf("Adress of char = %u, Value of char = %d\n", p0, *p0); // *p0 = dereference p0
      printf("Adress of p + 1 = %u, Value of p + 1 = %d\n", p0 + 1, *(p0 + 1)); // Value pf p0 is 4.
    return 0;
}
/*Why value of char comes 1-byte?
Ans. We know that char stores 1byte. So, when pointer p0 is dereferenced, it will only read 1 byte from 
     the binary of 1025 which has value 1. 
  
  When there is *(p0 + 1), why avlue is 4?
  Ans. Because after addition of one byte, Adress shifts to another byte which is (00000100), wich in 
       binary is four.   */


     /*
     OUTPUT = 
Size of integer is = 4-bytes . 
Adress of a = 6422292, Value of a = 1025
Adress of p + 1 = 6422296, Value of p + 1 = 3559424
Size of integer is = 1-bytes . 
Adress of char = 6422292, Value of char = 1
Adress of p + 1 = 6422293, Value of p + 1 = 4
*/