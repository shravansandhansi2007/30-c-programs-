#include <stdio.h>
int main()
{
    int a;
    int b;
    float area;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);
    area = 0.5 * a * b;

    printf("Area of triangle is %f", area);

    return 0;
}
