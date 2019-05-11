#include <stdio.h>

int main()
{
    int h,m;
    scanf("%d %d",&h,&m);
    if(m > 45){
        m = m - 45;
    }else if (m == 45){
        m = 0;
    }else if(m < 45){
        m = m + 15;
        if(h == 0){
            h = 23;
        }else{
            h = h - 1;
        }

    }

    printf("%d %d",h,m);
    return 0;

}
