/******************************************************************************
4. Fac¸a um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb ˜ em dois va- ´
lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y .

*******************************************************************************/

#include <stdio.h>
#include <locale.h>
int main()
{
    int vet[8], i, x, y;
    
    printf("Digite 8 números inteiros:\n");
    for(i=1; i<=8; i++)
    {
        printf("Posição %d = ",i);
        scanf("%d",&vet[i]);
    }
    printf("\n");
    printf("Escolha duas posições entre 1 e 8\n");
    printf("Primeira posição: ");
    scanf("%d",&x);
    printf("Primeira posição: ");
    scanf("%d",&y);
    
    if(x>=0 && y <=8)
    {
        printf("A soma é %d",vet[x]+vet[y]);
    }
    else;
    printf("Deve ser um intervalo entre 1 e 8");

    return 0;
}
