#include<stdio.h>
int main() {
  char a1[20],a2[20],a3[20];
  scanf("%s", a1 );
  scanf("%s", a2 );
  scanf("%s", a3 );
  char prefix[20];
  for (int i = 0; i < 20; i++) {
    if (a1[i]==a2[i]==a3[i]) {
        prefix[i]=a1[i]; 
    }
  }
}
