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


    return 0;
}
