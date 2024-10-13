// Program to reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}