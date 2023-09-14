#include <stdio.h>

int is_prime(int num) {
    int i;

    if (num <= 1) {
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int num;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("%d es un prime numero.\n", num);
    } else {
        printf("%d no es un prime numero.\n", num);
    }

    return 0;
}