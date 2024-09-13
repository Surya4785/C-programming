#include <stdio.h>
int main ()
{
    int n,digit,rev = 0;
    printf ("enter the number : ");
    scanf ("%d", &n);
    digit = n%10;
    rev=rev*10+digit;
    n=n/10;
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;
    rev=rev*10+n;
    printf("the reversed number is %d ",rev);
return 0;
}