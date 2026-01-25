#include <stdio.h>
#include <stdlib.h>
int main () {
    char sent[20];
    printf("Write a simple sentence: ");
    fgets(sent ,20, stdin);
    printf("Your simple sentence is: %s",sent);
    return 0;
}
