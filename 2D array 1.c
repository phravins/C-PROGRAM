#include <stdio.h>
int main () {
int arr[2][3] = {{1,2,3},{1,4,5}};
arr[1][2] = 10;
int i;
int j;
for (i = 0; i < 2; i++){
    for (j = 0; j < 3; j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
return 0;
}
