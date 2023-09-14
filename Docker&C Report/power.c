#include <stdio.h>

int power(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * power(base, exponente - 1);
    }
}

int main() {
    int base, exponente;
    printf("Ingrese un numero: ");
    scanf("%d", &base);
    printf("Ingrese un exponente: ");
    scanf("%d", &exponente);
    int ans = power(base, exponente);
    printf("El ansado de %d a la %d es %d.\n", base, exponente, ans);
    return 0;
}