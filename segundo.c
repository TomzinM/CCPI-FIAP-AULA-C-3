#include <stdio.h>

void fahrenheit(int celcius){
    // declara e calcula fahrenheit
    int fahrenheit = celcius * 1.8 + 32;
    // mostra o valor
    printf("%d", fahrenheit);
}

void celcius(int fahrenheit){
    // declara e calcula celcius
    int celcius = (fahrenheit - 32) / 1.8;
    // mostra o valor
    printf("%d", celcius);
}

int main(){

    // declara as variaveis 
    
    int opcao;
    int n;

    // primeiro o codigo ve qual conversao quer

    printf("Quer transformar de celcius para fahrenheit ou o oposto? (1 para transformar em F/ 2 para C): ");
    scanf("%d", &opcao);

    // depois ve qual a temperatura que o usuario quer converter

    printf("Qual a temperatura?: ");
    scanf("%d", &n);

    // abre o switch-case com 3 opçoes, ou muda seu celcius para fahrenheit, ou muda o seu fahrenheit para celcius, ou nao faz nada

    switch(opcao) {
        case 1: fahrenheit(n); break;
        case 2: celcius(n); break;
        default: printf("Invalido.");
    }   
    
    return 0;
}