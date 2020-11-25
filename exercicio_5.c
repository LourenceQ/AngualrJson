/******************************************************************************
5. Leia um vetor de 10 posicões. Contar e escrever quantos valores pares ele possui.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int vet[10], i, par=0, impar=0;
    
    for(i=1;i<=10;i++)
    {
        printf("inserir a %dª posição: ",i);
        scanf("%d",&vet[i]);
    }
    printf("\n");
    for(i=1;i<=10;i++)
    {
        if(vet[i]%2 == 0)
        {
            par++;
        }
    }
    
    printf("Existem %d valores pares nesse vetor",par);
    return 0;
}
