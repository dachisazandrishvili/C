#include <stdio.h>
// input
int main(){
  // before we make an input, we shuld declar a variable where we store user desition
  int age;
  // then we ar going to print a sentens for user to ask him for something
  printf("how old are you? ");
  // now we are making an input and storing the information of an input in variable age with &age
  scanf("%d",&age);
  // and now we are printing all of this
  printf("you are %d years old\n",age);

  char name[25];

  printf("how old are you? ");
  
  return 0;
}