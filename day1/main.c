#include <stdio.h>

int main() {
  //   \n = new line
  printf("hi!\n");
  printf("hello!\n");
  //   \t = tab
  printf("1\t2\t3\t4\t\n");
  //    \" = "" 
  printf("\"hi\" how are you");
  // \b = backspace
  printf("he\bllo\n");
  // \e = escape character \e-ს შემდეგ დატერილი რამ ამოვარდება სტრინგიდან
  printf("he\ello\n");
  // \f მდე დაწერილი ყველაფერი ნაცვლდება სფეისით
  printf("he\fllo\n");
  // \რ მდე დაწერილი ყველაფერი იშლება
  printf("he\rllo\n");
  // \t = tab
  printf("he\tllo\n");
  // სადაც \v უწერია იმ ადგილას სტრინგში კეთდება ბრეიქი და ქვემოთ ჩამოაქ სტრინგის მეორე ნაწილი
  printf("hel\vlo\n");
  // \\ = \;
  printf("\\hel\\lo\n");
  return 0;
}
