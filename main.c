#include <stdio.h>

int contagem(int n)
{
    // base

    if (n == 0)
    {
        printf("Fim.\n\n");
        return 0;
    }

    // recursivo
    printf("%d\n", n);
    return contagem(n - 1);
}

int somatorio(int n){
    if (n <= 0){
        return 0;
    }
    

    return n + somatorio(n - 1); 
}

long long potencia(int base, int exponente){

    if (exponente == 0){
        return 1;
    }

    return base * potencia(base, exponente - 1);

}

int somaVetor(int v[], int n){
    if (n == 0){
        return 0;
    }

    return v[n - 1] + somaVetor(v, n - 1);
}

int maior(int v[], int n) {
    if (n == 1){
        return v[0];
    }

    int anterior = maior (v, n - 1);

    if (v[n - 1] > anterior){
        return v[n - 1];
    }

    return anterior;
}

int fibonacci (int n){ 

    if (n <= 1){
        return n;
    }

    return fibonacci(n - 1) + fibonacci (n - 2);
}

int main()
{

    //contagem(3);
    //int conta = somatorio(5);

    //printf("%d", conta);

    int vetor[5] = {10, 42, 583, 23, 13};

    // printf("%lld\n", potencia(5, 8));
    // printf("%d", somaVetor(vetor, sizeof(vetor) / 4));
    // printf("%d", maior(vetor, sizeof(vetor) / 4));

    printf("%d", fibonacci(7));

    return 0;
}