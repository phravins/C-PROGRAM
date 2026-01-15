#include <stdio.h>
int main () {
  char percentage = '%';
  int maxscore = 500;
  int userscore = 436;
  float sum = (float) maxscore / userscore;
  printf("The user precentage is : %f\t%c", sum, percentage);
  return 0;
}
