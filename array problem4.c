#include <stdio.h>
int main () {
    int arr[] = {1,2,3,4,5};
    int i;
    int count = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("The array size: %d\n",length);
    for (i = 0; i < length ; i ++){
        if(arr[i] > 20){
            count++;
        }
    }
    printf("Count of elements greater than 20: %d",count);
    return 0;
}
