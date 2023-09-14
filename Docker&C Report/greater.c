#include <stdio.h>

int greater(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a, b, c;
    printf("Ingrese tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    int grande = greater(a, b, c);
    printf("El numero mas grande: %d\n", grande);
    return 0;
}