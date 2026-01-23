#include <stdio.h>
int main (){
int arr[5] = {1,3,4,56,7};
int i;
int len = sizeof(arr) / sizeof(arr[0]);
printf("The length of the array: %d\n",len);
for (i = 0; i < len; i++){
    if (arr[i] < 0){
        (arr[i] = 0);
    }
}
printf("The updated array \n");
for (i = 0; i < len; i++){
    printf("%d ",arr[i]);
}
return 0;
}
