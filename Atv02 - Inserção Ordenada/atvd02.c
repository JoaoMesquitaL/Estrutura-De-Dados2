#include <stdio.h>
#include <stdio.h>

int main(){
    int Aelem; //elemento a ser buscado
    int n = 6; //tamanho do vetor desordernado
    int m = 7; //tamanho do vetor ordenado
    int vetD[7];//vetor ordenado
    vetD[0] = 5;
    vetD[1] = 10;
    vetD[2] = 15;
    vetD[3] = 20;
    vetD[4] = 25;
    vetD[5] = 30;
    int vet[6];//vetor desordenado
    vet[0] = 5;
    vet[1] = 1;
    vet[2] = 22;
    vet[3] = 10;
    vet[4] = 2;
    vet[5] = 8;
    int Uins;
    int i = 0;

    printf("Exibindo vetor desordenado:\n");
    for(i = 0; i<n; i++){
        printf("Indice %d, valor: %d\n",i ,vet[i]);
    }

    printf("\n\nExibindo vetor ordenado:\n");
    for(i = 0; i<n; i++){
        printf("Indice %d, valor: %d\n",i ,vetD[i]);
    }

    printf("\n\nDigite qual valor deseja buscar nos vetores: ");
    scanf("%d", &Aelem);

    //Inicio da Busca Linear
    printf("\n\n--Iniciando Busca Linear--");
    printf("\nValor a ser buscado no vetor: %d", Aelem);
    int buscaLinear(int *vetor, int n, int elemento){
        int i;
        for(i=0; i<n; i++){
            if(elemento == vetor[i]){
                printf("\nValor encontrado no indice: %d", i);
                return i;
            }
        }
        printf("\nValor NAO encontrado em nenhuma posição do vetor!");
        return -1;
    }

    //chamada da Busca Linear
    buscaLinear(vet, n, Aelem);

    //Inicio da Busca Ordenada
    printf("\n\n--Iniciando Busca Ordenada--");
    printf("\nValor a ser buscado no vetor: %d", Aelem);
    int buscaOrdenada(int *vetor, int n, int elemento){
        int i;
        for(i = 0; i < n; i++){
           if(elemento == vetor[i]){
            printf("\nValor encontrado no indice: %d", i);
            return i;
           }else{
                if(elemento<vetor[i]){
                    printf("\nValor NAO encontrado em nenhuma posicao do vetor!");
                    return -1;
                }
           }
        }
        return -1;
    }

    //chamada da Busca Ordenada
    buscaOrdenada(vetD, n, Aelem);

    //Inicio da Busca Binária
    printf("\n\n--Iniciando Busca Binária--");
    printf("\nValor a ser buscado no vetor: %d", Aelem);
    int buscaBinaria(int *vetor, int n, int elemento){
        int i=0, inicio, meio, fim;
        inicio = 0;
        fim= n - 1;

        while(inicio <=fim){
            meio = (inicio + fim)/2;
            if(elemento<vetor[meio]){
                fim = meio -1;
            }else{
                if(elemento > vetor[meio]){
                    inicio = meio + 1;
                }else{
                    printf("\nValor encontrado no indice: %d", meio);
                    return meio;
                }
            }
        }
        printf("\nValor NAO encontrado em nenhuma posicao do vetor!");
        return -1;
    }

    //chamada de Busca Binária
    buscaBinaria(vetD, n, Aelem);

    //Iniciado inserção ordenada
    printf("\n\nDigite um numero para ser inserido no vetor ordenado: ");
    scanf("%d", &Uins);

    printf("\n\nExibindo vetor atual: \n");
    for(int i = 0; i<m-1; i++){
        printf("Indice %d, valor: %d\n",i ,vetD[i]);
    }
    printf("\nNumero digitado para insercao ordenada: %d\n\n", Uins);

    for(i = m - 1; i >=0 && Uins < vetD[i]; i--){
        vetD[i+1] = vetD[i];
    }
    vetD[i + 1] = Uins;

    printf("\n\nExibindo vetor após insercao: \n");
    for(i = 0; i<m; i++){
        printf("Indice %d, valor: %d\n",i ,vetD[i]);
    }
}
