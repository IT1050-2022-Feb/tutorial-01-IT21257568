/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
//function main begins program execution
int main() {
  float distance,finalPay;
  printf("Enter the distance van has travelled : ");
  scanf("%f", &distance);//storing user inputs
  if(distance <= 30)
  {
    finalPay = distance * 50;
  }
  else
  {
    finalPay = 30 * 50 + (distance - 30) * 40;
  }
  printf("Final payment : %.2f", finalPay);

  
  return 0;
}//end of function main
