#include <stdio.h>
#include <cs50.h>

void print_row(int bricks);

int main(void)
{
  int height;
  do {
    height = get_int("Height: ");
  } while(height < 1);

  for (int i = 1; i <= height; i++) {
    print_row(i);
  }

}


// Given a number of bricks, print that number of bricks
void print_row(int bricks)
{
  for (int i = 0; i < bricks; i++) {
    printf("#");
  }
  printf("\n");
}
