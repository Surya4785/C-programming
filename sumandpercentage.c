#include <stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,sum,per;
    printf("enter the marks of 5 subjects");
    scanf ("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    sum = m1+m2+m3+m4+m5;
    printf ("\n the total sum of marks of 5 subjects = %.2f",sum);
    per = sum/5;
    printf ("\n the percentage obtained =%.2f%%",per);
   return 0;
}
