#include <stdio.h>
int main()
{
    int dias, horas, minutos, segundos;
    printf("Ingrese la cantidad de segundos: \n");
    scanf("%d", &segundos);
    printf ("los segundos totales son: %d \n", segundos);
    dias = segundos / 86400;
    segundos = segundos % 86400;
    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;
    printf("Los dias son: %d \n Las horas son: %d \n", dias, horas);
    printf("Los minutos son: %d \n Los segundos son: %d  \n", minutos, segundos);
}