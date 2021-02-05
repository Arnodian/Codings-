#include <stdio.h>
int main () {
  long long t;
  scanf("%lld",&t );
  while(t!=0) {
    long long x;
    scanf("%lld",&x);
    int num[x];
    for (int i = 0; i < x; i++) {
      scanf("%lld",&num[i]);
    }
    long long min1=num[0],min2=num[0],flag;
    for (int i = 0; i < x; i++) {
      if (min1>num[i] && num[i]!=0) {
        min1 = num[i];
        flag = i;
      }
    }
    num[flag] = 0;
    for (int i = 0; i < x; i++) {
      if (min2>num[i] && num[i]!=0) {
        min2 = num[i];
      }
    }
    printf("%lld\n",min1+min2);
    t--;
  }
}
