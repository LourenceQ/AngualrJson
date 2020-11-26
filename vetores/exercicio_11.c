#include <stdio.h>

int main()
{
    int i, cont=0, soma;
    int vet[10];
    
    for(i=1;i<=10;i++){
        
        printf("Informe o %dº numero:",i);
        scanf("%d",&vet[i]);
    }    
        for(i=1;i<=10;i++){
        
            if(vet[i]<0){
                cont++;
            }
            if(vet[i] > 0){
                soma = soma + vet[i];
            
            }
        
        }
    
    printf("A quantidade de números abaixo de zero é: %d",cont);
    printf("\nA soma dos números positivos  é: %.d",soma);
}