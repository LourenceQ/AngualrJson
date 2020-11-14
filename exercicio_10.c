#include <stdio.h>

int main()
{
    int vet[15], i;
    float media=0.0;
    
    for(i=1;i<=15;i++){
        
        printf("Informe a %dª nota:",i);
        scanf("%d",&vet[i]);
        media = media + vet[i];
    
    }
    
    printf("%.2f",media/15);
}