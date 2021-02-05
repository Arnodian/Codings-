#include <stdio.h>
int main() {
  int t;
  scanf("%d",&t );
  while (t!=0) {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z );
    if (x+y==z) {
      printf("Yes\n");
    }
    else if (x+z==y) {
        printf("Yes\n");
      }
    else if (y+z==x) {
        printf("Yes\n");
      }
    else
    printf("No\n");

    t--;
  }
}
