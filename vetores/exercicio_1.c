/******************************************************************************
1. Faça um programa que possua um vetor denominado A que armazene 6 numeros inteiros. 
O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posic¸ ´ oes ˜
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posic¸ ˜ ao o valor 100. ˜
(d) Mostre na tela cada valor do vetor A, um em cada linha.
*******************************************************************************/

#include <stdio.h>


int main()
{
    int A[6]={1, 0, 5, -2, -5, 7};
    int soma = 0;
    
    for(int i=0; i<=5; i++){
        printf("%d, ",A[i]);
        soma = A[0] + A[1] + A[5];
        A[3] = 100;
    }
    printf("\n");
    printf("A soma de A[%d] + A[%d] + A[%d] = %d, ",A[0],A[1],A[5],soma);
    printf("\n");
    for(int i=0; i<=5; i++){
        A[3] = 100;
        printf("%d, ",A[i]);
    }
    
    return 0;
}

