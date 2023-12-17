#include <stdio.h>

int main() {

  // if statement (values)
  if (52 > 18) {
    printf("52 is greater than 18\n");
  }

  // if statement (variables)
  int a = 52;
  int b = 18;
  if (a > b) {
    printf("a is greater than b\n");
  }

  // if else statement
  int c = 52;
  if (c < 18) {
    printf("Good day.\n");
  } else {
    printf("Good evening.\n");
  }

  // else if statement
  int d = 22;
  if (d < 10) {
    printf("Good morning.\n");
  } else if (d < 20) {
    printf("Good day.\n");
  } else {
    printf("Good evening.\n");
  }

  // Short Hand if else (Ternary Operator)
  int e = 20;
  if (e < 18) {
    printf("Good day.\n");
  } else {
    printf("Good evening.\n");
  }

  int f = 20;
  (f < 18) ? printf("Good day.\n") : printf("Good evening.\n");

      // switch case with break
  int day = 4;
    switch (day) {
      case 1:
        printf("Monday\n");
        break;
      case 2:
        printf("Tuesday\n");
        break;
      case 3:
        printf("Wednesday\n");
        break;
      case 4:
        printf("Thursday\n");
        break;
      case 5:
        printf("Friday\n");
        break;
      case 6:
        printf("Saturday\n");
        break;
      case 7:
        printf("Sunday\n");
        break;
    }
    
    // switch case with default
    int g = 4;

    switch (g) {
      case 6:
        printf("Today is Saturday\n");
        break;
      case 7:
        printf("Today is Sunday\n");
        break;
      default:
        printf("Looking forward to the Weekend\n");
    }

  return 0;
}

// Practice
//Q.1. Write a program to check that the number is odd or even by taking input from user
//Q.2. Write a program to check that the number is positive or negative
