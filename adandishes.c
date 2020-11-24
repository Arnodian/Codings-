#include<stdio.h>
int thirdmin(int time[], int x);
int fourthmin(int time[], int x);
int main() {
  int N,sum=0,T,k=0;
  scanf("%d",&T );
  int ans[T];
  redo:
  scanf("%d",&N );
  if( N>=1 && N<=4) {
  int C[N];
  for (int i = 0; i < N; i++) {
    scanf("%d",&C[i] );
    if (C[i]>=1 && C[i]<=5) {
      continue;
    }
    else {
      break;
    }
  }
  switch (N) {
    case 1: ans[k]=C[0];
    break;
    case 2: if (C[0]>C[1]) {
      ans[k]=C[0];
    }
    else {
      ans[k]=C[1];
    }
    break;
    case 3: ans[k]=thirdmin(C,N);
    break;
    case 4: ans[k]=fourthmin(C,N);
    break;
  }
  k++;
  if (T!=1) {
    T--;
    goto redo;
  }
}
  for (int i = 0; i < k; i++) {
    printf("%d\n",ans[i] );
  }

}
int thirdmin(int time[], int x) {
  int max=time[0],index=0,sum=0;
    for (int i = 0; i < x; i++) {
      if (time[i]>max) {
        max=time[i];
        index=i;
      }
    }
    time[index]=0;
    for (int i = 0; i < x; i++) {
      sum+=time[i];
    }
    if (sum>max) {
      return sum;
    }
    else {
      return max;
    }
}
int fourthmin(int time[], int x) {
  int max=time[0],min=time[0],index=0,sum=0;
  for (int i = 0; i < x; i++) {
    if (time[i]>max) {
      max=time[i];
      index=i;
    }
  }
    for (int i = 0; i < x; i++) {
      if (time[i]<min) {
        min=time[i];
      }
    }
    time[index]=0;
    for (int i = 0; i < x; i++) {
      sum+=time[i];
    }
    if (sum>max) {
      return (max+min);
    }
    else {
      return max;
    }
}
