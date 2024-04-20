#include<stdio.h>
#include<math.h>

int main(){
  double a, b, c;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  double x, y;
  x = -b / (2.0 * a);
  y = sqrt(b * b - a * c * 4.0) / (2.0 * a);

  printf("%f\n%f\n", x+y,x-y);
  return 0;
}
