#include <stdio.h>
#include <string.h>

int main () {
    char name[1000];
    int length = 0,i = 0;
    printf("%s Enter a Word : ",&name);
    scanf("%s",name);
    length = strlen(name);
    for (i = length - 1; i >=0; i--){
    printf("%c",name[i]);
    }
    return 0;
}
