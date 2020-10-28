/******************************************************************************
3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float A[10];
    float B[10];
    int i;
    int j;
    
    
    for(i=1; i<=10; i++)
    {
        printf("Informe o %dº número: ",i);
        scanf("%f",&A[i]);
        
        B[i] = A[i] * A[i];
    }
    printf("Vetor A\n");
    for(i=1; i<=10; i++)
    {
        printf("Posição %d = %.2f\n",i,A[i]);
    }
    
    printf("\n");
    
    printf("Vetor B\n");
    for(i=1; i<=10; i++)
    {
        printf("Posição %d = %.2f\n",i,B[i]);
    }
    
    
    return 0;
}
