/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
//function main begins program execution
int main() {

  float mark1,mark2,average;//variable declaration

  printf("Enter the marks for subject 1 : ");
  scanf("%f", &mark1);
  printf("Enter the marks for subject 2 : ");
  scanf("%f", &mark2);

  average = (mark1 + mark2) / 2;//calculating the average
  printf("Average : %.2f ", average);//printing the average

  return 0;
}//end of function main

