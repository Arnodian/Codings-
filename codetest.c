#include <stdio.h>
#include <stdlib.h>
#define LVAL 0.01 // Defining the test value
void f1(){
	double func1(double x)
	{
	    return (x*x*x) - (14*x*x) + (35*x) +50; // define the funtions
	}
		double calc(double a,int b) {
			if (abs(b-a)<LVAL) { // check for the give |b-a|<0.01 condition
			printf( "The value of root is %.2lf\n",b );
			}
			if (func1(a) * func1(b) >= 0)
			{
					printf("NO roots exist\n");     // check if the function values at a and b are at opposite sides of x-axis or not
					{														    	// otherwise that means that the function never intersects x-axis thus no root exist
					return 0;
			}
			double c;
			while ((b-a) >= LVAL)
			{
					c = (a+b)/2;// takes average or the interval values
					if (func1(c) == 0.0) // check for the root at average
							break;
					else if (func1(c)*func1(a) < 0) // decide which way to proceed with limits
							b = c;
					else
							a = c;
			}
			printf( "The value of root is %.2lf\n",c  ); // print the limits
		}
		printf("For the given function 1 and the intervals provided the roots are :\n" );   // Printing values of the roots by passing the intervals as arguments
		printf("In given interval [%d %d] : ",-15,-10 ); calc(-15,-10);
		printf("In given interval [%d %d] : ",10,20 ); calc(10,20);
		printf("In given interval [%d %d] : ",0,5 ); calc(0,5);
		printf("In given interval [%d %d] : ",-8,0 ); calc(-8,0);
		printf("\n");
	}
	void f2(){
		double func2(double x)
		{
		    return (x*x) - (12*x) - 805; // define the funtions
		}
			double calc(double a,int b) {
				if (abs(b-a)<LVAL) { // check for the give |b-a|<0.01 condition
				printf( "The value of root is %.2lf\n",b );
				}
				if (func2(a) * func2(b) >= 0)   // check if the function values at a and b are at opposite sides of x-axis or not
				{														    	// otherwise that means that the function never intersects x-axis thus no root exist
				{
						printf("NO roots exist\n");
						return 0;
				}
				double c;
				while ((b-a) >= LVAL)
				{
						c = (a+b)/2;// takes average or the interval values
						if (func2(c) == 0.0) // check for the root at average
								break;
						else if (func2(c)*func2(a) < 0) // decide which way to proceed with limits
								b = c;
						else
								a = c;
				}
				printf( "The value of root is %.2lf\n",c  ); // print the limits
			}
			printf("\nFor the given function 2 and the intervals provided the roots are :\n" ); // Printing values of the roots by passing the intervals as arguments
			printf("In given interval [%d %d] : ",0,10 ); calc(0,10);
			printf("In given interval [%d %d] : ",-50,0 ); calc(-50,0);
			printf("In given interval [%d %d] : ",50,70 ); calc(50,70);
			printf("In given interval [%d %d] :",20,40 ); calc(20,40);
		}
		void f3(){
			double func3(double x)
			{
			    return (x*x*x*x) - (54*x*x*x) + (1048*x*x) - (8586*x) +24781; // define the funtions
			}
				double calc(double a,int b) {
					if (abs(b-a)<LVAL) { // check for the give |b-a|<0.01 condition
					printf( "The value of root is %.2lf\n",b );
					}
					if (func3(a) * func3(b) >= 0)     // check if the function values at a and b are at opposite sides of x-axis or not
					{														    	// otherwise that means that the function never intersects x-axis thus no root exist
							printf("NO roots exist\n");
							return 0;
					}
					double c;
					while ((b-a) >= LVAL)
					{
							c = (a+b)/2; // takes average or the interval values
							if (func3(c) == 0.0) // check for the root at average
									break;
							else if (func3(c)*func3(a) < 0) // decide which way to proceed with limits
									b = c;
							else
									a = c;
					}
					printf( "The value of root is %.2lf\n",c  ); // print the limits
				}
				printf("\nFor the given function 3 and the intervals provided the roots are :\n" ); // Printing values of the roots by passing the intervals as arguments
		    printf("In given interval [%d %d] : ",-10,0 ); calc(-10,0);
		    printf("In given interval [%d %d] : ",-12,-18 ); calc(-12,-18);
		    printf("In given interval [%d %d] : ",25,75 ); calc(25,75);
		    printf("In given interval [%d %d] : ",0,10 ); calc(0,10);
			}
	int main() {
		f1(); f2(); f3();
		return 0;
	}
