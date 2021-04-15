#include<stdio.h>
int gcd(int n1,int n2)
{
    int rem;
    if (n2 == 0)
        return n1;
    else
        return gcd(n2,n1%n2);
}
int main()
{
    int num1,num2 , GCD;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    GCD = gcd(num1,num2);
    printf("GCD of %d and %d is %d",num1,num2,GCD);

}
