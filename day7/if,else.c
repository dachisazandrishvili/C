#include <stdio.h>
int main(){
  int age;
  printf("enter your age: ");
  scanf("%d",&age);
  if(age >= 18){
    printf("you are logged in");
  } else if(age < 0){
    printf("you can\'t log in, uou are not born yer: ");
  } else if(age == 0){
    printf("you cant log in cuz you just born");
  }else{
    printf("you are too young to log in here ");
  }
}