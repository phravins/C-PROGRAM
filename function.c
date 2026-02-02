#include <stdio.h>
#include <stdlib.h>
void num2();
int main (){
    printf("Before");
    num2();
    printf("After");
    return 0;
}
void num2(){
    int number = 2025;
    printf("The number : %d\n",number);
    printf("The next number : %d\n",number + 1);
    printf("The previous number : %d\n",number - 1);
}
