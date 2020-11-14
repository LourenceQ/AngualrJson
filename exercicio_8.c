#include <stdio.h>

int main()
{
    int vet[6], i;
    for(i=1;i<=6;i++){
        printf("Informe o %dº numero:",i);
        scanf("%d",&vet[i]);
    }
    
    for(i=6;i>0;i--){
        printf("%d\n",vet[i]);
    }
    return 0;
}