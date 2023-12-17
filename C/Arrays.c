#include <stdio.h>

int main() {
    // Create an array
    int a[] = {25, 50, 75, 100};
    
    // Print an array element
    printf("%d\n",a[0]);
    
    // Modifying array element
    a[0]=55;
    printf("%d\n",a[0]);
    
    // Print all array elements
    int i;
    for (i = 0; i < 4; i++) {
    	printf("Index %d:%d\n",i, a[i]);
    }
    
    // Setting array size
    int b[4];
    b[0] = 25;
    b[1] = 50;
    b[2] = 75;
    b[3] = 100;
    
    // Get array size
    printf("%lu", sizeof(b)); //Output shows 16 since integer has 4 bytes and total elements in the array are 4. 4x4=16
    
    // Multidimensional array(2D)
    int c[2][3] = { {1, 4, 2}, {3, 6, 8} };
    printf("%d\n", c[0][2]);
    
    // Changing elements in multidim array
    c[0][2] = 9;
    printf("%d\n", c[0][2]);
    
    // Print all elements of multidim array
    int k, l;
    for (k = 0; k < 2; k++) {
        for (l = 0; l < 3; l++) {
            printf("%d\n", c[k][l]);
        }
    }
    return 0;
}

// Practice
//Q.1. Create a multidimensional array which stores two rows and five columns
//Q.2. Create a function and pass the array into the parameter
