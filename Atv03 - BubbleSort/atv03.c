#include <stdio.h>
#include <stdio.h>

int main(){
    int vet[5];
    vet[0] = 25;
    vet[1] = 5;
    vet[2] = 15;
    vet[3] = 10;
    vet[4] = 20;
    int n = 5;

    printf("Vetor desordenado: ");
    for(int i = 0; i < 5; i++){
        printf(" %d ", vet[i]);
    }

    printf("\n\nOrdenado por método bubbleSort: ");

    void Ordena_bubbleSort(int *v, int n){
        int i, continua, aux, fim = n;
        do{
            continua = 0;
            for(i = 0; i < fim - 1; i++){
                if(vet[i] > vet[i+1]){
                    aux = vet[i];
                    vet[i] = vet[i+1];
                    vet[i+1] = aux;
                    continua = i;
                }
            }
            fim--;
        }while(continua !=0);
    }

    Ordena_bubbleSort(vet, n);
    printf("\n\nVetor ja ordenado: ");
    for(int i = 0; i < 5; i++){
        printf(" %d ", vet[i]);
    }

    printf("\n\n");
}
