/* Dev kumar, 14/6/2021*/
// POINTERS, Void pointers
#include <stdio.h>
int main()
{
    int a = 1025;
    // 1025 in Binary = 00000000 00000000 00000100 00000001
    int *p;
    p = &a;
    printf("Size of integer is = %d-bytes . \n", sizeof(int));
    printf("Adress of a = %u, Value of a = %d\n", p, *p);
    
    // Void pointer - Genric pointer
    void *p0;
    p0 = p;
    /* We can not dereference [ (*p0) ]these pointers as they are not mapped to particular data-type, . */
     printf("Adress of a = %u\n", p0);
    return 0;
}
