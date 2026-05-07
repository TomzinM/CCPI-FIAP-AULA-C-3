#include <stdio.h>
#include <string.h>


int main(){

    char nome[20];
    
    printf("Digite seu nome completo: ");
    fgets(nome, 20, stdin);
    int tamanhoAntes = strlen(nome);

    nome[strcspn(nome, "\n")] = '\0';

    int tamanhoDepois = strlen(nome);

    char nome2[20]; 
    strcpy(nome2, nome);
    nome2[strcspn(nome2, " \n")] = '\0';

    char msg[21] = "O que voce gostaria?";

    printf("%s\n", msg);
    printf("Ola %s", nome2);

    printf("Tamanho antes do strcspn: %d\n", tamanhoAntes);
    printf("Tamanho depois do strcspn: %d\n", tamanhoDepois);


    printf("Ola, %s.", nome);

    return 0;
}