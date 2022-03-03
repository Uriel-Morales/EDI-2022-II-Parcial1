#include <stdio.h>
#include <string.h>
void pedirfraseletra(char *frase, char *c);
int main()
{
    char frase[100];
    char c;
    int cont = 0;
    pedirfraseletra(&frase, &c);
    for (int i = 0; i < strlen(frase) + 1; i++)
    {

        if(frase[i] == c){
            cont++;
        }
    }
    printf("La letra %c se repite %d veces en la oracion: %s",c, cont, frase);
}
void pedirfraseletra(char *frase, char *c)
{
    printf("Introduzca una frase: \n");
    fflush(stdin);
    gets(frase);
    printf("Introduzca letra a buscar: \n");
    scanf("%c", c);
}