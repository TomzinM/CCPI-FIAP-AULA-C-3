#include <stdio.h>

int main(){
    int valores[100];
    char response = 'Y';
    int tamanho;


    printf("Qual tamanho do array?");
    scanf("%d", &tamanho);

    while (response == 'Y' || response == 'y'){
        for (int i = 0; i < tamanho; i++){
            printf("Qual valor quer armazenar no indice %d?", i);
            scanf(" %d", &valores[i]);

        }
        for (int i = 0; i < tamanho; i++){
            int valor = valores[i];
            printf("%d: %d\n", i, valor);
        }
        

        printf("Quer continuar? (Y/N): ");
        scanf(" %c", &response); 
;
        if (response == 'y' || response == 'Y'){
            continue;
        }  
        break;
  } 
    return 0;
}