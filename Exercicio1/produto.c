#include <stdio.h>


int produto(int a, int b){
    if (b==0){
        return 0;
    }

    return produto(a, b-1) + a;
}


int main(){
    int r = produto (5,10);
    printf("Resultado: %d\n", r);
}