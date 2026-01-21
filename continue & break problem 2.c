#include <Stdio.h>
int main (){\
int i;
for (i = 1; i <=20; i++){
    if(i>15){
        break;
    }
    if (i % 2 ==0){
        continue;
    }
    printf("Item number %d\n",i);
}
return 0;
}
