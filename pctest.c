#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (pow(x,2)+x)
int main()
{
 printf("                               Programming in C - Assignment 1 / Question 2 \n                                 Submitted by - Ayush Mishra / UCSE20054\n\n" ); /*Sorry for this but , c does not have setw() manipulator*/
 float lowerb, upperb, integral=0.0, dx=0.01, k; /*Declaring the lower bound , upper bound , final integration integral , dx and a variable k*/
 int i, interval;

 printf("Enter lower bound of integration: ");
 scanf("%f", &lowerb); // scaning lower bound of integral
 printf("Enter upper bound of integration: ");
 scanf("%f", &upperb); // scanning uppr bound of integral
 printf("Enter value of dx: ");
 scanf("%f", &dx); // scaning value of dx - differntial of variable x
 if (lowerb>upperb) { // finding if lower bound value is greater than upper bound value
   int x=lowerb;
   lowerb=upperb;
   upperb=x;
   interval = (upperb - lowerb)/dx; // finding the number of intervals ; which we have to divide the the graph b/w the bounds
   integral = f(lowerb) + f(upperb);
   for(i=1; i<= interval-1; i++)
   {
    k = lowerb + i*dx;
    integral = integral + 2 * f(k);  // finding integral
   }
   integral = integral * dx/2;
   printf("\nThe value of integral is: -%.4f", integral); // printing the value of integral in this  case as negatve ; because the area is calculated from higher bound to lower bound
   return 0;
 }
 else {
 interval = (upperb - lowerb)/dx; // finding the number of intervals ; which we have to divide the the graph b/w the bounds
 integral = f(lowerb) + f(upperb);
 for(i=1; i<= interval-1; i++)
 {
  k = lowerb + i*dx;
  integral = integral + 2 * f(k);  // finding integral
 }
 integral = integral * dx/2;
 printf("\nThe value of integral is: %.4f", integral); // printing the value of integral
 return 0;
}
}
