#include<stdio.h>
int main()
{
    int num1 , num2 , rem;
     printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    if(num1<num2)
    {
        num1 = num1+num2;
        num2 = num1-num2;
        num1 = num1-num2;

    }
    while(num2 != 0)
    {
        rem = num1 %num2;
        num1 = num2;
        num2 = rem;

    }
     printf("GCD is %d",num1);

}
