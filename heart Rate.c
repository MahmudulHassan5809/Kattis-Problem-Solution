#include <stdio.h>


int main()
{
    int n,b;
    double p,q,abpm;
    scanf("%d", &n);
    while(n != 0)
    {
        scanf("%d %lf", &b, &p);
        q = 60.0 / p;
        abpm = q * b;
        n--;
        printf("%.4f %.4f %.4f\n", abpm - q, abpm, abpm + q);
    }

    return 0;
}
