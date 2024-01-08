// Operators

//Arithmetic Operators (+,-,*,/,%)
//Relational Operators (<,>,<=,>=,==,!=)
//Assignment Operators (=,+=, -=, *=, /=, %=)
//Logical Operators (&&, ||, !)
//Bitwise Operators (&, |, <<, >>, ~, ^)

#include <stdio.h> 
  
int main() 
{ 
  
    int a = 2, b = 5,c = 1; 
  
    // Arithmetic Operators
    // Binary Operators
    printf("a + b = %d\n", a + b); 
    printf("a - b = %d\n", a - b); 
    printf("a * b = %d\n", a * b); 
    printf("a / b = %d\n", a / b); 
    printf("a % b = %d\n", a % b); 

    // Unary Operators
    printf("++a = %d\n", ++a); 
    printf("--a = %d\n", --a); 
    printf("a++ = %d\n", a++); 
    printf("a-- = %d\n", a--); 

    // Comparison Operators
    printf("a < b  : %d\n", a < b); 
    printf("a > b  : %d\n", a > b); 
    printf("a <= b: %d\n", a <= b); 
    printf("a >= b: %d\n", a >= b); 
    printf("a == b: %d\n", a == b); 
    printf("a != b : %d\n", a != b); 

    // Logical Operators
    printf("a>b && b<c : %d\n", a>b && b<c); 
    printf("a>b || b>c : %d\n", a>b || b>c); 
    printf("!(a>c): %d\n", !(a>c));

    // Assignment Operators
    printf("a = b: %d\n", a = b); 
    printf("a = %d\n",a);
    printf("a += b: %d\n", a += b); 
    printf("a -= b: %d\n", a -= b); 
    printf("a *= b: %d\n", a *= b); 
    printf("a /= b: %d\n", a /= b); 
    printf("a %= b: %d\n", a %= b); 

    // Bitwise Operators
    printf("2 & 1: %d\n",2 & 1);
    printf("2 | 1:%d\n",2|1);
    printf("2 << 1:%d\n",2<<1);
    printf("2 >> 1:%d\n",2>>1);
    printf("2 ^ 1:%d\n",2^1);
    return 0; 
}
