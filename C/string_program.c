#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[]="Hello World";
    
    printf("Enter a string :- ");
    scanf("%s",str1);
    
    printf("\nString 1 :- %s",str1);
    printf("\nString 2 :- %s",str2);
    
    printf("\nLength of String 1 :- %ld",strlen(str1));
    printf("\nLength of String 2 :- %ld",strlen(str2));
    
    strcpy(str1,str2);
    
    printf("\nString 1 :- %s",str1);
    printf("\nString 2 :- %s",str2);
    
    strcat(str1, str2);
    printf("\nConcatenated String 1 : %s\n", str1);

    char str3[] = "apple";
    char str4[] = "banana";
    int result = strcmp(str3, str4);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("String 1 is less than String 2.\n");
    else
        printf("String 1 is greater than String 2.\n");
    return 0;
}
