#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int numero;
    printf("ingrese un numero: ");
    scanf("%d", &numero);
    int ans = factorial(numero);
    printf("El factorial de %d es %d.\n", numero, ans);
    return 0;
}