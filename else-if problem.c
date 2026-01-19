#include <stdio.h>
int main () {
int score = 68;
if (score >= 90 && score <= 100){
    printf("Outstanding");
}else if (score >= 75 && score <= 89){
    printf("Very Good");
} else if (score >= 50 && score <= 74) {
    printf("Good");
} else {
    printf("Needs Improvement");
}
    return 0;
}
