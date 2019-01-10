#include <stdio.h>
#include <stdlib.h>

void exibir(float *v, int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("v[%d] = %.2f\n", i, v[i]);
    }
}

void troca(float *n1, float *n2){
    float aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void inverteArrayRecur(int inicio, int fim, float *v){
    if(inicio < fim){
        troca(&v[inicio], &v[fim-1]);
        inverteArrayRecur(inicio+1, fim-1, v);
    }
}

int main(){

    float v[5] = {1,2,3,4,5};
    exibir(v, 5);

    printf("\nApos a inversao:\n\n");
    inverteArrayRecur(0,5,v);

    exibir(v, 5);

    return 0;
}
