#include<stdio.h>
int main() {
  int ded;
  float bal;
  scanf("%f %f",&ded,&bal );
  if ((ded%5)==0) {
    float x;
    x=ded+(0.50);
    bal-=x;
    printf("%f",bal )
  }
  else { printf("%f",bal );}
}
