/******************************************************************************
6. Fac¸a um programa que receba do usuario um vetor com 10 posic¸ ´ oes. Em seguida dever ˜ a´
ser impresso o maior e o menor elemento do vetor.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int vet[5], i, maior, menor;
    
    for(i=1;i<=5;i++)
    {
        printf("Inserir a %dª posiçao: ",i);
        scanf("%d",&vet[i]);
    }
        
    
        
    for(i=1;i<=5;i++)
    {
        if(vet[i] < menor)
        {
           menor = vet[i];
        }
        if(vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    printf("O menor numero é: %d",menor);
    printf("\n");
    printf("O maior número é: %d",maior);

    return 0;
}
