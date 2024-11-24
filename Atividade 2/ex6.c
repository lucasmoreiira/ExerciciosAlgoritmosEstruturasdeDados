// Lucas Moreira da Silva

#include <stdio.h>

int maiorNumero(int num1, int num2);

int main()
{

    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("MAIOR = %d", maiorNumero(num1, num2));

    return 0;
}

int maiorNumero(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}