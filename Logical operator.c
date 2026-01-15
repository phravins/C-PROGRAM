#include <stdio.h>
int main () {
    int login = 1;
    int isadmin = 0;
    printf("Regular user : %d\n", login && !isadmin);
    printf("Has access : %d\n", login || isadmin);
    printf("Not login : %d", !isadmin);
return 0;
}
