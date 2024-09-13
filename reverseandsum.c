#include<stdio.h>
int main()
{
    int n,digit,rev = 0;
    printf("enter the number to be reversed");
    scanf("%d",&n);
    digit=n%10;
    rev = rev + digit;
    n=n/10;
    digit = n%10;
    rev = rev + digit;
    n=n/10;
    rev = rev + n;
    printf("the reversed number is %d",rev);
    return 0;
}