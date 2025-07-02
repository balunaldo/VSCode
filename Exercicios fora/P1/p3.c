#include <stdio.h>
int main(){
    float peso, altura, imc;
    printf("Peso:\n");
    scanf("%f", &peso);
    printf("Altura:\n");
    scanf("%f", &altura);


    imc = peso/(altura * altura);

    if(imc <= 18.5){
        printf("Abaixo do peso!");
    }else if(imc >= 18.6 && imc <= 24.9){
        printf("Ideal");
    }else if(imc >= 25 && imc <= 29.9){
        printf("Acima do peso!");
    }else{
        printf("Obeso");
    }


    return 0;
}