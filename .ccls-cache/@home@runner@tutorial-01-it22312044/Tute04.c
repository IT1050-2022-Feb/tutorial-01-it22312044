/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the
main() function.

Do not change the code given in the main() function when you are implementing
your solution.*/

#include <stdio.h>

int minimum();
int maximum();
int multiply();

int main() {
  int no1, no2;
  printf("Enter a value for no 1 : ");
  scanf("%d", &no1);
  printf("Enter a value for no 2 : ");
  scanf("%d", &no2);
  printf("%d ", minimum(no1, no2));
  printf("%d ", maximum(no1, no2));
  printf("%d ", multiply(no1, no2));
  return 0;
}
int minimum(no1, no2) {
  int min = 0;
  if (no1 < no2) {
    min = no1;
  } else {
    min = no2;
  }
  return min;
}

int maximum(no1, no2) {
  int max = 0;
  if (no1 > no2) {
    max = no1;
  } else {
    max = no2;
  }
  return max;
}

int multiply(no1, no2) {
  int multi = 0;
  multi = no1 * no2;
  return multi;
}
