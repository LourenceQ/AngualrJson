/******************************************************************************
6. Fac¸a um programa que receba do usuario um vetor com 10 posic¸ ´ oes. Em seguida dever ˜ a´
ser impresso o maior e o menor elemento do vetor.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int vet[10], i, maior, menor;
    
    for(i=1;i<=10;i++)
    {
        printf("Inserir a %dª posiçao: ",i);
        scanf("%d",&vet[i]);
        
        maior = 0;
        menor = 0;
        
        if(maior < vet[i])
        {
            vet[i] = maior;
        }
        if(menor > vet[i])
        {
            vet[i] = menor;
        }
    }
    printf("O menor numero é:",menor);
    printf("\n");
    printf("O maior número é:",maior);

    return 0;
}
