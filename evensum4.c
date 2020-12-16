#include <stdio.h>
int main() {
  int t;
  scanf("%d",&t );
  int res[t],x=0;
  while (t!=0){
  int long long a,b;
  scanf("%ld %ld",&a,&b );
  int e1=0,o1=0,e2=0,o2=0;
  if (a==1 ) {
    /* code */
  }
  if (a%2==0) {
    o1=e1=(a/2);
  }
  else {
    e1=(a/2);
    o1=e1+1;
  }
  if (b%2==0) {
    o2=e2=(b/2);
  }
  else {
    e2=(b/2);
    o2=e2+1;
  }
  res[x]=(e1*e2+o2*o1);
  x++,t--;
}
for (int i = 0; i < x; i++) {
  printf("%d\n",res[i] );
}
}
