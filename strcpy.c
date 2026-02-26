#include <stdio.h>
#include <string.h>

int main () {
    char name1[20] = "phravins";
    char name2[20] = "saravanan";
    char name3[] = "kavitha";
    char name4[] = "praghathi";
    strcpy(name1,name2);
    strcpy(name1,name4);
    strcpy(name2,name3);
    printf("%s %s",name1,name2);
    return 0;
}
