#include<stdio.h>
#include<stdlib.h>
#define MAX_TAM 10

//1.Crie uma função para imprimir todos os elementos da lista.//
typedef struct sLista {
    char elem[MAX_TAM];
    int ultimo;
}Lista;

void inicializarLista(Lista *lista) {
    lista->ultimo = -1;
}

int listaVazia(Lista *lista) {
    if (lista->ultimo == -1) {
        return 1;
    } else {
        return 0;
    }
}

int listaCheia(Lista *lista) {
    if (lista->ultimo == MAX_TAM - 1) {
        return 1;
    } else {
        return 0;
    }
}

void inserirElemento(Lista *lista, char elemento) {
    if (listaCheia(lista)) {
        printf("Lista cheia!");
    } else {
        lista->ultimo++;
        lista->elem[lista->ultimo] = elemento;
    }
}

void imprimirLista(Lista *lista) {
    int i;
    for (i = 0; i <= lista->ultimo; i++) {
        printf("%c ", lista->elem[i]);
    }
}

int main() {
    Lista lista;
    inicializarLista(&lista);
    inserirElemento(&lista, '1');
    inserirElemento(&lista, '2');
    inserirElemento(&lista, '3');
    inserirElemento(&lista, '4');
    imprimirLista(&lista);
    return 0;
}

//2.Crie uma função para inserir um elemento em um posição k informada pelo usuário.//  

void inserirElementoPosicao(Lista *lista, char elemento, int posicao) {
    int i;
    if (listaCheia(lista)) {
        printf("Lista cheia!");
    } else {
        for (i = lista->ultimo; i >= posicao; i--) {
            lista->elem[i + 1] = lista->elem[i];
        }
        lista->elem[posicao] = elemento;
        lista->ultimo++;
    }
}

int main() {
    Lista lista;
    inicializarLista(&lista);
    inserirElemento(&lista, '1');
    inserirElemento(&lista, '2');
    inserirElemento(&lista, '3');
    inserirElemento(&lista, '4');
    inserirElementoPosicao(&lista, '5', 2);
    imprimirLista(&lista);
    return 0;
}

//3.Crie uma função para inverter a lista.//

void inverterLista(Lista *lista) {
    int i, j;
    char aux;
    for (i = 0, j = lista->ultimo; i < j; i++, j--) {
        aux = lista->elem[i];
        lista->elem[i] = lista->elem[j];
        lista->elem[j] = aux;
    }
}

int main() {
    Lista lista;
    inicializarLista(&lista);
    inserirElemento(&lista, '1');
    inserirElemento(&lista, '2');
    inserirElemento(&lista, '3');
    inserirElemento(&lista, '4');
    inverterLista(&lista);
    imprimirLista(&lista);
    return 0;
}

//4.Crie uma função para ordenar a lista.//

void ordenarLista(Lista *lista) {
    int i, j;
    char aux;
    for (i = 0; i < lista->ultimo; i++) {
        for (j = i + 1; j <= lista->ultimo; j++) {
            if (lista->elem[i] > lista->elem[j]) {
                aux = lista->elem[i];
                lista->elem[i] = lista->elem[j];
                lista->elem[j] = aux;
            }
        }
    }
}

int main() {
    Lista lista;
    inicializarLista(&lista);
    inserirElemento(&lista, '1');
    inserirElemento(&lista, '2');
    inserirElemento(&lista, '3');
    inserirElemento(&lista, '4');
    ordenarLista(&lista);
    imprimirLista(&lista);
    return 0;
}

//5.Crie um procedimento na main que permite o usuário ter acesso a todas as funcionalidades descritas até então. Permita também que uma vez que o programa estiver funcionando, o usuário possa fazer quantas operações quiser.//

void menu() {
    printf("1 - Imprimir todos da lista  \n");
    printf("2 - Inserir elemento em uma posição específica \n");
    printf("3 - Inverter a lista \n");
    printf("4 - Ordenar a lista \n");
    printf("5 - Sair \n");
}

int main() {
    Lista lista;
    inicializarLista(&lista);
    int opcao, posicao;
    char elemento;
    do {
        menu();
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite o elemento a ser imprimido: ");
                scanf(" %c", &elemento);
                inserirElemento(&lista, elemento);
                break;
            case 2:
                printf("Digite o elemento a ser inserido: ");
                scanf(" %c", &elemento);
                printf("Digite a posição: ");
                scanf("%d", &posicao);
                inserirElementoPosicao(&lista, elemento, posicao);
                break;
            case 3:
                inverterLista(&lista);
                break;
            case 4:
                ordenarLista(&lista);
                break;
            
            case 5:
                printf("Saindo...");
                break;
            default:
                printf("Opção inválida!");
        }
    } while (opcao != 5);
    return 0;
}

