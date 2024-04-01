#include <stdio.h>
// math header library to use the sin function
// cmd to run: gcc sine.c -lm
#include <math.h>

int main()
{
// declaration x,y with a start value of 0
  double x = 0;
  double y = 0;

// prompting a user to input a value
  printf("In put a positive float value from 0 to 1: ");
  scanf("%lf", &x);

// calculating sine function and outputing value of sine of x
  y = sin(x);
  printf("\nThe Sine of %lf, is %lf", x, y);

  return 0;
}
