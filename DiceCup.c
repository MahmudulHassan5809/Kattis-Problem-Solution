#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,n,m,max=0;
    int a[42];
    for(i=0;i<=41;i++)
        a[i]=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            a[i+j]++;
        }
    }
    for(i=2;i<=n+m;i++){
        if(a[i]>max)
            max=a[i];
    }
    for(i=2;i<=n+m;i++)
    {
        if(a[i]==max)
            printf("%d\n",i);
    }

}
