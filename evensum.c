#include <stdio.h>
int main() {
  int t,a,b,cpya,cpyb;
  scanf("%d",&t );
  int res[t],x=0;
  while (t!=0) {
  scanf("%d %d",&a,&b );
  cpya=a; cpyb=b;
  int f[a],g[b];
  for (int i = 0; i < a; i++) {
    f[i]=cpya;
    cpya--;
  }
  for (int i = 0; i < b; i++) {
    g[i]=cpyb;
    cpyb--;
  }
  int count=0;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      if ((f[i]+g[j])%2==0) {
        count++;
      }
    }
  }
  res[x]=count;
  x++; t--;
}
for (int i = 0; i <x; i++) {
  printf("%d\n",res[i] );
}
}
