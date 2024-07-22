#include <stdio.h>

int main(){
  char grade;
  printf("enter your grade: ");
  scanf("%c",&grade);
  switch (grade){
    case 'A':
      printf("perfect\n");
      break;
    case 'B':
      printf("it\'s good\n");
      break;
    case 'C':
      printf("it\'s normal\n");
      break;
    case 'D':
      printf("too low\n");
      break;
    case 'E':
      printf("terreble\n");
      break;
    case 'F':
      printf("you faild\n");
      break;
    default:
      printf("there is not that tipe of grade");

  }
  
}
