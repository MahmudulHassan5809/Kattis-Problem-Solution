#include <stdio.h>



int main() {
    int n,m;
    scanf("%d",&n);

    m = 2;

    while(n > 0) {
        m *= 2;
        m--;

        n--;
    }

    printf("%d",m * m );

    return 0;
}
