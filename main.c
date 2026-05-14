#include <stdio.h>
#include <string.h>     

int main(){

    char produtos[10][30];
    char resposta = 'y';
    char busca[100];
    int achado;

    while (resposta == 'y' || resposta == 'Y'){
        for (int i = 0; i < 10; i++){
            printf("Qual o nome do produto %d? ", i+1);
            fgets(produtos[i], sizeof(produtos[i]), stdin);
        }
        for (int i = 0; i < 10; i++){
        printf("%s", produtos[i]);
        }

        printf("Quer reescrever os produtos? (Y/N)");
        scanf("%c", &resposta);
        while ((getchar()) != '\n'); 

    }   

    printf("Qual produto quer buscar?");
    fgets(busca, sizeof(busca), stdin);

    for (int i = 0; i < 10; i++){
        if (strcmp(busca, produtos[i]) == 0){
        achado = 1;
      }
    }

    if (achado == 1){ 
        printf("Produto em estoque.");
    }
    else{
        printf("Produto nao encontrado.");
    }
     
    return 0;
}