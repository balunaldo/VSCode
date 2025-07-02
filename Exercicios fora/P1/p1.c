#include <stdio.h>
int main(){
    int n;
    printf("Digite linhas:\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i + 3; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}