#include <conio.h>
#include <stdio.h>
 
 
int main()
{
    int vet[10],i,n,menor,maior;
 
    printf("Digite 10 números.\n");
    for(i=1; i<=10; i++)
    {
        scanf("%d",&vet[i]);
    }
 
    vet[0]=menor;
    maior=0;
    
    for(i=1; i<=10; i++)
    {
        if(menor>vet[i])
        {
		    menor=vet[i];   
        }
		if(maior<vet[i])
		{
		    maior=vet[i];
		}    
    }
     printf("menor: %d",menor);
          printf("\nmaior: %d",maior);
 
 
    return 0;
}