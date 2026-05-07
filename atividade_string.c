#include <stdio.h>
#include <string.h>

int main(){

    // Autenticação de Usuario
    int autenticacao = 1;
    char nome[50];
    char nome2[50];

    printf("Por favor, faca registro de seu nome primeiro: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("(nome esta registrado como %s)\n\n", nome);

    while (autenticacao == 1){
        
        printf("Confirme seu nome: ");
        fgets(nome2, 50, stdin);
        nome2[strcspn(nome2, "\n")] = '\0';

        if (strcmp(nome, nome2) == 0){
            printf("Ok, acesso liberado!");
            autenticacao = 0;
        }
        else{
            printf("Acesso negado.\n");
            printf("(nome foi tentado como %s)\n\n", nome2);

            continue;
        }
    }
    return 0;
}