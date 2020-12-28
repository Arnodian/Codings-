
/*https://www.codechef.com/problems/LAPIN*/


#include <stdio.h>
#include <string.h>
int check( int a, int b);
int main() {
  int t;
  scanf("%d\n",&t );
  static int res[1000],x;
  char s[1000];
  int sint[1000];
  while (t!=0) {
  scanf("%s",&s );
  int l= strlen(s);
  for (int i = 0; i < l; i++) {
    sint[i]=s[i];
  }
  int sum1=0,sum2=0;
  if ((l%2)==0) {
    for (int i = 0; i < (l/2); i++) {
      sum1+=sint[i];
    }
    for (int i = (l/2); i < l; i++) {
      sum2+=sint[i];
    }
  }
  else {
    for (int i = 0; i < (l/2); i++) {
      sum1+=sint[i];
    }
    for (int i = ((l/2)+1); i < l; i++) {
      sum2+=sint[i];
    }
  }
  res[x]=check(sum1,sum2);
  x++;
  t--;
}
for (int i = 0; i < x; i++) {
  if (res[i]==1) {
    printf("YES\n" );
  }
  else
  printf("NO\n" );
}
}
int check(int a,int b) {
  if (a==b) {
    return 1;
  }
  else {
    return 0;
  }
}
