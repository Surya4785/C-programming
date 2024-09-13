#include<stdio.h>
void main ()
{
    int a,b,x,n;
    float y;
    printf("enter the value of a,b and x");
    scanf("%d%d%d",&a,b,&x);
    printf("enter your choice from 1 to 4");
    switch(n)
{
    case 1: y=a*x%b;
    printf("the value v of y is %f",y);
    break;
    case 2: y=a*x*x+b*b;
    printf("the value of y is %f",y);
    break;
    case 3: y=a-b*x;
    printf("the value of y is %f",y);
    break;
    case 4: y=a+(float)x/b;
    printf("the value of y is %f",y);
    break;
    default:printf("invalid choice");
}

}