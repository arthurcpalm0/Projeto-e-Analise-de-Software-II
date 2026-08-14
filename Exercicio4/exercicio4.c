#include <stdio.h>

int fatorial(int a){
    if (a==0){
        return 1;
    }

    return fatorial(a-1) * a;
}

int potencia(int a, int b){
    if (b == 0){
        return 1;
    }

    return potencia(a,b-1) * a;
}

float fp(int x, int n){
    if (n==0){
        return 1;
    }

    return (float)potencia(x,n)/(float)fatorial(n) + fp(x,n-1);
}


int main(){
    int f = fatorial(5);
    printf("Resultado: %d\n", f);

    float s = fp(2,3);
    printf("Resultado: %f\n", s);
}