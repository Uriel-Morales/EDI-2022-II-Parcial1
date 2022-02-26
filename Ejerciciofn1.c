#include <stdio.h>

int NumPerfecto(int num);
int main() {
    int val;
    int validacion;
    printf("Ingrese el valor: \n");
    scanf("%d", &val);
    validacion = NumPerfecto(val);

    if (validacion==1)
        printf("El valor %d es un numero perfecto", val);
    else
        printf("El valor %d no es un numero perfecto", val);
   return 0;
    }

    int NumPerfecto(int num)
    {
        int valor=num;
        int i;
        int suma=0;
        int validacion;
        for (i=1; i<valor; i++)
        {
            if (valor%i==0)
            {
                suma+=i;
            }
        }
        if (suma==valor)
            validacion=1;
        else
            validacion=0;

        return validacion;
    }