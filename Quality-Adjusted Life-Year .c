#include <stdio.h>


int main() {
    int n;
    double l,r,ans = 0;
    scanf("%d",&n);

    for(int i = 0; i < n; i++) {
        scanf("%lf %lf",&l,&r);
        ans += l*r;
    }

    printf("%.3lf",ans);
    return  0;
}
