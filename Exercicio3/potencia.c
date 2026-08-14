#include <stdio.h>

int potencia(int a, int b){
    if (b == 0){
        return 1;
    }

    return potencia(a,b-1) * a;
}

int main(){
    int p = potencia(2,5);
    printf("Resultado: %d\n", p);
}