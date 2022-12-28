/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
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
    printf("lendo os valores do vetor ");
    for(int i=0;i<10;i++)
        scanf("%d",&v.elementos[i]);
    printf("exibindo os valores do vetor ");
    for(int i=0;i<10;i++)
        printf("%d ",v.elementos[i]);   

    return 0;
}


