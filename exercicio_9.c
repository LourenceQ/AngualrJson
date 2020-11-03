#include <stdio.h>

int main()
{
    int vet[6], i=1, cont=0, n;
    
    
    printf("Você precisa digitar 6 valores pares \n");
    
    // VARIAVEL QUE ARMAZENA A QUANTIDADE DE NUMEROS PARES 
    while(cont<6)
    {
        // LEITURA DE NÚMEROS ALEATÓRIOS
        scanf("%d",&n);
        
        // VERIFICA SE EXITE ALGUM NÚMERO PAR
        if(n%2 == 0)
        {
            // ARMAZENA NO VETOR O NÚMERO PAR
            vet[i] = n;
            
            // SE EXISTIR ALGUM NÚMERO PAR, A VARIAVEL 
            //QUE ARMAZENA A QUANTIDADE É INCREMENTADA
            cont = cont + 1;
            printf("Voce digitou o %dº numero par : %d ",i,n);
            
            // ALERTA AO USUÁRIO PARA SEGUIR INSERINDO NÚMEROS
            if(cont!=6)
            {
                printf("\nDigite o próximo.\n");
            }
            i++;
        }
        
        // ALERTA AO USUÁRIO QUE O NÚMERO Ñ E PAR
        else
        {
            printf("Esse número não é par. Digite outro!\n");
        }
        
        // SE A QUANTIDADE DE NÚMEROS PARES FOR SATISFEITA
        if(cont==6)
        {
            printf("\n");
            
            // IMPRIMI O VETOR
            for(i=1;i<=6;i++)
            {
                printf("%dº - %d\n",i,vet[i]);
            }
        }
    }
    return 0;
}