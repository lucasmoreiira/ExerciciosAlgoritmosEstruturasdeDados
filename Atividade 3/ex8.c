//Lucas Moreira da Silva
#include <stdio.h>

void exibirPares(int numero);

int main(){
    
    int numero =0;
    
    
    printf("DIgite um numero: ");
    scanf("%d", &numero);
    
    exibirPares(numero);
    
    return 0;

}

void exibirPares(int numero){
    for(int i=1;i<=numero;i++){
        if(i % 2 == 1){
            continue;
        }else{
            printf("%d ", i);
        }
    }
}
