/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main()
{
    int *v; //define v como um ponteiro para um ou mais números inteiros
    int tam, elem;
    printf("Quantos dados pretende inserir no vetor? \n");
    scanf("%d",&tam);
    v=malloc(tam*sizeof(int));// alocação dinamica do vetor v;
    printf("\nExibicao dos valores  \n");
    leitura(v,tam);
    printf("\nExibicao dos valores  \n");
    escrita(v,tam); 
    printf("\nQual elementos a ser buscado? \n");
    scanf("%d",&elem);
    if(pertence(elem, v, tam))
       printf("Elemento encontrado!");
   else    
       printf("Elemento não encontrado");
    
    return 0;
}
