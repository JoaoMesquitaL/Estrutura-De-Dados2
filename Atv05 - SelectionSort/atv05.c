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

    void Ordena_selectionSort(int *v, int n){
        int i, j, menor, troca;
        for(i = 0; i < n - 1; i++){
            menor = i;
            for(j = i + 1; j < n; j++){
                if(v[j] < v[menor]){
                    menor = j;
                }
            }
            if(i != menor){
                troca = v[i];
                v[i] = v[menor];
                v[menor] = troca;
            }
        }
    }

    Ordena_selectionSort(vet, n);
    printf("\n\nVetor ja ordenado: ");
    for(int i = 0; i < 5; i++){
        printf(" %d ", vet[i]);
    }

    printf("\n\n");
}
