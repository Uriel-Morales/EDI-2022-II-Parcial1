#include <stdio.h>
int main()
{
    int n;
    int val;
    int i;
    int suma=0;
    int sumaps=0;
    int sumatotal=0;
    int cont=0;
    printf("Introduzca la cantidad de numeros a ingresar:\n");
    scanf("%d",&n);
    int array[n];
    //Obtener los valores en el arreglo
    for(i = 0 ; i<n; i++)
    {
        printf("Escriba el %d valor:\n",i+1);
        scanf("%d",&val);
        array[i]=val;
        printf("El valor en la posicion %d es: %d \n",i ,array[i]);
    }
    //Obtener la suma de los valores pares del arreglo
    for(i = 0 ; i<n ; i++)
    {
        if (array[i] % 2 == 0)
        {
            suma+=array[i];
        }
    }
    printf("La suma es %d\n",suma);
    //obtener la suma de las posiciones pares del arreglo
    for(i = 0 ; i<n ; i++)
    {
        if (i!=0 && i % 2 == 0)
        {
            sumaps+=array[i];
        }
    }
    printf("La suma por posicion es: %d\n",sumaps);
    //suma total mientras no supere 100 la suma
    for(i = 0 ; i<n ; i++)
    {
        sumatotal+=array[i];
    if(sumatotal<100)
    {
        cont++;
        printf("La suma total fue: %d\n",sumatotal);
        printf("La cantidad de valores sumados fueron: %d\n", cont);
    }
    }
}