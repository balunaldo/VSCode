#include <stdio.h>
int main(){
    int valor[10];
    int maior, menor;

    for(int i = 0; i < 10; i++){        
        printf("Digite valor:\n");
        scanf("%d", &valor[i]);

        if(i == 0){
            maior = menor = valor[i];
        }else{
            if(valor[i] > maior){
                maior = valor[i];
            }
            if(valor[i] < menor){
                menor = valor[i];
            }
        }
    }

    printf("%d\n", maior);
    printf("%d", menor);


    return 0;
}





































































































































