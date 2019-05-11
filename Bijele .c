#include <stdio.h>

int main()
{
   int a, b, c, d, e, f;
   scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
   printf("%d %d %d %d %d %d",dist(a,1),dist(b,1),dist(c,2),dist(d,2),dist(e,2),dist(f,8));

}

int dist(int a, int desired){
    return desired - a;
}
