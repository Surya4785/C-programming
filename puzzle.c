#include<stdio.h>
int main ()
{
    int i,j,rows;
    printf("enter the number of rows:");
    scanf("%c",&rows);
    for (i=1; i<=5; ++i)
    {
        for (j=i; j<=2*i-1; ++j)
        {
         printf("#");   
        }
        printf("\n");
    }
    return 0;    
}
 