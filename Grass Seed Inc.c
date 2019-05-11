#include <stdio.h>


int main() {
    double cost;
    scanf("%lf",&cost);

    int lawns;
    scanf("%d",&lawns);

    double totalArea;

    for(int i = 0; i < lawns; i++) {
        double l, w;
        scanf("%lf %lf",&l,&w);
        totalArea += l * w;
    }

    printf("%.7lf\n",totalArea * cost);
    return 0;
}
