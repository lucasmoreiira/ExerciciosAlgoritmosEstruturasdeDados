//Lucas Moreira da Silva
#include <stdio.h>


void vetorInvertido(int vetor[]);

int main()
{

    int vetor[10];
    
    printf("Digite os numeros:");
    for(int i=0;i< 10;i++){
        scanf("%d", &vetor[i]);
    }

    vetorInvertido(vetor);
}

void vetorInvertido(int vetor[]){
    for(int i=9;i >= 0;i--){

        printf("%d ", vetor[i]);
    }
}
