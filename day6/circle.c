#include <stdio.h>
#include <math.h>
int main(){
  // sircle
  const double pi = 3.14;
  double radius;
  printf("enter radius: ");
  scanf("%lf", &radius);
  double circle = 2 * radius * pi;
  printf("it\'s %.2lf\n",circle);
  // pithagor
  double A;
  printf("enter side A: ");
  scanf("%lf",&A);
  double B;
  printf("enter side B: ");
  scanf("%lf",&B);
  double C = sqrt(A*A + B*B);
  printf("it\'s %.2lf", C);
}