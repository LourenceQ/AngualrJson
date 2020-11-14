#include <stdio.h>

int main()
{
    int i, zero=0;
    float vet[10], soma;
    
    for(i=1;i<=10;i++){
        
        printf("Informe o %dº numero:",i);
        scanf("%f",&vet[i]);
        
        if(vet[i]==0){
            zero = zero + 1;
        }
        if(vet[i] >= 0){
            soma = soma + vet[i];
        }
    }
    
    printf("A quantidade de números zeros é: %d",zero);
    printf("\nA soma dos números positivos  é: %.2f",soma);
}