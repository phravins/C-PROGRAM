#include <stdio.h>

int main()
{
    int mynum;
    char mycharacter;
    
    printf("Enter a number and character: \n");
    scanf("%d%c",&mynum,&mycharacter);
    printf("Your number is : %d\n",mynum);
    printf("Your character is : %c\n",mycharacter);
    return 0;
}
