#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, maior=0, menor=0,pos_maior=0, pos_menor=0;
    float vet[5];

    printf("digite 5 vet");
    printf("\n");
    
    for (a=0;a<5;a++)
    {
      printf("nota %d : ", a+1);
      scanf("%f", &vet[a]);
      
      if(a==0)
      {
          maior=vet[a];
          menor=vet[a];
      }
      
      if(vet[a] > maior)
      {
        maior=vet[a];
        pos_maior=a;
      }
      
      if(vet[a] < menor)
      {
          menor=vet[a];
          pos_menor=a;
      }
      
    }
    printf("\no maior valor é %d", maior);
    printf("\nna posição %d",pos_maior);
    printf("\ne o menor valor é %d", menor);
    printf("\nna posição %d",pos_menor);
    
    return 0;
}