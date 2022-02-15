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

    printf("\n\nOrdenado por metodo bubbleSort Oscilante: ");

    void Ordena_bubbleSortOsc(int *list, int n){
        int length, bottom, top, swapped, i, aux;
        length=n;
        bottom = 0;
        top = length - 1;
        swapped = 0;
        while(swapped == 0 && bottom < top){
            swapped = 1;
            for(i = bottom; i < top; i = i +1){
                if(list[i] > list[i + 1]){
                    aux = list[i];
                    list[i] = list[i+1];
                    list[i+1] = aux;
                    swapped = 0;
                }
            }
            top = top -1;

            for(i = top; i > bottom; i = i- 1){
                if(list[i] < list[i-1]){
                    aux = list[i];
                    list[i] = list[i-1];
                    list[i-1]=aux;
                    swapped = 0;
                }
            }
            bottom = bottom + 1;
        }
    }

    Ordena_bubbleSortOsc(vet, n);
    printf("\n\nVetor ja ordenado: ");
    for(int i = 0; i < 5; i++){
        printf(" %d ", vet[i]);
    }

    printf("\n\n");
}
