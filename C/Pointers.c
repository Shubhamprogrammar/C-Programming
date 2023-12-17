#include <stdio.h>

int main() {
    int b = 43;
    // Accessing memory address of a variable using reference operator-> &
    printf("%p\n", &b);
    
    int* ptr = &b; // Pointer variable ptr storing memory address of another variable
    printf("%p\n", ptr);
    
    // Using a dereference operator to display the actual value of the variable
    printf("%d\n", *ptr);
    
    // Printing memory addresses of all elements in an array
    int a[4] = {25, 50, 75, 100};
    int i;
    for (i = 0; i < 4; i++) {
        printf("%p\n", &a[i]);
    }
    
    // Using pointer to access elements in an array
    printf("%d\n", *(a));
    printf("%d\n", *(a+1));
    printf("%d\n", *(a+2));
    
    // Chaing value of element in an array using pointer
    *(a+1) = 17;
    printf("%d\n", *(a+1));
    
    return 0;
}

// Practice
//Q.1. What is memory address?
//Q.2. Create a pointer for the input which is taken from user
