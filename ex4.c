#include <stdio.h>
void cambia(int a, int *b, int *c);
void main()
{
    int a,b,c;
    printf("Ingresa el valor de a:\n");
    scanf("%d",&a);
    printf("Ingresa el valor de b:\n");
    scanf("%d",&b);
    printf("Ingresa el valor de c:\n");
    scanf("%d",&c);
    cambia(a, &b, &c);
    printf("a: %d  b: %d  c: %d", a,b,c);
}
void cambia(int a, int *b, int *c)
{
    if(a > *b)
        *b=*b*2;
    else if (a < *b)
        *c=*c-a;
    if(*c<0)
        *c*=-1;}