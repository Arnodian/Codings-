#include <stdio.h>
int main() {
  int t;
  scanf("%d",&t);
  int num[t];
  for (int i = 0; i < t; i++) {
    scanf("%d",&num[i] );
  }
  for (int i = 0; i < t; i++) {
    printf("%d ",num[i] );
  }
  char gen;
  int sum=0;
  scanf("%s",&gen );
  printf("%c\n",gen );
  if (gen=='b') {
    for (int i = 0; i < t; i+=2) {
      sum+=num[i];
    }
  }
  else if (gen=='g') {
    for (int i = 1; i < t; i+=2) {
      sum+=num[i];
    }
  }
  printf("%d",sum);
}
