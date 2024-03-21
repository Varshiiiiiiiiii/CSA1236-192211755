#include <stdio.h>

int main() {
    int decimalNumber = 2810;
    int i = 1, j, temp;
    char hexaNumber[100];

    // Using modulus division operator
    while (decimalNumber != 0) {
        temp = decimalNumber % 16;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexaNumber[i++] = temp;
        decimalNumber = decimalNumber / 16;
    }

    printf("Hexadecimal value is: ");
    for (j = i - 1; j > 0; j--)
        printf("%c", hexaNumber[j]);

    return 0;
}
