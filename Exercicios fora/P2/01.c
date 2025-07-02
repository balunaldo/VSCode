#include <stdio.h>
/*void alturaIdade(int v1, int v2){
    do{
        printf("Valores incorretos, digite novamente");
        
        printf("Altura: ");
        scanf("%f", &v1);

        printf("Idade: ");
        scanf("%d", &v1);
        

    }while(v1 < 0 || v2 < 0);

    return v1;
    return v2;
}
*/
void fibonacci(int termo){
    int n1 = 0, n2 = 1, fibo = 0;
    for(int i = 1; i < termo; i++){
        fibo = n1 + n2;
        printf("%d ", fibo);
        n1 = n2;
        n2 = fibo;
    }
}

void asterisco(){
    int linha;
    printf("Digite numero de linhas de asteriscos deseja:\n");
    scanf("%d", &linha);

    int inicio;
    printf("Digite quantos asteriscos deve começar a primeira linha:\n");
    scanf("%d", &inicio);

    for(int i = 1; i <= linha; i++){
        for(int j = 1; j <= i + inicio - 1; j++){
            printf(" * ");
        }
        printf("\n");
    }
}

int main(){

    int num;
    printf("\nDigite um termo para fibonacci:\n");
    scanf("%d", &num);

    fibonacci(num);
    asterisco();

    float altura;
    int idade;
    printf("Altura:\n");
    scanf("%f", &altura);

    printf("Idade:\n");
    scanf("%d", &idade);

    return 0;
}