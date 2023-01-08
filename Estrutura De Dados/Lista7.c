#include <stdio.h>
#include <stdlib.h>

//Codificar as seguintes funcionalidades de pilha dinâmica: Inicializar pilha, Verificar se está vazia, Acessar topo sem removê-lo, Push();Pop(),Imprimir e esvaziar a pilha.  //

//STRUCT//
typedef struct sCELL {
  int info;
  struct sCELL *next;
} celula;

//Inicializar pilha//
void inicilizar(celula **pilha) {
  *pilha = NULL;
}
//Verificar se está vazia//
int pilhaVazia(celula **pilha) {
  if (*pilha == NULL) return 1;
  return 0;
}

//Acessar topo sem removê-lo//
int acessarTopo(celula **pilha) {
  if (!pilhaVazia(pilha)) return 0;
  return (*pilha)->info;
}

celula *criarCelula(int info) {
  celula *nova = (celula *) malloc(sizeof(celula));
  if (!nova) return 0;
  nova->info = info;
  nova->next = NULL;
  return nova;
}

//Push//
int push(celula **pilha, int info) {
  celula *nova = criarCelula(info);
  if (!nova) return 0;
  nova->next = *pilha;
  *pilha = nova;
  return 1;
}

//Pop//
int pop(celula **pilha) {
  if (pilhaVazia(pilha)) return 0;
  int removido = (*pilha)->info;
  celula *removida = *pilha;
  *pilha = (*pilha)->next;
  free(removida);
  return removido;
}

//Imprimir//
int imprimirPilha(celula **pilha) {
  while (!pilhaVazia(pilha))
    printf("%d ", pop(pilha));
}

//Esquema de menu//
void menu () {
  printf("1 - Inicializar pilha");
  printf("2 - Verificar se a pilha esta vazia");
  printf("3 - Acessar o topo da pilha");
    printf("4 - Push");
    printf("5 - Pop");
     printf(" 6 - Imprimir a pilha");
      printf(" 7 - Sair do programa"); 
            }

int main() {
  celula *pilha;
  int opcao, info;
  do {
    menu();
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    switch (opcao) {
      case 1:
        inicilizar(&pilha);
        break;
      case 2:
        if (pilhaVazia(&pilha))
          printf("A pilha esta vazia ");
        else
            printf("A pilha nao esta vazia");
        break;
        case 3:
            if (pilhaVazia(&pilha))
                printf("A pilha esta vazia" );
            else
                printf("O topo da pilha eh %d ", acessarTopo(&pilha));
            break;
            case 4:
                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &info);
                if (push(&pilha, info))
                printf("Elemento inserido com sucesso" );
                else
                    printf("Erro ao inserir elemento" );
                break;
                case 5:
                if (pilhaVazia(&pilha))
                    printf("A pilha esta vazia");
                else
                    printf("O elemento removido eh %d , pop(&pilha");
                break;
                case 6:
                    if (pilhaVazia(&pilha))
                    printf("A pilha esta vazia");
                    else
                        printf("A pilha eh: ");
                    imprimirPilha(&pilha);
                    break;
                    case 7:
                    printf("Saindo do programa");
                    break;
                    default:
                        printf("Opcao invalida" );
                        break;
                        }
                        } while (opcao != 7);
                        return 0;
                        }



   