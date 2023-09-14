#include <stdio.h>

int main() {
    int anio;

    printf("Enter a anio: ");
    scanf("%d", &anio);

    if (anio % 4 == 0 && anio % 100 != 0) {
        printf("%d es un anio bisiesto.\n", anio);
    } else {
        printf("%d no es un anio bisiesto.\n", anio);
    }

    return 0;
}
