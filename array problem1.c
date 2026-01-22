#include <Stdio.h>
int main () {
int number[] = {1,2,3,4,5,6,7,8};
int i;
for (i = 0; i < 8; i ++) {
    if(number[i] % 2 == 0){
        printf("Even number: %d\n",number[i]);
    } else {
    printf("odd number: %d\n",number[i]);
    }
}
return 0;
}
