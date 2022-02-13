#include <stdio.h>

int main()
{
    float hora;
    printf("formato de 24 horas \n");
    printf("Ingresa la hora actual como la forma - 00.00: \n");
    scanf("%f", &hora);
    if (hora>=00.00 && hora<=11.59)
    {
        printf("Buenos dias");
    }
    else if (hora>=12.00 && hora<=17.50)
    {
        printf("Buenas tardes");
    }
    else if (hora>=18.00 && hora<=23.59)
    {
        printf("Buenas noches");
    }
    else
    {
        printf("Hora no valida");
    }

    return 0;
}