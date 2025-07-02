#include <stdio.h>
int main(){
    int n = 0;
    int soma = 0;

    while(n<=48){
        n = n + 2;
        soma = soma + n;
    }

    printf("%d", soma);
    return 0;
}