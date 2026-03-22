#include <stdio.h>
#include <stdlib.h>

int main () {
int num = 45;
int* ptr = &num;

printf("%d\n",num);
printf("%p\n",&num);
printf("%d\n",ptr);
printf("%d", *ptr);
return 0;
}
