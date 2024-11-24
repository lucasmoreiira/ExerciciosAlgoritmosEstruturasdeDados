//Lucas Moreira da Silva
#include <stdio.h>

void maiorNumero(int num1, int num2);

int main()
{
    int num1=0;
    int num2=0;
    
    printf("Digite dois numeros:");
    scanf("%d %d", &num1, &num2);
    
    maiorNumero(num1, num2);
  
}

void maiorNumero(int num1, int num2){
    if(num1 == num2){
        printf("Os numeros sao iguais.");
    }else if(num1 > num2){
        printf("%d e o maior", num1);
    }else{
        printf("%d e o maior", num2);
    }
}

