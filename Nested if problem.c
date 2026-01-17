#include <stdio.h>
int main () {
int balance = 5000;
int amount = 2000;
if (balance > 0){
    if (amount >= balance){
        printf("Withdrawal successful");
    }else {
        printf("Insufficient balance");
    }
    }else{
        printf("Invalid account balance");
    }

        return 0;
}
