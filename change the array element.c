#include <stdio.h>
int main () {
int my[] = {1,2,3,4,5};
int i;
my[0] = 12;
my[1] = 24;
my[3] = 100;
for (i=0; i <5; i++){
    printf("%d ",my[i]);
}
return 0;
}
