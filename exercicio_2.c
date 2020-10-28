/******************************************************************************
2. Crie um programa que le 6 valores inteiros e, em seguida, 
mostre na tela os valores lidos.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int Arr[6];
    int i;
    for(i=0; i<7; i++)
    {
        printf("Digite um número inteiro: \n");
        scanf("%d",&Arr[i]);
    }
    printf("Arr = [");
    for(i=0; i<7; i++)
    {
        printf("%d,",Arr[i]);
    }
     printf("]");
    return 0;
}
