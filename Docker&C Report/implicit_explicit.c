#include <stdio.h>

int main() {
    int a;
    printf("Ingrese el numero entero: ");
    scanf("%d", &a);
    float b = a;
    printf("Implicito: %f\n", b);

    float c = (float)a;
    printf("Explicito: %f", c);

    return 0;
}
