#include <stdio.h>
void printBinary(int num, int width) {
 int i;
 for (i = width - 1; i >= 0; i--) {
 printf("%d", (num >> i) & 1);
 }
 printf("\n");
}
int getSign(int num) {
 if (num < 0) {
 return -1;
 } else if (num > 0) {
 return 1;
 } else {
 return 0;
 }
}
int boothsAlgorithm(int a, int b) {
 int signA = getSign(a);
 int signB = getSign(b);
 int product = 0;
 int multiplier = 0;
 int multiplicand = abs(a);
 int shift = 0;
 while (multiplicand != 0) {
 int bit = (multiplicand >> (sizeof(int) * 8 - 1)) & 1;
 int operation = 0;
 if (bit == 1) {
 operation = signB;
 } else if (multiplier == 1 && bit == 0) {
 operation = -signA;
 }
 product += operation * (1 << shift);
 multiplier = (multiplier << 1) | bit;
 multiplicand <<= 1;
 shift++;
 }
if (signA == -1 && signB == -1) {
 product = -product;
 } else if (signA == -1) {
 product = -product;
 } else if (signB == -1) {
 product = -product;
 }
 return product;
}
int main() {
 int a = -16;
 int b = 5;
 printf("a = ");
 printBinary(a, 32);
 printf("b = ");
 printBinary(b, 32);
 int product = boothsAlgorithm(a, b);
 printf("Product = %d\n", product);
 printf("Product in binary = ");
 printBinary(product, 32);
 return 0;
}
