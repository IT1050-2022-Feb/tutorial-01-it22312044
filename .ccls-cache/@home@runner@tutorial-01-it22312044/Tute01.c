#include <stdio.h>

/* Exercise 1 - Calculations
Write a C program to input marks of two subjects. Calculate and print the
average of the two marks. */

int main(void) {
  int mark1 = 0, mark2 = 0;
  float avg = 0;

  printf("Enter marks of two subjects: ");
  scanf("%d%d", &mark1, &mark2);

  avg = (mark1 + mark2) / 2.0;
  printf("Average mark is %.2f", avg);
  return 0;
}