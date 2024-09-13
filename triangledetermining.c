#include <stdio.h>
int main()
 {
    int side1 , side2 , side3;
    printf("enter the three sides of the tringle: ");
    scanf("%d%d%d" , &side1, &side2, &side3 );
    if (side1 == side2 && side2 ==side3)
     {
        printf("equilateral triangle\n");
    }
     else if (side1 == side2 || side2 ==side3 || side3 ==side1)
     {
        printf("isosceles triangle\n");
    }
     else
        {
        printf("scalene triangle\n");
    }
    return 0;
}