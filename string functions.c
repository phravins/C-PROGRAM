#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  int length = sizeof(greetings) / sizeof(greetings[2]);
  printf("The size of the greetings is: %d\n",length);
  printf("%s", greetings);
 
  return 0;
}
