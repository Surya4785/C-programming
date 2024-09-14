#include <stdio.h>
int main()
 {
    int base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%d", &base);

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    area = (base * height) / 2;

    printf("The area of the triangle is: %d", area);
    return 0;
 }
