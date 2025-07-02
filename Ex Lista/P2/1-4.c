#include <stdio.h>
void primo(int n){
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            printf("Nao eh primo\n");
            break;
        }
    }
}

int main(){
    int num;
    scanf("%d", &num);
    primo(num);

    return 0;
}