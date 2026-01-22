#include <Stdio.h>
int main (){
int arr[] = {1.1,2.3,4.5,6.7};
int length = sizeof(arr) / sizeof(arr[1]);
printf("%d",length);
return 0;
}
