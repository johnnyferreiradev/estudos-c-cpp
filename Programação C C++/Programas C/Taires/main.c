#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 18;
    int qtd = 0;
    int i;
    for(i=1; i<num; i++){
        if(num % i == 0){
            qtd++;
            if(qtd==1){
                printf("%d",i);
            }else{
                printf(", %d",i);
            }
        }
    }

    return 0;
}
