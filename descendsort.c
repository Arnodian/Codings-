#include <stdio.h>
int main() {
  int s;
  scanf("%d",&s );
  int num[s];
  for (int i = 0; i < s; i++) {
    scanf("%d",&num[i] );
  }
  int max=0;
  for (int i = 0; i < s; i++) {
    max=num[i];
    for (int j = i+1; j < s; j++) {
        if (num[j]>max) {
          num[i]=num[j];
          num[j]=max;
        }
    }
  }
}
