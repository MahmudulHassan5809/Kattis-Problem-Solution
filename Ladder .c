#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main()
{
    int h,v,length;
    double rad;
    scanf("%d %d",&h,&v);

    rad = (M_PI / 180) * v;


    length = ceil((h/sin(rad)));

    printf("%d",length);


    return 0;

}
