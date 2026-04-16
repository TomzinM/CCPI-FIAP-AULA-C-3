#include <stdio.h>

int main(){
    int day;
    printf("Qual dia da semana quer mostrar? (1 e Domingo): ");
    scanf("%d", &day);
    switch(day){
        case 1: printf("1 - Domingo"); break; 
        case 2: printf("2 - Segunda"); break; 
        case 3: printf("3 - Terça"); break;
        case 4: printf("4 - Quarta"); break;
        case 5: printf("5 - Quinta"); break;
        case 6: printf("6 - Sexta"); break;
        case 7: printf("7 - Sabado"); break;
        default: printf("Invalido.");
    };

    return 0;
}
    