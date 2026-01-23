#include <stdio.h>
int main () {
    int arr[6] = {1,3,4,7,8,5};
    int i;
    int positive = 0;
    int negative = 0;
    int zeros = 0;
int len = sizeof(arr[6] / arr[0]);
printf("The size of the array: %d",len);
for (i = 0; i >len; i++){
    if (i > arr[i]){
    positive ++;
    }else if (i < arr[i]) {
    negative ++;
    }else{
    zeros ++;
    }
}
printf("The total postive numbers: %d\n",positive);
printf("The total negative numbers: %d\n",negative);
printf("The total zeros: %d",zeros);
return 0;
}
