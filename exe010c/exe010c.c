#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    struct aluno {
        char *nome[100];
        int ra;
        float P1;
        float P2;
        float media;
    } *media;
    
    int qtdAlunos;
    
    scanf("%d", &qtdAlunos);
    
    media = malloc((sizeof(char) * qtdAlunos) + (sizeof(int) * qtdAlunos) + (sizeof(float) * qtdAlunos * 3));
    
    for (int i = 0; i <= qtdAlunos; i++) {
        scanf("%100[^\n]\n", &media[i].nome);
        scanf("%d\n", &media[i].ra);
        scanf("%f\n", &media[i].P1);
        scanf("%f\n", &media[i].P2);
    }
    
    for (int i = 1; i <= qtdAlunos; i++) {
        media[i].media = (media[i].P1 + media[i].P2)/2;
        printf("%d	%s	%.2f\n", media[i].ra, media[i].nome, media[i].media);
    }
    
    free(media);
    return 0;
}
