#include <stdio.h>
#include "library.h"
void leitura(B v, A tam)
{
    for(int i=0;i<tam;i++)
        scanf("%d",&v->elementos[i]);
}

void ordenacao(B v, A tam)
{
    A aux;
    for(int i=0;i<tam-1;i++)
        for(int j=i+1;j<tam;j++)
            if(v->elementos[i]>v->elementos[j])
            {
              aux=v->elementos[i];
              v->elementos[i]=v->elementos[j];
              v->elementos[j]=aux;
            }
}


void escrita(B v, A tam)
{
    for(int i=0;i<tam;i++)
        printf("%d ",v->elementos[i]);
}