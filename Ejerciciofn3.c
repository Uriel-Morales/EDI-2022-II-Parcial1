#include <stdio.h>

const int N=20;
int Evaluarmenor();
int Evaluarmayor();

int main()
{
    int nummenor, nummayor;
    nummenor=Evaluarmenor();
    nummayor=Evaluarmayor();
    printf("El valor mayor es: %d\n", nummayor);
    printf("El valor menor es: %d", nummenor);

return 0;
}

int Evaluarmenor()
{
    int menor=1000;
    int num;
    for(int i=1; i<=N; i++)
    {
        printf ("Ingresa el valor %d: \n", i);
        scanf("%d", &num);
        if(num<menor)
            menor=num;
        printf("%d \n", num);
    }
    return menor;
}
int Evaluarmayor()
{
    int mayor=0;
    int num;
    for(int i=1; i<=N; i++)
    {
        printf ("Ingresa el valor %d: \n", i);
        scanf("%d", &num);
        if(num>mayor)
            mayor=num;
    }
    return mayor;
}