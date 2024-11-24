//Lucas Moreira da Silva
#include <stdio.h>
#include<math.h>

int somatorio(int n);

int main(){

    int n;

    printf("Digite o valor: ");
    scanf("%d", &n);


    int resultado = somatorio(n);

    printf("RESULTADO SOMATORIO = %d", resultado);
    return 0;
}

int somatorio(int n){
    int soma= 0;
    for(int i=1;i<= n;i++){
        soma += (5*i*i)+2*i+8;
    }
    return soma;
}

