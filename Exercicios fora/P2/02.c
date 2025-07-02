#include <stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);

    int soma = 0;
    int numeros[5] = {n, n*2, n*3, n*4, n*5};
    for (int i = 0; i < 5; i++){
        soma += numeros[i];
    }

    printf("Soma: %d\n", soma);

    return 0;
}