/******************************************************************************

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vet[10], i, maior, pos=0;
    
    for(i=1;i<=10;i++)
    {
        printf("%dº = ",i);
        scanf("%d",&vet[i]);
    }
    
    maior = vet[0];
    
    for(i=1;i<=10;i++)
    {
        printf("%d ",vet[i]);
        if(maior < vet[i])
        {
           maior = vet[i];
           pos = i;
        }
    }
    
    printf("O maior é: %d ",maior);
    printf("\nPosição: %d ",pos);

    return 0;
}
