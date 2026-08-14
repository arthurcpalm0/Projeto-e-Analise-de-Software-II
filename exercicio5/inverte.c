#include <stdio.h>

void inverte(int v[], int e, int d){
    if (e<d){
        int aux = v[e];
        v[e] = v[d];
        v[d] = aux;
        inverte(v, e+1, d-1);
    }
}

int main(){
    int v[] = {1,2,3,4,5};
    inverte(v,0,4);
    for (int i=0;i<5;i++){
        printf("%d ",v[i]);
    }
}