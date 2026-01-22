#include <Stdio.h>
int main () {
    int arr[] = {1,2,3,44,5};
    int i;
    int sum = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("The size of array: %d\n",length);
    for (i = length/2; i < length; i++){
        sum = sum + arr[i];
    }
    printf("The second half of the sum: %d",sum);
    return 0;

}
