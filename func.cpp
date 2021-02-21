#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,max;
    cin>>n;
    max = n;
    int tmp = 3;
    while (tmp>0) {
      cin>>n;
      if (n>max) {
        max = n;
      }
      tmp--;
    }
    cout<<max;
    return 0;
}
