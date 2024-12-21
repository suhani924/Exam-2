#include<stdio.h>

int main() 
{
    float l, h, area;
    printf("Enter the length of the base of the triangle: ");
    scanf("%f", &l);
    printf("Enter the height of the triangle: ");
    scanf("%f", &h);
    area = (l * h) / 2;
    printf("The area of the triangle is: %.2f\n", area);

    return 0;

}

