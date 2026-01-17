#include <stdio.h>
int main (){
int attendence = 80;
int totalmarks = 45;
int passmarks = 50;
if (attendence >= 75){
    if (totalmarks >= passmarks) {
        printf("passed the exam");
    } else {
    printf("Failed due to low marks");
    }
    } else {
    printf("Atrendence too low");
    }
    return 0;

}
