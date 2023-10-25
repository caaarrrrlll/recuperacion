#include <stdio.h>
#include <math.h>



float calcularHipotenusa(float lado1, float lado2) {
    return sqrt(lado1 * lado1 + lado2 * lado2);
}


int main(void) {
    float lado1, lado2;
    
    do {    
        printf("\nIngrese el lado 1: ");
        scanf("%f", &lado1);
        printf("\nIngrese el lado 2: ");
        scanf("%f", &lado2);
    } while (lado1 < 0 || lado2 < 0);

    float hipotenusa = calcularHipotenusa(lado1, lado2);
    printf("La hipotenusa es: %.2f\n", hipotenusa);

    return 0;
}
