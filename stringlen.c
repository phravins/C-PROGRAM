#include <stdio.h>
#include <string.h>
 
int main() {
  char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("Length is: %zu\n", strlen(alphabet));
  printf("Size is: %zu\n", sizeof(alphabet));
  return 0;
}
