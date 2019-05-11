
#include <stdio.h>

int main() {
  double x;
  int ans;
  scanf("%lf",&x);
  ans = x * (5280. / 4854.) * 1000. + 0.5;
  printf("%d\n",ans);
  return 0;
}
