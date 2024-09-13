#include<stdio.h>
int main()
{
    FILE *ptr1,*ptr2;
    char ch;
    int count=0;
    ptr1=fopen("a.txt","r");
    ptr2=fopen("b.txt","w");
    while((ch=fgetc(ptr1))!=EOF)
    {
        fputc(ch,ptr2);
        count++;
    }
    fclose(ptr1);
    fclose(ptr2);
    ptr1=fopen("b.txt","r");

    while((ch=fgetc(ptr1))!=EOF)
    {
        printf("%c",ch);
    }
}
