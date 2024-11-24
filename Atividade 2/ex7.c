// Lucas Moreira da Silva

#include <stdio.h>

int somaVetor(int v[3]);

int main(){
    
    int v[3];

    printf("Digite 3 valores: ");
    for(int i=0;i < 3;i++){
        scanf("%d", &v[i]);
    }

    int resultado = somaVetor(v);

    printf("SOMA DO VETOR = %d", resultado);
    return 0;
}

int somaVetor(int v[3]){
    int soma=0;
    for(int i=0;i <3;i++){
        soma+=v[i];
    }
    return soma;
}