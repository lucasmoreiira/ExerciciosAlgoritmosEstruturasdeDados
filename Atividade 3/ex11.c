//Lucas Moreira da Silva
#include <stdio.h>

int menorNumero(int num1, int num2, int num3);

int main()
{
    int num1=0;
    int num2=0;
    int num3=0;
    
    printf("Digite tres numeros:");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int menor = menorNumero(num1, num2,num3);
  
    printf("Menor:%d",menor);
}

int menorNumero(int num1, int num2, int num3){
    if(num1 < num2 && num1 < num3){
        return num1;
    }else if(num2 < num1 && num2 < num3){
        return num2;
    }else{
        return num3;
    }

}
