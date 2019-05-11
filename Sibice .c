#include <stdio.h>
#include <math.h>


int main()
{
    int n,w,h,i,arr[50],res[50],count=0;

    double length;

    scanf("%d %d %d",&n,&w,&h);

    length =  sqrt((w*w)+(h*h));

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i] <= length){
            res[i] = 1;
            count++;
        }else{
          res[i] = 0;
           count++;
        }
    }


    for(i = 0 ; i<count ; i++){
        if(res[i] == 1){
            printf("DA\n");
        }else{
            printf("NE\n");
        }
    }


    return 0;

}
