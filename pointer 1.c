#include <stdio.h>
#include <stdlib.h>

int main() {
    int myage = 30;
    int* ptr = &myage;
    printf("%d\n",myage);
    printf("The address of the myage is %p",&myage);
    return 0;
}
