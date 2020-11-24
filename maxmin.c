
#include<stdio.h>
int main() {
 int a[5];
 for (int i = 0; i < 5; i++) {
   scanf("%d",&a[i] );
 }
 int as[5],m=0;
 for (int i = 0; i < 5; i++) {
   for (int j = 0; j < 5; j++) {
     if (a[i]<a[j]) {
       as[m]=a[i];
     }
     else {
       as[m]=a[j];
     }
     m++;
 }
 for (int i = 0; i < 5; i++) {
   printf("%d ",as[i] );
 }
}
}
