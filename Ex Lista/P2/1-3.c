#include <stdio.h>
void fatorialConta(unsigned int num){
    unsigned int fat = 1;
    for(unsigned int i = 1; i <= num; i++){
        fat *= i;
    }
    printf("O fatorial de %d eh %d", num, fat);
}

int main(){
    unsigned int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    fatorialConta(n);

    return 0;
}