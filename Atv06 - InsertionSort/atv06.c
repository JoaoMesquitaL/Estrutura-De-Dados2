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

    printf("\n\nOrdenado por metodo selectionSort: ");

    void Ordena_insertionSort(int *v, int n){
        int i, j, aux;
        for(i = 1; i < n; i++){
            aux = v[i];
            for(j = i; (j>0) && (aux < v[j-1]); j--){
                v[j] = v[j-1];
            }
            v[j] = aux;
        }
    }

    Ordena_insertionSort(vet, n);
    printf("\n\nVetor ja ordenado: ");
    for(int i = 0; i < 5; i++){
        printf(" %d ", vet[i]);
    }

    printf("\n\n");

}
