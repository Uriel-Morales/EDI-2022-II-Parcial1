#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;
    printf("Ingresa el valor del 1er lado del triangulo: \n");
    scanf("%f", &lado1);
    printf("Ingresa el valor del 2do lado del triangulo: \n");
    scanf("%f", &lado2);
    printf("Ingresa el valor del 3er lado del triangulo: \n");
    scanf("%f", &lado3);
    if (lado1 == lado2 && lado1 == lado3)
    {
        printf("Es un triangulo equilatero");
    }
    else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
    {
        printf("Es un triangulo escaleno");
    }
    else
    {
        printf("Es un triangulo isosceles");
    }
}