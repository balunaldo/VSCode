#include <stdio.h>
void fahToCel(int fah){
    int cel;
    cel = 5/9 * (fah - 32);
    printf("%d F = %d C", fah, cel);
}
void celToFah(int cel){
    int fah;
    fah = (cel * 9/5) + 32;    
    printf("%d C = %d F", cel, fah);    
}

int main(){
    int escolha;
    printf("Escolha\n 1 - Fahrenheit para Celsius\n 2 - Celsius para Fahrenheit\n");
    scanf("%d", &escolha);

    if(escolha == 1){
        int n1;        
        printf("Digite em Fahrenheit para ver em Celsius:\n");
        scanf("%d", &n1);

        fahToCel(n1);
    }else if (escolha == 2){
        int n2;
        printf("Digite em Celsius para ver em Fahrenheit:\n");
        scanf("%d", &n2);

        celToFah(n2);
    }

    return 0;
}