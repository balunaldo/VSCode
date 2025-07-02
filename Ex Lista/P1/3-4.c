#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero\n");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        int div = n % i;
        if(div == 0){
            printf("%d\n", i);
        }
    }
}