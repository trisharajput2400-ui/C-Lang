#include<stdio.h>

int main() {
    int num1, num2, add, sub, mult, div;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    printf("this is the addition: %d\n", add);
    printf("this is the subtraction: %d\n", sub);
    printf("this is the multiplication: %d\n", mult);
    printf("this is the division: %d\n", div);

}