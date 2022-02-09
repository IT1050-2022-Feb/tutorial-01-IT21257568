/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
//function main begins program execution
int main() {
  int n,sum = 0,i;//declaring variables
  printf("Enter a value for n :");//taking user inputs
  scanf("%d", &n);
  for(i = 1;i <= n;i++)
  {
    sum = sum + i;//calculating the sum
  }
  printf("Sum of the numbers 1 to %d : %d", n, sum);
  return 0;
}//end of function main

