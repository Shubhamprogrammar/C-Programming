#include <stdio.h>
#include <string.h>

// Creating a structure using keyword struct
struct myStructure {
    // Declaring its members
    int myNum;
    char myLetter;
    char myString[30]; // String
};

int main() {
    // Creating objects of structure
    struct myStructure s1;
    struct myStructure s2;
    
    // Assigning values to members of structure using created objects
    s1.myNum = 13;
    s1.myLetter = 'B';
    
    s2.myNum = 20;
    s2.myLetter = 'C';

    // Calling members of structure using objects
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My number: %d\n", s2.myNum);
    printf("My letter: %c\n", s2.myLetter);
    
    /* strings in C are actually an array of characters, and so, they can't be assigned values like for characters
    But, the strcpy() function can be used to overcome this problem. */
    
    // strcpy (short for string copy) pastes the string "Some text" into s1.myString. Using this function requires including <string.h>
    strcpy(s1.myString, "Some text");
    printf("My string: %s\n", s1.myString);
    
    /* Another way of assiging values to members of structure while declaring a new object. This method does not require the strcpy() function */
    struct myStructure s3 = {13, 'B', "Some text"};
    printf("%d %c %s \n", s3.myNum, s3.myLetter, s3.myString);
    
    // Changing values of assigned members
    s1.myNum = 30;
    s1.myLetter = 'C';
    strcpy(s1.myString, "Something else");
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    
    printf("The Memory Address of myNum: %d\n",&s1.myNum);
    printf("The Memory Address of myLetter: %d\n",&s1.myLetter);
    printf("The Memory Address of myString: %d\n",&s1.myString);
    
    return 0;
}

// Practice
//Q.1. Create a structure by your own and implement the methods or usage of structure
