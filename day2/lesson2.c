#include <stdio.h>

int main(){
  int x; // declaration
  x = 5; // initialization

  int y = 10; //declaration + initializaton
  // int stores integer es a value of an variable

  float k; // declaration
  k = 5.2; // initialization

  // float stores float as a value of an variable

  char letter; // declaration 
  letter = 'd'; // initalization

  // char stores an single character of a string as a value of en variable

  char letters[] = "dachi";
  // it will create array of a characters as a value of a variable
  

  printf("hello %s\n",letters);
  // %s is placeholder for string 

  printf("my grade is %c\n",letter);
  // %c is a placeholder for a single char
  printf("my broather is %d\n years old",y);
  // %d is a placeholder for integer
  printf("your gpa is %f\n",k);
  // %f is a placeholder for float

  short int num = 10; // short int contanes numbaer from (-32768 to 32768)
  // if we give to this integer the value mot thean a limit it will give us the smallest(-32768)
  unsigned short int nn = 32800; // unsigned short int stores the value of int from(0 t0 65536)

  printf("price is $ %.2f", k);


 


  return 0;

}