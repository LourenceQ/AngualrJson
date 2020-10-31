#include <conio.h>
 
 
int main()
{
    int vet[10],i,n,menor,maior;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&vet[i]);
    }
 
    menor=maior=vet[0];
    for(i=1; i<n; i++)
    {
        if(menor>vet[i])
		menor=vet[i];   
		if(maior<vet[i])
		maior=vet[i];       
    }
     printf("menorimum of array is : %d",menor);
          printf("\nmaiorimum of array is : %d",maior);
 
 
    return 0;
}

///////////////////////////////

#include <conio.h>
#include <stdio.h>
 
 
int main()
{
    int vet[10],i,n,menor,maior;
   
    
 
    printf("Enter elements in array : ");
    for(i=1; i<=10; i++)
    {
        scanf("%d",&vet[i]);
    }
 
    menor=menor=vet[0];
    maior=0;
    
    for(i=1; i<=10; i++)
    {
        if(menor>vet[i])
		menor=vet[i];   
		if(maior<vet[i])
		maior=vet[i];       
    }
     printf("menorimum of array is : %d",menor);
          printf("\nmaiorimum of array is : %d",maior);
 
 
    return 0;
}