#include <stdio.h>
int main (){
int matrix[1][5] = {{1,2,3,4,5},{1,3,4,5,6}};
matrix[1][3] = 9;
printf("%d",matrix[1][3]);
return 0;
}
