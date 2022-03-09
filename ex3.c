#include <stdio.h>
int n;
int m;
void leermatriz(int matriz[m][n])
{
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<m;c++)
        {
            printf("matriz[%d][%d]", r, c);
            scanf("%d",&matriz[r][c]);
        }
    }
}

void sumavecinos(int matriz[n][m], int resultado[n][m])
{
    for(int r=0;r<n;r++)
    {
        for(int c=0; c<m;c++)
        {
            resultado[r][c]=matriz[r][c];
            if(r > 0)
                resultado+=matriz[r-1][c];
            if(r< n-1)
                resultado+=matriz[r+1][c];
            if(c>0)
                resultado+=matriz[r][c-1];
            if(c<m-1)
                resultado+=matriz[r][c+1];
        }
    }
}