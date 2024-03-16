#include <stdio.h>
int main() {
 float num1, num2;
 float sub;
 printf("Enter two floating-point numbers: ");
 scanf("%f %f", &num1, &num2);
 sub = num1 - num2;
 printf("Difference: %.2f\n", sub);
 return 0;
}
