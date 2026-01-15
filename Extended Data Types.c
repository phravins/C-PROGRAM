#include <stdio.h>
int main (){
int num1 = 12;
float num2 = 23.13565;
char num3 = 'G';
double num4 = 123214.34567543;
char num5[] = "HELLO PHRAVINS";
short int num6 = -3000;
long int num7 = 1234567890;
unsigned int num8 = 34;
long long int num9 = 9223372036854775807;
unsigned long long int num10 = 8446744073709551615;
long double num11 = 3.141592653589793238L;
printf("%d\n",num1);
printf("%f\n",num2);
printf("%c\n",num3);
printf("%lf\n",num4);
printf("%s\n",num5);
printf("%hd\n",num6);
printf("%ld\n",num7);
printf("%u\n",num8);
printf("%lld\n",num9);
printf("%llu\n",num10);
printf("%.18Lf\n",num11);
return 0;
}
