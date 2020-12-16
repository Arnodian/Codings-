#include <bits/stdc++.h>
using namespace std;
int main() {
  short int t;
  cin>>t;
  while (t--) {
    short int n,k;
    cin>>n>>k;
    signed int v[1001];
    for (int i = 0; i < n; i++) {
      v[i]=i+1;
    }
    if (n%2==0) {
      for (int i = 0; i < n; i++) {
        if (v[i]%2==1) {
          v[i]=(-v[i]);
        }
      }
    }
    else if (n%2==1) {
      for (int i = 0; i < n; i++) {
        if (v[i]%2==0) {
          v[i]=(-v[i]);
        }
      }
    }
    int count=0;
    for (int i = 0; i < n; i++) {
      if (v[i]>0) {
        count++;
      }
    }
    if (k>count) {
      int diff=(k-count);
      for (int i = n; i>=0; --i) {
        if (diff>0 && v[i]<0) {
          v[i]= (-v[i]);
          diff--;
        }
      }
    }
    else if (count>k) {
      int diff=(count-k);
      for (int i = n; i>=0; --i) {
        if (diff>0 && v[i]>0) {
          v[i]= (-v[i]);
          diff--;
        }
      }
    }
    for (int i = 0; i < n; i++) {
      cout<<v[i]<<" ";
    }cout<<"\n";
  }
}
