#include <math.h>
#include <stdio.h>
// Creating a User-Defined Function (UDF)
void myFunction1() {
  printf("This is a User-defined function: Function1\n");
}

// UDF with single parameter
void myFunction2(char name[]) {
    printf("Hello %s\n", name);
}

// UDF with multiple parameters
void myFunction3(char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
}


// UDF with return values
int myFunction5(int x, int y) {
    return x + y;
}

// Recursion
int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } 
    else {
        return 0;
    }
}

int main() {
    // Calling User-defined function
    myFunction1();
    
    // UDF with single parameter
    myFunction2("Shaan");
    myFunction2("Shubh");
    myFunction2("Shubbu");
    
    // UDF with multiple parameters
    myFunction3("Liam", 3);
    myFunction3("Jenny", 14);
    myFunction3("Anja", 30);

    // UDF with return values
    printf("Result:%d\n", myFunction5(4,5));

    // Recursion function(Fibonacci)
    int result = sum(10);
    printf("%d", result);
    
    // Few Pre-defined math functions
    printf("%f\n", sqrt(16)); //Square root
    printf("%f\n", ceil(1.4)); //Ceiling
    printf("%f\n", floor(1.4));// Floor
    printf("%f\n", pow(4, 3)); // Power
    
    return 0;
}

// Practice

//Q.1. Create a function which takes 4 integer input and return the maximum of it
//Q.2. Create a function which tells your name when called
