#include <stdio.h>
int main () {
int balance = 3000;
int withdrawAmount = 2000;
int pinEntered = 1234;
if (pinEntered == 1234){
    if (withdrawAmount <= balance) {
        printf("Withdrawl successful");
    } else {
    printf("Insufficient balance");
    }
    } else {
        printf("Invalid PIN");
    }
    return 0;
}
