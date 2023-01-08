#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//Lista09 -  Fila estática //

// Implemente as seguintes funções: •Inicializar;•Fila vazia;•Enfileirar;•Desenfileirar;•Imprimir fila do início (pode liberar a fila). //

//STRUCT//
typedef struct fila{
   int elem[TAM];
   int cabecalho;
   int ultimo;
}FILA;

//inicializa a fila//
void inicializar(FILA *fila) {      
   fila->ultimo = 0;  //ultimo elemento da fila
   fila->cabecalho = fila->ultimo; 
}

//verifica se a fila está vazia//
int filaVazia(FILA *fila) {         
   if (fila->cabecalho == fila->ultimo) { //se o cabecalho for igual ao ultimo, a fila está vazia
      return 1; 
   }
   return 0;
}

//enfileira um elemento na fila//
void enfileirar(FILA *fila, int valor) {      
   if (fila->ultimo == TAM) { //se o ultimo for igual ao tamanho da fila, a fila está cheia
      printf("Fila cheia \n"); 
    } else {
        fila->elem[fila->ultimo] = valor;  //se não, insere o valor no ultimo elemento da fila
        fila->ultimo++;
    }
}

//desenfileira um elemento da fila//
int desenfileirar(FILA *fila) {      
   int i;
   int valor;
   if (filaVazia(fila)) {   
      printf("Fila vazia \n");
      return 0;
   } else {
      valor = fila->elem[fila->cabecalho];  //se não, remove o valor do cabecalho da fila
      for (i = 0; i < fila->ultimo; i++) {
         fila->elem[i] = fila->elem[i + 1]; 
      }
      fila->ultimo--;
      return valor;
   }
}

//imprime a fila//
void imprimirFila(FILA *fila) {      
   int i;
   if (filaVazia(fila)) {  
      printf("Fila vazia \n");
   } else { 
      for (i = fila->cabecalho; i < fila->ultimo; i++) { 
         printf("%d ", fila->elem[i]);
      }
      printf("\n");
}
}

int main() {
   FILA fila;
   int valor;
   inicializar(&fila);
   enfileirar(&fila, 1);
   enfileirar(&fila, 2);
   enfileirar(&fila, 3);
   enfileirar(&fila, 4);
   enfileirar(&fila, 5);
   imprimirFila(&fila);
   valor = desenfileirar(&fila);
   printf("Valor desenfileirado: %d \n", valor);
   imprimirFila(&fila);
   return 0;
}