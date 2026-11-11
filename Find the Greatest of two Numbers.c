#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("A is greatest");
    else if(b > a)
        printf("B is greatest");
    else
        printf("Both are equal");

    return 0;
}
