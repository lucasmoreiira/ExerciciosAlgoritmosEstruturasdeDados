//Lucas Moreira da Silva
#include <stdio.h>

void mediaEscola(int numTurmas);
float mediaTurma(int numAlunos);


int main(){
    
    float numTurmas;

    printf("Digite a quantidade de turmas:");
    scanf("%f", &numTurmas);

    mediaEscola(numTurmas);
    
    return 0;
}

float mediaTurma(int numAlunos){
    int notas[numAlunos];
    float soma= 0.0;

    for(int i=0;i < numAlunos;i++){
        printf("Digite a nota do aluno %d :",i+1);
        scanf("%d", &notas[i]);
        soma+=notas[i];
    }
    float media = soma / numAlunos;
    return media;
}

void mediaEscola(int numTurmas){
    float somaMedias =0.0;
    
    for(int i=0;i < numTurmas;i++){
        int numAlunos;
        printf("Digite o numero de alunos da turma %d:",i+1);
        scanf("%d", &numAlunos);

        float media= mediaTurma(numAlunos);
        printf("Media da turma %d: %.2f\n",i + 1, media);
        
        somaMedias += media;
    }
    
    float mediaGeral = somaMedias / numTurmas;
    printf("Media geral da escola: %.2f\n", mediaGeral);

}
