//Lucas Moreira Da Silva
#include <stdio.h>

float calcularMedia(float n1, float n2, float n3, float n4);

int main()
{
    float n1,n2,n3,n4;
    float media=0;
    
    printf("Digite as notas:");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media= calcularMedia(n1,n2,n3,n4);
    
    printf("Media:%.2f", media);
    
    if(media >=7){
        printf("Aprovado");
    }else{
        printf("\nReprovado");
    }

    return 0;
}

float calcularMedia(float n1, float n2, float n3, float n4){
    return (n1+n2+n3+n4)/4;
    
}
