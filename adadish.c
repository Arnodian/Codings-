#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
int main(void) {
	int b1=0,b2=0,n,a;
	scanf("%d",&n);
	int c[n];
	for ( int i=0 ;i<n ; i++ ) {
	    scanf("%d",&c[i]);
	}
	for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (c[i] > c[j])
                {
                    a =  c[i];
                    c[i] = c[j];
                    c[j] = a;
                }
            }
        }

    for (int i=0 ; i<n ; i++ ) {
        if(b1<b2) {
        b1+=c[i];
        }
        else {
        b2+=c[i];
        }
    }
    printf("%d %d %d",MAX(b1,b2) , b1 ,b2);
}
