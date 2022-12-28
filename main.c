/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "library.h"


int main()
{
    B v;
    A TAM;
    printf("\nQuantos elementos armazenar?\n");
    scanf("%d",&TAM);
    v = malloc(TAM*sizeof(A));
    printf("lendo os valores do vetor!\n");
    leitura(v,TAM);
    printf("\nOrdenando o vetor");
    ordenacao(v,TAM);
    printf("\nexibindo os valores do vetor\n ");
    escrita(v,TAM);  
    free(v);
    return 0;
}
