#include <stdio.h>
void imprimeMatriz(){
    int matriz [2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d %d", matriz[i][j]);
        }
    }
}


int main(){
    imprimeMatriz();
    return 0;
}