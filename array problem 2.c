#include <stdio.h>
int main () {
    int arr [] = {12, 45, 65, 67, 87,45};
    int i;
    int largest, smallest;
    largest = arr[0];
    smallest = arr[0];
    for (i = 0; i < 6; i++) {
        if (arr[i] > largest){
            largest = arr[i];
    }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
        printf("largest number: %d\n",largest);
        printf("smallest number: %d\n",smallest);

return 0;
}
