#include<stdio.h>
int main(){

  int myAge=23;
  int votAge=18;
  switch (myAge>=votAge)
  {
  case 12:
    printf("you are not allowed to vote");
    break;
    case 14:
    printf("wait in next vote");
    break;
  
  default:
  printf("see you on campaign only");
    break;
  }
}