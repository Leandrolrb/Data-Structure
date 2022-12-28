/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef int A;
typedef struct vet{
    A elementos[10];
}B;
int main()
{
    B v;
    A aux;
    printf("lendo os valores do vetor ");
    for(int i=0;i<10;i++)
        scanf("%d",&v.elementos[i]);
    printf("\nOrdenando o vetor");
    for(int i=0;i<10-1;i++)
        for(int j=i+1;j<10;j++)
            if(v.elementos[i]>v.elementos[j])
            {
              aux=v.elementos[i];
              v.elementos[i]=v.elementos[j];
              v.elementos[j]=aux;
            }
    printf("\nexibindo os valores do vetor ");
    for(int i=0;i<10;i++)
        printf("%d ",v.elementos[i]);   

    return 0;
}


