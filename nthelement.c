#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int num[n];
  for (int i = 0; i < 3; i++) {
    scanf("%d",&num[i] );
  }
  for (int i = 3; i < n; i++) {
    num[i]=0;
    for (int j = i-1; j >= i-3; j--) {
      num[i]+=num[j];
    }
  }
  printf("%d",num[n-1] );
}
