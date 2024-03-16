#include <stdio.h>
#include <stdlib.h>
void restoringDivision(int dividend, int divisor) {
 int quotient = 0;
 int remainder = 0;
 dividend = abs(dividend);
 divisor = abs(divisor);
 while (dividend >= divisor) {
 dividend -= divisor;
 quotient++;
 }
 remainder = dividend;
 printf("Restoring Division:\n");
 printf("Quotient: %d\n", quotient);
 printf("Remainder: %d\n", remainder);
}
void nonRestoringDivision(int dividend, int divisor) {
 int quotient = 0;
 int remainder = 0;
 dividend = abs(dividend);
 divisor = abs(divisor);
 while (dividend >= divisor) {
 dividend -= divisor;
 quotient++;
 }
 if (dividend < 0) {
 dividend += divisor;
 quotient--;
 }
 remainder = dividend;
 printf("\nNon-Restoring Division:\n");
 printf("Quotient: %d\n", quotient);
 printf("Remainder: %d\n", remainder);
}
int main() {
 int dividend, divisor;
 printf("Enter dividend: ");
 scanf("%d", &dividend);
 printf("Enter divisor: ");
 scanf("%d", &divisor);
 restoringDivision(dividend, divisor);
 nonRestoringDivision(dividend, divisor);
 return 0;
}
