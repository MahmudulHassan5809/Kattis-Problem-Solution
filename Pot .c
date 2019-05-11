#include <stdio.h>
#include <math.h>

int main() {
    int n,i,sum = 0,arr[10],last,actualnum;
    scanf("%d",&n);

    for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
       last = arr[i] % 10;
       actualnum = arr[i] / 10;
       sum += pow(actualnum, last);
    }

    printf("%d",sum);

    return  0;
}
