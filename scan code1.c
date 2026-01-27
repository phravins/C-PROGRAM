#include <stdio.h>
#include <Stdlib.h>
int main () {
    char letter[30];
    printf("Enter your company name: ");
    fgets(letter,30,stdin);
    printf("The company name: %s",letter);
    return 0;
}
