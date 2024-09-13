#include<stdio.h>
int main()
{
    int a[20],n,i,j,temp;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for (i=0;i<n;i++)
    {
        printf("element %d=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
    for(j=0;j<=n-1-i;j++)
    {
    if(a[j]>a[j+1])
    {
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
    }
   }
  }
    printf("the array elements after sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}