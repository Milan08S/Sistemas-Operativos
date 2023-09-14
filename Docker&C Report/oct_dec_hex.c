#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("Octal: %o,  Decimal: %d,  Hexadecimal: %x\n", i, i, i);
    }
    return 0;
}