#include <stdio.h>
int main()
{
    int dias, horas, minutos, segundos;
    printf("Ingresa la cantidad de dias: \n");
    scanf("%d", &dias);
    printf("Ingresa la cantidad de horas: \n");
    scanf("%d", &horas);
    printf("Ingresa la cantidad de minutos: \n");
    scanf("%d", &minutos);
    segundos=((minutos*60)+(horas*3600)+(dias*86400));
    printf("%d dias, %d horas, %d minutos son: %d segundos", dias, horas, minutos, segundos);
}