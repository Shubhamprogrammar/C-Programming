#include <stdio.h>
int main() {
    // while loop
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i=i+1;
    }
    
    // do while loop
    int j = 0;
    do {
        printf("%d\n", j);
        j++;
    }
    while (j < 5);

    // while loop with if else condition
    int dice = 1;
    while (dice <= 6) {
        if (dice < 6) {
            printf("No double roll\n");
        } 
        else {
            printf("Double Roll!\n");
        }
        dice = dice + 1;
    }
    
    // for loop
    int k;
    for (k = 0; k <= 10; k=k+2) {
        printf("%d\n", k);
    }
    
    // nested loop
    int l, m;
    // Outer loop
    for (l = 1; l <= 2; ++l) {
        printf("Outer: %d\n", l);
    
        // Inner loop
        for (m = 1; m <= 3; ++m) {
        printf(" Inner: %d\n", m);
        }
    }
    
    // For and while in same nested loop
    int n, o;
    for (n = 1; n <= 2; ++n) {
        printf("Outer for loop: %d\n", n);
        
        while (o<=3) {
        printf(" Inner while loop: %d\n", o);
        o++;
        }
    }
    
    // Continue and break statements
    int p = 0;

    while (p < 20) {
        if (p == 4) {
            p++;
            continue;
        }
        
        else if (p == 10){
            break;
        }
        printf("%d\n", p);
        p++;
    }
    return 0;
}

// Practice
//Q.1. Write a program to print the table of 5
//Q.2. Take the number from user and iterate the loop till that number if it is divisible by 3 then print

