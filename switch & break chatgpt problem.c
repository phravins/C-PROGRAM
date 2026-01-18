#include <stdio.h>
int main () {
int choice = 2;
int a = 10;
int b = 5;
switch (choice) {
case 1:
    printf("Addition: %d",a+b);
    break;
case 2:
    printf("Subtraction: %d", a-b);
    break;
case 3:
    printf("Multiplication: %d",a*b);
    break;
case 4:
    printf("Division: %d",a/b);
    break;
case 5:
    printf("Invalid cholice");
    break;
        }
    return 0;
}

