#include<stdio.h>
#include<conio.h>
#include<math.h>

/* Define function here */
#define f(x) (pow(x,2)+x)

int main()
{
 float lower, upper, integration=0.0, stepSize, k;
 int i, subInterval;
 /* Input */
 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
 printf("Enter stepSize: ");
 scanf("%d", &stepSize);

 /* Calculation */
 /* Finding step size */
 subInterval = (upper - lower)/stepSize;

 /* Finding Integration Value */
 integration = f(lower) + f(upper);
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  integration = integration + 2 * f(k);
 }
 integration = integration * stepSize/2;
 printf("\nRequired value of integration is: %.3f", integration);
 getch();
 return 0;
}
