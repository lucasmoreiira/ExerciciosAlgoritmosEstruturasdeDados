//Lucas Moreira da Silva
#include <stdio.h>

float calcularMedia(int num1, int num2, int num3);

int main(){

int num1=0;
int num2=0;
int num3=0;
float media=0;

printf("Digite tres numeros:");
scanf("%d %d %d", &num1, &num2, &num3);

media = calcularMedia(num1,num2,num3);

printf("Media:%.2f", media);
    
}


float calcularMedia(int num1, int num2, int num3){
    return (num1+num2+num3)/3;
}
