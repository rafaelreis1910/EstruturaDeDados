#include<stdio.h>
#include<stdlib.h>


//Faça um programa que leia dois números inteiros,armazenando-os em memória alocada dinamicamente e depois escreva-os na tela.//

void exercicio1() {

//Declaração de variaveis//  
int *Ponteiro1, *Ponteiro2;

 
  //Cabeçalho//

   printf("Exercicio01\n\n");

   //Inicio do Programa//
 Ponteiro1 = (int *) malloc(sizeof(int));

   
 Ponteiro2 = (int *) malloc(sizeof(int));

    

printf("Digite o Ponteiro 1 e o Ponteiro 2: ");

    
scanf("%d%d", &Ponteiro1, &Ponteiro2);

   
printf("%d e %d\n", Ponteiro1,Ponteiro2);

}



//Faça um programa que leia n inteiros(definidos pelo usuário)armazenando-os em um vetor alocada dinamicamente.//
void exercicio2() {

//Declaração de variaveis//

int y, numero, *x;

 //Cabeçalho//

   printf("Exercicio02\n\n");

 //Inicio do Programa//
printf("Informe o vetor : \n");

    scanf("%i", &numero);
    
    x = (int *)malloc(numero * sizeof(int));
    if (x == NULL)
    {
printf("Nao foi possivel alocar memoria. \n");
exit(0);

    }
    for (y = 0; y < numero; y++)
    {
printf("Insira a posição desejada %i do vetor: ", y + 1);
scanf("%d", &x[y]);
    }
    printf("\nVetor: \n");
    for (y = 0; y< numero; y++)
    {

        printf("%d\n", x[y]);

    }
    free(x);
}


 
//Defina uma estrutura para armazenar um cadastro de cliente:nome,idade e telefone.Peça ao usuário o número de cliente se aloque dinamicamente na memória a quantidade de estruturas necessárias.Em seguida,leia os dados destesclientes.//
void exercicio3() {

//Declaração de variaveis//
int y, num;

 //Cabeçalho//

   printf("Exercicio03\n\n");

 //Inicio do Programa//
typedef struct cli{

    char nome[50];
    int idade;
    char telefone[30];
    }CLIENTE;

    CLIENTE *c;

    printf("Numeros de cliente a cadastrar? \n");
    scanf("%d", &num);

    c = (CLIENTE *)malloc(num * sizeof(CLIENTE));

    if (c == NULL)

    {
        printf("Nao foi possivel alocar memoria. \n");
        exit(0);
    }
    for (y = 0; y < num; y++)

    {
        printf("\nInsira o Nome a ser cadastrado %d: ", y + 1);
        scanf("%s", c[y].nome);
printf("\nInsira o telefone %d: ", y + 1);

        scanf("%s", c[y].telefone);
        printf("\nDigite a idade para o cadastro de posicao %d: ", y + 1);
        scanf("%d", &c[y].idade);

    }

    printf("\n");

    for (y = 0; y < num; y++)

    {
        printf("%s\n", c[y].nome);
        printf("%s\n", c[y].telefone);
        printf("%d\n", c[y].idade);
    }

    free(c);
 
}


//Aloque dinamicamente uma matriz de tamanho a ser informado pelo usuário.Preencha,imprima e depois libere a memória alocada.//

void exercicio4() {

//Declaração de variaveis//

int **matriz, i, y, z;

    int lin, col;

 //Cabeçalho//

   printf("Exercicio04\n\n");

 //Inicio do Programa//

printf("Entre com o numero de linhas: \n");
scanf("%d", &lin);
printf("Entre com o numero de colunas: \n");
scanf("%d", &col);

matriz = (int **)malloc(lin * sizeof(int *));
    for (i = 0; i < lin; i++)

    {
        matriz[i] = (int *)malloc(col * sizeof(int));
    }

    for (i = 0; i < lin; i++)
    {

       for (y = 0; y < col; y++)

        {
            matriz[i][y] = (rand() % 100) + 1;
        }
        for (i = 0; i < lin; i++)
    {
for (y = 0; y < col; y++)
        {
        printf("%d\t", matriz[i][y]);
     }
    printf("\n");
    }
    for (i = 0; i < lin; i++)
    {

  free(matriz[i]);
    }
    free(matriz);

    matriz = NULL;

}


void menu(){
  printf("Lista4");
  printf("\n\n1- exercicio1\n2- exercicio2-  \n3- exercicio3- \n4- exercicio4- \n5- exercicio5-
  printf("Digite o exercicio desejado: ");
}

int ler_opcao(){
  int opcao;
  int valido = 0;
    while(valido == 0){
      scanf("  %i", &opcao);
      switch(opcao){
          case 1:
            exercicio1();            
            break;
          case 2:
            exercicio2();
            break;
          case 3:
            exercicio3();
            break;
          case 4:
            exercicio4();
            break;
          case 5:
            exercicio5();
            break;
          case 6:
            exercicio6();
            break;
          case 7:
            exercicio7();            
            break;
            case 8:
            exercicio8();            
            break;
            case 9:
            exercicio9();            
            break;
            case 10:
            exercicio10();            
            break;
          case 0:
            printf("\nFechando..");
            exit(0);
            break;
              return opcao;
          default:
              printf("\n\nOpcao nao valida\n\nSelecione outro numero valido.\n\n");
              menu();
        }  
    }
  
}


  int main(){
    int opcao;
    menu();
    opcao = ler_opcao();
    printf("O numero do exercicio escolhido pelo usuario foi %d", opcao);
    

    
  return 0;
}
        
        
        
        
        
        
        
        
        
        

    }