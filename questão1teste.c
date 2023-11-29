#include <stdio.h>
#include <string.h>

int toDecimal(char roman[]) {
    int decimal = 0;
    int i = 0;

    while (roman[i]) {
        if (roman[i + 1] && (roman[i] == 'I' && (roman[ i + 1 ] == 'V' || roman[i+1] == 'X'))) {
            decimal -= 2;
            i += 2;
        } else if (roman[i + 1] && (roman[i] == 'X' && (roman [ i + 1] == 'L' || roman[i+1] == 'C'))) {
            decimal -= 20;
            i += 2;
        } else if (roman[i + 1] && (roman[i] == 'C' && (roman [i + 1] == 'D' || roman[i+1] == 'M'))) {
            decimal -= 200;
            i += 2;
        } else {
            switch (roman[i]) {
                case 'I': decimal += 1; break;
                case 'V': decimal += 5; break;
                case 'X': decimal += 10; break;
                case 'L': decimal += 50; break;
                case 'C': decimal += 100; break;
                case 'D': decimal += 500; break;
                case 'M': decimal += 1000; break;
            }
            i++;
        }
    }
    return decimal;
}

void printfbinario(int decimal) {
    char binario[32];
    int i = 0;
    while (decimal > 0) {
        binario[i++] = decimal % 2 + '0';
        decimal /= 2;
    }
    binario[i] = '\0';

    printf(" %s\n", binario);
}

void printfHex(int decimal) {
    char hex[16];
    int i = 0;
    while (decimal > 0) {
        hex[i++] = "0123456789ABCDEF"[decimal % 16];
        decimal /= 16;
    }
    hex[i] = '\0';

    printf(" %s\n", hex);
}

int main() {
    char roman[13];

    printf("Digite o numero roman: ");
    scanf("%s", roman);

    int decimal = toDecimal(roman);

    printf("O numero roman %s na base 2:", roman);
    printfbinario(decimal);

    printf("O numero roman %s na base 10: %d\n", roman, decimal);

    printf("O numero roman %s na base 16:", roman);
    printHex(decimal);

    return 0;
}