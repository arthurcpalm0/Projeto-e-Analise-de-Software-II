#include <stdio.h>

int somaimpar(int n){
    if (n==0){
        return 0;
    }

    if (n%2!=0){
        return somaimpar(n-1) + n;
    }
    else{
        return somaimpar(n-1);
    } 
}

int main(){
    int s = somaimpar(10);
    printf("Resultado: %d\n", s);
}