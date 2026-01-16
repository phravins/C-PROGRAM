#include <stdio.h>
int main () {
int age = 20;
int hasID = 0;
if (age > 18){
    if (hasID == 1){
        printf("Eligible to vote");
    } else {
    printf("Age is sufficient but ID is missing");
    }
    } else {
    printf("Not eligible to vote due to age");
    }
    return 0;

}
