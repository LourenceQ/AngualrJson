#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, repetido, b, i;
    int vet[10],vet_i[10];

    printf("digite 10 vet");
    printf("\n");
    
    for (a=0;a<10;a++)
    {
      printf("nota %d : ",a+1);
      scanf("%d", &vet[a]);
      
      for(a=1;a<=10;a++)
	  {
      	for(b=1;b<=10;b++)
		  {
      		if(vet[a]==vet[b])
      		{
      			        	  
      		}
		  }
	  }
      
	}
	printf("Eis o algarismos iguais:\n");
	for (a=0;a<10;a++)
    {
      printf("%d: ",vet[a]);     
	} 
	
    return 0;
}
