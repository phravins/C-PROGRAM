#include<stdio.h>
int main () {
char letter[] = {'A','S','D','F','G'};
char length = sizeof(letter[1]) + sizeof(letter[4]);
printf("%zu",length);
return 0;
}
