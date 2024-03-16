#include <stdio.h>
int main() {
 float num1, num2;
 float mult;
 printf("Enter two floating-point numbers: ");
 scanf("%f %f", &num1, &num2);
 mult = num1 * num2;
 printf("Product: %.2f\n", mult);
 return 0;
}

