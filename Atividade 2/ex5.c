// Lucas Moreira da Silva
#include <stdio.h>

int soma(int num1, int num2);

int main()
{

    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    int resultado = soma(num1, num2);

    printf("O resultado da soma e: %d", resultado);
    return 0;
}

int soma(int num1, int num2)
{
    return num1 + num2;
}
