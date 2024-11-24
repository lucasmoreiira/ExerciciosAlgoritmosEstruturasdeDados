//Lucas Moreira da Silva
#include <stdio.h>


void exibirImpares(int num);


int main(){
    
    int num=0;
    
    printf("DIgite um numero");
    scanf("%d", &num);
    
    exibirImpares(num);
}

void exibirImpares(int num){
    
    for(int i=1; i <= num; i++){
        if(i % 2 == 1){
            if(i % 7 == 0){
                continue;
            }else{
                printf("%d ", i);
            }
        }
        
    }
}
