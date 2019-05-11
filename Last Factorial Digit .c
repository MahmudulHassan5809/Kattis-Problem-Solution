#include <stdio.h>

int main()
{
    int i,j,k=0,t,last,arr[10],res[10],factorial = 1;
    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%d",&arr[i]);
        for(j=1; j<=arr[i]; ++j){
            factorial *= j;
        }
        last = factorial % 10;

        factorial = 1;
        res[k] = last;
        k++;

    }

    for(i=0; i<k ; i++){
        printf("%d\n",res[i]);
    }


    return 0;

}
