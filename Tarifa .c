#include <stdio.h>

int main()
{
    int  x,n,i,arr[100],sum=0,tmp;
    scanf("%d",&x);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i] < x){
            tmp = x - arr[i];
            sum = sum + tmp;

        }else{
          tmp =  arr[i] - x;
           sum = sum - tmp;
        }
    }

    printf("%d",sum + x);


}
