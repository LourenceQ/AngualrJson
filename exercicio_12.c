/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vet[5], i, media=0, maior, menor;
    
    for (i=1;i<=5;i++)
    {
        scanf("%d",&vet[i]);
    }
    
    menor = vet[0];
    
    for (i=1;i<=5;i++)
    {
        if(vet[i] < menor)
        {
            menor = vet[i];
        }
        
        if(vet[i] > maior)
        {
            maior = vet[i];
        }
        media += vet[i];
    }
    
    printf("O menor número é: %d",menor);
    printf("\nO maior número é: %d",maior);
    printf("\nA média é: %d",media/5);
    
    

    return 0;
}
