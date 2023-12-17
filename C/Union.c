#include<stdio.h>
#include<string.h>

// Same as structure, but takes less space
union one
{
    char a[50];
    char b[50];
    int c;
};

void main( )
{
    union one C;

    strcpy( C.a, "Hello World");   
    printf( "a : %s\n", C.a);

    strcpy( C.b, "Bye World ");
    printf( "b : %s\n", C.b);

    C.c = 0;
    printf( "c : %d\n", C.c);
    
    printf("The Memory Address of a: %d\n",&C.a);
    printf("The Memory Address of b: %d\n",&C.b);
    printf("The Memory Address of c: %d\n",&C.c);
}
