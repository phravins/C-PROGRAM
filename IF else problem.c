#include <stdio.h>
int main () {
int temperature = 28;
if (temperature >= 35) {
    printf("VERY HOT");
}else if (temperature >= 25){
printf("HOT");
}else if (temperature >= 15){
printf("WARM");
} else {
    printf("COLD");
}
return 0;
}
