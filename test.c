#include <stdio.h>

int main()
{
  char prompt[] = "What is your name? ";
  int i = 0;
  
  while( i < 20){
    putchar(prompt[i]);
    i++;
  }

  int c = getchar();

  printf("hello, ");
  while(c != EOF){
    putchar(c);
    c = getchar();
  }
}
