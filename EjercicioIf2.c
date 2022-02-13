#include <stdio.h>

int main()
{
    float kilos, precio, descuento, total;
    printf("Ingrese la cantidad de kilos: \n");
    scanf("%f", &kilos);
    if (kilos>=0 && kilos <= 2)
    {
    printf("Ingrese el peso por kilo: \n");
    scanf("%f", &precio);
    total= kilos * precio;
    printf("El total es: %.2f", total);
    }
    else if (kilos>=2.1 && kilos <=5)
    {
        printf("Ingrese el peso por kilo: \n");
        scanf("%f", &precio);
        total= kilos * precio;
        descuento= total * 0.10;
        total = total-descuento;
        printf("El total es: %.2f", total);
    }
    else if (kilos>=5.1 && kilos <=10)
    {
        printf("Ingrese el peso por kilo: \n");
        scanf("%f", &precio);
        total= kilos * precio;
        descuento= total * 0.15;
        total = total-descuento;
        printf("El total es: %.2f", total);
    }
    else
    {
        printf("Ingrese el peso por kilo: \n");
        scanf("%f", &precio);
        total= kilos * precio;
        descuento= total * 0.20;
        total = total-descuento;
        printf("El total es: %.2f", total);
    }
}