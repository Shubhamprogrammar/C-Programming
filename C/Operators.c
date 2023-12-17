// Operators

//Arithmetic Operators
//Relational Operators
//Logical Operators
//Bitwise Operators
//Assignment Operators

#include <stdio.h> 
  
int main() 
{ 
  
    int a = 25, b = 5; 
  
    // using operators and printing results 
    printf("a + b = %d\n", a + b); 
    printf("a - b = %d\n", a - b); 
    printf("a * b = %d\n", a * b); 
    printf("a / b = %d\n", a / b); 
    printf("a % b = %d\n", a % b); 
    printf("+a = %d\n", +a); 
    printf("-a = %d\n", -a); 
    printf("a++ = %d\n", a++); 
    printf("a-- = %d\n", a--); 
  
    printf("a < b  : %d\n", a < b); 
    printf("a > b  : %d\n", a > b); 
    printf("a <= b: %d\n", a <= b); 
    printf("a >= b: %d\n", a >= b); 
    printf("a == b: %d\n", a == b); 
    printf("a != b : %d\n", a != b); 
    
    printf("a && b : %d\n", a>b && b<a); 
    printf("a || b : %d\n", a>b || b>a); 
    printf("!a: %d\n", !a>b);
	
	printf("a = b: %d\n", a = b); 
    printf("a += b: %d\n", a += b); 
    printf("a -= b: %d\n", a -= b); 
    printf("a *= b: %d\n", a *= b); 
    printf("a /= b: %d\n", a /= b); 
    printf("a %= b: %d\n", a %= b); 
    printf("a &= b: %d\n", a &= b); 
    printf("a |= b: %d\n)", a |= b); 
    printf("a >>= b: %d\n", a >> b); 
    printf("a <<= b: %d\n", a << b);  
    return 0; 
}
