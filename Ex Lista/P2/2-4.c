#include <stdio.h>
#include <string.h>

int main(){
    int tam = 3;
    int m1[tam][tam];
    int m2[tam][tam];
    int soma[tam][tam];

    printf("Digite a primeira matriz:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("Posicao %d %d\n", i+1, j+1);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Digite a segunda matriz:\n");
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("Posicao %d %d\n", i+1, j+1);
            scanf("%d", &m2[i][j]);
        }
    }

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            soma[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}