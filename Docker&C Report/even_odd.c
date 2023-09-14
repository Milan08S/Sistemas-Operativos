#include <stdio.h>

int even_odd(int numero) {
    if (numero % 2 == 0) {
        return 0; // even
    } else {
        return 1; // odd
    }
}

int main() {
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    int ans = even_odd(numero);
    if (ans == 0) {
        printf("%d es par.\n", numero);
    } else {
        printf("%d es impar.\n", numero);
    }
    return 0;
}