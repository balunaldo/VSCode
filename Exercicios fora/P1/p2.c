#include <stdio.h>
int main(){
    int v1 = 0;
    int v2;

    scanf("%d", &v1);

    for(v2 = 2; v2 < v1; v2++){
        if(v1 % v2 == 0){
            printf("A propriedade é falsa\n");
        }
    }

    return 0;
}