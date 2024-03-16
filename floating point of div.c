#include <stdio.h>
int main() {
 float num1, num2;
 float div;
 printf("Enter two floating-point numbers: ");
 scanf("%f %f", &num1, &num2);
 div = num1 / num2;
 printf("Quotient: %.2f\n", div);
 return 0;
}
