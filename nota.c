#include <stdio.h>

int main(){

    float nota[100];
    float media;
    int tamanho;

    printf("Digite a quantidade de notas que quer: ");
    scanf("%d", &tamanho);

    for (int i = 1; i < tamanho + 1; i++){
        printf("Qual foi a nota %d: ", i);
        scanf("%f", &nota[i]);

        media = media + nota[i];
    }

    media = media/tamanho;

    printf("%.2f", media);
    

    return 0; 
}