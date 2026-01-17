#include <stdio.h>
int main() {
    int balance = 500;
    long int bank_balance = 10000000;
    char million[] = "million";
    char total[] = "millions";
    printf("Balance in millions: %d\t%s\n",balance,million);
    printf("Total Bank Balance: %ld\t%s",bank_balance,total);
    return 0;
}
