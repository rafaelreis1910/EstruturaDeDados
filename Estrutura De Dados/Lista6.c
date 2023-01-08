#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca para usar acentos //


//Criar um mecanismo de menus para rodar as funções quantas vezes quiser. Você deve utilizar as structs para trabalhar com PESSOA, conforme no slide. //

//Inicializar,Verificar vazia, imprimir lista, Inserir no início, Inserir no fim,Remover no início, Remover no fim, Pesquisar endereço de uma matrícula,Remover por matrícula,Retornar tamanho da lista.//



//STRUCTS//
typedef struct sPessoa {
    char nome[50];
    char matricula[10];
} PESSOA;

typedef struct sCell{
    PESSOA info;
    struct sCell *next;
}CELULA;


//Cabeçalho//

   printf("LISTA7- Lista Encadeada\n\n");

   //Inicio do Programa//

//INICIALIZAR//
void incializarLista (PESSOA **lista) {
    (*lista) = NULL;
}





//IMPRIMIR LISTA//
void imprimirLista(PESSOA **lista){
    PESSOA *auxiliar = (*lista);
        if(listaVazia(lista)){
            printf("Lista vazia!");
        } else 
        {
            printf("\nLista: ")
            while(auxiliar != NULL){
                imprimirElemento(auxiliar->info);
                auxiliar = auxiliar->next;
    }
        printf("\n");
}
}

//VERIFICAR VAZIA//
int verificarListaVazia(PESSOA **lista){
    if ((*lista) == NULL) {
        return 1;  }
    return 0;
}

//INSERIR NO INICIO//
int inserirInicio(PESSOA **lista, int elemento){
    PESSOA *celulaNOVA = criarPessoa();
    if(pessoaNOVA == NULL){
        printf("\nErro: Memória cheia!");
        return 0;
    }
    if(listaVazia(lista)){
        return inserirFim(lista, elemento);
    }
    pessoaNOVA->info = elemento;
    pessoaNOVA->next = (*lista);
    (*lista) = pessoaNOVA;
    return 1;
}


//INSERIR NO FIM//
int inserirFim(PESSOA **lista, int elemento){
    PESSOA *pessoaNOVA;
    PESSOA *auxiliar;

    pessoaNOVA = criarPessoa();
    if(pessoaNOVA == NULL){
        printf("\nNão foi possível alocar memória!");
        return 0;
    }

    pessoaNOVA->info = elemento;
    pessoaNOVA->next = NULL;

    if(listaVazia(lista)){
        (*lista) = pessoaNOVA;
        return 1;
    }

    auxiliar = (*lista);

    while(auxiliar->next != NULL){
        auxiliar = auxiliar->next;
    }

    auxiliar->next =pessoaNOVA;
    return 1;
}

//REMOVER NO FIM//
PESSOA removerFim(PESSOA **lista){
    PESSOA *removida;
    PESSOA *anterior;
    PESSOA *anterior;
    PESSOA removido = criarPessoa("", -1);
    if(listaVazia(lista)){
        printf("\n Lista vazia!");
        return removido;
    }
    if(auxiliar->next == NULL){
        return removerInicio(lista);
    }
    removido = (*lista);
    while(removida->next != NULL){
        anterior = removida;
        removida = removida->next;
 }
    removido = removida->info;
    anterior->next = NULL;
    free(removida);
    return removido;
}



//REMOVER NO INICIO//
PESSOA removerInicio(PESSOA **lista){
    PESSOA *auxiliar;

    PESSOA removido;
    strcpy(removido.nome, " ");
    removido.matricula = 1;
    if(listaVazia(lista)){
        printf("\n Lista vazia!");
        return removido;
 }
    removida = (*lista)
    removida = (*lista)->info;
    free(removida);
    return removido;
}



//PESQUISAR ENDEREÇO DE MATRICULA//
PESSOA *pesquisarMatricula(PESSOA **lista, int matricula){
    PESSOA *auxiliar;
    if(listaVazia(lista)){
        printf("\n Lista vazia!");
        return NULL;
    }
    auxiliar = (*lista);
    while(auxiliar != NULL){
        if(auxiliar->info.matricula == matricula){
            return auxiliar;
        }
        auxiliar = auxiliar->next;
    }
    return NULL;
}


//REMOVER POR MATRICULA//
PESSOA removerMatricula(PESSOA **Lista){
    PESSOA *removida;
    PESSOA *anterior;
    PESSOA Remover = criarPessoa("", -1);

    if(listaVazia(lista)){
        printf("\nLista vazia!");
        return Remover;
    }
    removida = pesquisarMatricula(lista, matricula);
    if(removida == NULL){
        printf("\n Não encontrada!");
        return Remover;
    }
    if(removida == (*lista)){
        return removerInicio(lista);
 }
    Remover = removida->info;

    anterior = (*lista);
    while(anterior->next != removida){
        anterior = anterior->next;
    }
    anterior->next = removida->next;
    free(removida);
    return Remover;
}

//RETORNAR TAMANHO LISTA//
TamanhoDaLista(CELULA **lista) 
{
    CELULA *auxiliar;
    int Contador = 0;
    if(listaVazia(lista))
    {
        printf("\nLista Vazia");
        return 1;
    }
    auxiliar = (*lista);
    while(auxiliar->next != NULL)
 {
        auxiliar = auxiliar->next;
        Contador++;
 }
    printf("A lista tem o tamanho: %d\n", Contador + 1);
}



int menu(){
    printf("----------MENU----------\n");
    printf("0 - SAIR\n");
    printf("1 - VERIFICAR SE VAZIA\n");
    printf("2 - INSERIR PESSOA NO FIM\n");
    printf("3 - INSERIR PESSOA NO INICIO\n");
    printf("4 - IMPRIMIR LISTA DE PESSOAS\n");
    printf("5 - REMOVER PESSOA NO INICIO\n");
    printf("6 - REMOVER PESSOA NO FIM\n");
    printf("7 - PESQUISAR POR MATRICULA\n");
    printf("8 - REMOVER POR MATRICULA\n");
}