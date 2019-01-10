#include <stdio.h>
#include <stdlib.h>

void exibir(int *v, int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("v[%d] = %d\n",i,v[i]);
    }
}

void insertionSort(int *v, int tam){
    int chave, i, j;
    for(j=1; j<tam; j++){
        chave = v[j];
        i = j - 1;
        while(i>=0 && v[i] > chave){
            v[i+1] = v[i];
            i = i -1;
        }
        v[i+1] = chave;
    }
}

int main(){
    
    int v[6] = {5,2,4,6,1,3};
    printf("Vetor antes da ordenação\n");
    exibir(v, 6);

    insertionSort(v, 6);

    printf("\nVetor após a ordenação\n");
    exibir(v, 6);

    return 1;
}
