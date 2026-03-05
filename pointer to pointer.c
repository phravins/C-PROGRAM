#include <stdio.h>

int main() {
  int myNum = 5;
  int *ptr = &myNum;
  int **pptr = &ptr;

  **pptr = 20; // changes myNum

  printf("myNum = %d\n", myNum);
  return 0;
}
