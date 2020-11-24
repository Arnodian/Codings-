#include <stdio.h>
#define PI 3.14159
float area(float x);

int main() {
  printf("Enter value of radius 0 if you want to stop\n");
  float r=1;
  char choice='y';
  int i=1;
  for ( i ; choice!='n' && choice=='y' && r!=0 ; i++) {
    printf("Enter the radius of Circle %d: ",i );
    scanf("%f",&r);
    area(r);
  }


}
float area(float x) {
  float ar;
  ar=PI*x*x;
  printf("Area is: %f",ar );
  printf("\n" );
}
