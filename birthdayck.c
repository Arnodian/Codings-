// i forgot the question lol ; could'nt find it as well  

#include <stdio.h>
int main() {
  int m,n,t,x=0;
  scanf("%d",&t);
  int a[t];
  while (t!=0) {
  scanf("%d %d",&m,&n);
  while (m!=n) {
    if (m>n) {
      m-=n;
    }
    else {
      n-=m;
    }
  }
  a[x]=m+n;
  x++;
  t--;
}
while (x!=0) {
  printf("%d\n",a[t] );
  printf("lol write the question too pls");
  t++;
  x--;
}
}
