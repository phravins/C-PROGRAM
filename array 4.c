#include <Stdio.H>
int main (){
int arr[] = {1,2,3,44,5,6};
int i;
int length = sizeof(arr) / sizeof(arr[0]);
for (i = 0; i < length; i++){
    printf("The index %d: %d\n",i,arr[i]);
}
return 0;
}
