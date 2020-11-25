/******************************************************************************

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vet[10], i, maior=0, menor=0, pos_maior, pos_menor;
    
    for(i=0;i<10;i++)
    {
        printf("%dº = ",i);
        scanf("%d",&vet[i]);
    }
    
    for(i=0;i<10;i++)
    {
        printf("%d ",vet[i]);
        if(maior < vet[i])
        {
           maior = vet[i];
           pos_maior = i;
        }
        if(menor > vet[i])
        {
           menor = vet[i];
           pos_menor = i;
        }
    }
    
    printf("\nO maior é: %d ",maior);
    printf("na posição: %d ",pos_maior);
    
    printf("\nO menor é: %d ",menor);
    printf("na posição: %d ",pos_menor);

    return 0;
}
