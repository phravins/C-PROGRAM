#include <stdio.h>
#include <stdlib.h>
int main()
{
  char name1[20];
  char name2[20];
  printf("Enter your first name : %s/n");
  fgets(name1,20,stdin);
  printf("Enter your surname : %s/n");
  fgets(name2,20,stdin);
  printf("Your full name is : %s%s",name1, name2);
  return 0;
}
