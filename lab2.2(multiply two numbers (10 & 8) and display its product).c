//Write a program to multiply two numbers (10 & 8) and display its product.
#include <stdio.h>
int main(void)
{
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    product = a * b;
    printf("Product = %.2lf", product);

    return 0;
}
