#include <stdio.h>
int main()
{
    float precio, descuento, total;
    printf("ingrese el precio del articulo: \n");
    scanf("%f", &precio);
    printf("ingrese el porcentaje de descuento: \n");
    scanf("%f", &descuento);
    printf("El precio es: %.2f\n", precio);
    printf("el porcentaje de descuento es: %.2f\n", descuento);
    total=precio-(precio*descuento/100);
    printf("Precio final: %.2f", total);
}