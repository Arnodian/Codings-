#include <stdio.h>
int main() {
  int s;
  scanf("%d",&s );
  int num[s],flag[s];
  for (int i = 0; i < s; i++) {
    scanf("%d",&num[i] );
  }

  for (int i = 0; i < s; i++) {
    for (int j = i+1; j < s; j++) {
      if ((num[i]-num[j])%2!=0) {
        if (num[i]%2!=0) {
          flag[i]=1;
        }
        else
        flag[j]=1;
      }
    }
  }
  int x=0;
  for (int i = 0; i < s; i++) {
    if (flag[i]>0) {
      x++;
    }
  }
  printf("%d",x );
}
