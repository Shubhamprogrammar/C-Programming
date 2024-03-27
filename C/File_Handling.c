#include <stdio.h>

int main() {
    // To create, open, read, and write to files, we declare a pointer of type FILE, and use the fopen() function
    FILE *fptr;

    // Create a file
    fptr = fopen("filename.txt", "w");

    // Write some text to the file
    fprintf(fptr, "Some text");

    // Reusing the same function with different text fprintf(fptr, "Hello World!"); deletes the existing content of the file and adds the new content
    fprintf(fptr, "\nHello World!");

    // Close the file
    fclose(fptr);

    // Open a file in append mode
    fptr = fopen("filename.txt", "a");

    // Append some text to the file
    fprintf(fptr, "\nHi everybody!");

    fclose(fptr);

    // If you want to create the file in a specific folder, just provide an absolute path:
    // fptr = fopen("C:\directoryname\filename.txt", "w");

    // Open a file in read mode
    fptr = fopen("filename.txt", "r");

    char s1[100];
    char s2[100];
    
    // Stores 1st line of file in variable s1
    fgets(s1, 100, fptr);
    printf("%s",s1); // %s is string
    rewind(fptr);
    // Read the full content and print it
    while(fgets(s2, 100, fptr)) {
    printf("%s", s2);
    }
    
    fclose(fptr);
    
    return 0;
}

// Practice
//Q.1. Create a file with a name "random.txt" and write your schedule into it and then read the content from that
//Q.2. In the same file append some content then read
