#include <ctype.h>
#include <stdio.h>

int is_uppercase(char c) {
    return isupper(c);
}

int main() {
    char c;
    printf("Ingrese un caracter: ");
    scanf(" %c", &c);
    if (is_uppercase(c)) {
        printf("%c es un caracter mayuscula.\n", c);
    } else {
        printf("%c no es un caracter mayuscula.\n", c);
    }
    return 0;
}
