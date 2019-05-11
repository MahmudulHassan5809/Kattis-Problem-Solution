#include <stdio.h>


int main() {
  int imax, max = 0,sum ,i,p;
  for (i = 0; i < 5; i++){
    sum = 0;
    for (int j = 0; j < 4; j++) {

      scanf("%d",&p);
      sum += p;
    }
    if (sum > max) {
      imax = i;
      max = sum;
    }
  }
  printf("%d",imax+1);
  printf(" ");
  printf("%d\n",max);

  return 0;
}
