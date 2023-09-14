#include <ctype.h>
#include <stdio.h>

int is_lowercase(char c) {
    return islower(c);
}

int main() {
    char c;
    printf("Ingrese un caracter: ");
    scanf(" %c", &c);
    if (is_lowercase(c)) {
        printf("%c es un caracter en minuscula.\n", c);
    } else {
        printf("%c no es un caracter en minuscula.\n", c);
    }
    return 0;
}