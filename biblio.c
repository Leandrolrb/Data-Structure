#include <stdio.h>

void leitura(int *v, int tam)
{
    for(int i=0;i<tam;i++){
        printf("v[%d] = ",i+1);
        scanf("%d",&v[i]);
    } 
}

void escrita (int *v, int tam){
    for(int i=0;i<tam;i++){
        printf("v[%d] = %d",i+1, v[i]);
    }   
}

int pertence(int x, int *v, int tam)
{
    for(int i=0;i<tam;i++)
  {
      if(x==v[i])
          return 1;
  }
  return 0;
}          
