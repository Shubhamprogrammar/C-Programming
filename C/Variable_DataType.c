//There are set of rules to be followed while declaring variables and data types in C Programming:

//1. The 1st letter should be alphabet(It should not start with a number).
//2. Variables can contain (a-z,A-Z,0-9,_).
//3. Underscore (_) is the only special character allowed.
//4. Variables are Case Sensitive(abc and ABC are different).
//5. No Spaces allowed between Characters.
//6. Variable name should not make use to the C Reserved Keywords.

#include <stdio.h>

int main()
{
    int i = 52;
    printf("The integer: %d \n", i); // It is used to give output
    float f = 2.1486;
    printf("The float: %f \n", f);
    char c = 'b';
    printf("The character: %c \n", c);
    char sh[] = "Shubham";
    printf("The Name is: %s\n",sh);
    char s[10]; // scanf() is used to take input from user
    // scanf("%[^\n]s", &s); // [] is the scanset character. ^\n tells to take input until newline doesn’t get encountered. 
    scanf("%s",&s);
    printf("The String is: %s \n",s);    
    int j;
    scanf("%d",&j);
    printf("The number is: %d",j);
    
    printf("sizeof(char) == %d\n", sizeof(char));
  	printf("sizeof(short) == %d\n", sizeof(short));
  	printf("sizeof(int) == %d\n", sizeof(int));
  	printf("sizeof(long) == %d\n", sizeof(long));
    return 0;
}

//Practice
//Q.1. Write a program to print the "Hello World!" on a single line and then take input from user as a string and print it on next line
//Q.2.Print three lines of output. The first line prints the character. The second line prints the string. The third line prints the sentence by taking input from the user for all.
