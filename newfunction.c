#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*p, max;
    printf("enter the number of values");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof (int));
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    max=*p;
    for(i=1;i<n;i++)
    {
        if(max<*(p+i))
        {
            max=*(p+i);
        }
    }
        printf("the maximum value is %d",max);
    }
