#include <stdio.h>

int main()
{
   int n,i,res[100],r,e, c;

   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d %d %d",&r,&e,&c);
       if((e-r) >  c){
           res[i] = 1;
       }else if((e - r) ==  c){
           res[i] = 2;
       }else{
          res[i] = 3;
       }
   }

   for(i=0;i<n;i++){
       if(res[i] == 1){
           printf("advertise\n");
       }else if(res[i] == 2){
           printf("does not matter\n");
       }else{
            printf("do not advertise\n");
       }
   }

   return 0;
}
