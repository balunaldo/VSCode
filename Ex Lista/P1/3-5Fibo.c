#include <stdio.h>

int main(){
    int n1 = 0, n2 = 1, prx = 0;
    for(int i = 0; i < 15; i++){
        printf("%d", n1);
        prx = n1 + n2;
        n1 = n2;

    }
    
    return 0;
}