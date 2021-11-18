#include<stdio.h>
int main()
{
    int num1 = 10,num2 =5;

    int  temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Number 1 is : %d\n",num1);
    printf("Number 2 is : %d\n",num2);
    getch();

}
