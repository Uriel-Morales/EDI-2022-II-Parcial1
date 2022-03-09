#include <stdio.h>
#include <ctype.h>
#define MAX 100

void conversion(char cadena[MAX]);
void main()
{
    char cadena[MAX];
    printf("Escribe la cadena:\n");
    scanf("%[^\n]",cadena);
    conversion(cadena);

    printf("La cadena es: %s",cadena);
}
void conversion(char cadena[MAX])
{
    for(int i=0; i<MAX && cadena[i]!='\0';i++)
    {
        if(cadena[i]=='a' || cadena[i]=='e'|| cadena[i]=='i'|| cadena[i]=='o'|| cadena[i]=='u')
        {
            cadena[i]= toupper(cadena[i]);
        }
        else if (cadena[i]=='A' || cadena[i]=='E'|| cadena[i]=='I'|| cadena[i]=='O'|| cadena[i]=='U')
        {
            cadena[i]=tolower(cadena[i]);
        }
    }
}