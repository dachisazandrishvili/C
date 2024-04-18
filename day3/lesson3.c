#include <stdio.h>

int main(){
  const float pi = 3.14;
  // const makes the value of a variable constant so it can not be changed
  printf("pi equals to %.2f\n",pi);

  int x = 5;
  int y = 2;
  int z = x - y;
  // if we whant to make devision of a integers we shuld make it float
  float m = x / (float) y;
  printf("%d\n",z);
  printf("%.2f\n",m);

  int d = 5 % 2;
  printf("%d",d);

  return 0;
}
