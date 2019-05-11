#include <stdio.h>
#include <string.h>

int main()
{
    int m,n,i,j=0,count=0,k,l=0;
    int res[100];
    char str[100][21];
    scanf("%d",&m);

    while(m > 0){
       scanf("%d",&n);
       while( n > 0){
            scanf("%s",str[j]);
            j++;
            n--;
        }
        count = 0;
        for(i=0;i<j;i++){
            for(k=i+1;k<j;k++){
                if(strcmp(str[i],str[k]) == 0){
                    count++;
                    break;
                }else{
                    continue;
                }
            }
        }
        res[l] = j - count;
        l++;
        j = 0;
        m--;
    }


   for(i=0;i<l;i++){
       printf("%d\n",res[i]);
   }

    return 0;
}
