//Lucas Moreira da Silva
#include <stdio.h>


int calcularResultado(int soma, int primeiro, int ultimo);

int main()
{
   int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
   int soma=0;
   int primeiro=0;
   int ultimo=0;
   
   for(int i=0;i < 10;i++){
       soma+= vetor[i];
   }
   
   primeiro=vetor[0];
   ultimo=vetor[9];
   
   int resultado= calcularResultado(soma,primeiro,ultimo);
   
   printf("Resultado:%d", resultado);
   
    return 0;
}


int calcularResultado(int soma, int primeiro, int ultimo){
    return soma+(primeiro*5)+(ultimo*2);
}

