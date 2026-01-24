#include <stdio.H>
int main () {
    int arr[] = {3,-1,7,0,9};
    int i;
    int length = sizeof(arr) / sizeof(arr[0]);
for (i = 0; i < length; i++){
    if (arr[i] < 0){
        continue;
    }
    if (arr[i] == 0){
        break;
    }
    printf("%d\n",arr[i]);
}
return 0;
}
