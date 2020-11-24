
# include <stdio.h>
#include <ctype.h>

int putval(char arr[10]) ;

int main() {
  char word[10]="0";
  printf("Enter the Roman number :\n" );
  scanf("%s\n", word);
  for (int i = 0; i < 11; i++) {
    word[i]= toupper(word[i]);
    printf("%c\n", word[i] );
  }
  putval(word);

return 0;
}
int putval(char arr[10]) {
  int val[11];
  for (int j = 0; j < 11; j++) {
    switch (arr[j]) {
      case 'I': val[j]=1;
      break;
      case 'V': val[j]=5;
      break;
      case 'X': val[j]=10;
      break;
      case 'L': val[j]=50;
      break;
      case 'C': val[j]=100;
      break;
      case 'D': val[j]=500;
      break;
      case 'M': val[j]=1000;
      break;
      default : val[j]=0;
      break;
    }
    printf("%d\n",val[j] );
  }
  int max=0,pos;
  for (int k = 0; k < 11; k++) {
    if (val[k]>max) {
      max=val[k];
      pos=k;
    }
  }

    if (pos==0 || pos==1) {
      printf("Your Roman number is valid\n" );
    }
    else
    printf("Your number is invalid\n" );

  int sum;
  if (pos==0) {
    for (int l = 0; l < 11; l++) {
      sum+=arr[l];
    }
  }
    else if(pos==1) {
      sum=arr[1]-arr[0];
    }

  return 0;
}
