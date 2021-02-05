#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n );
  int candles[n];
  for (int i = 0; i < n; i++) {
    scanf("%d",&candles[i] );
  }
  int max=candles[0],num=0;
  for (int i = 0; i < n; i++) {
    if (candles[i]>max) {
      max=candles[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (candles[i]==max) {
      num++;
    }
  }
  printf("%d",num );
}
