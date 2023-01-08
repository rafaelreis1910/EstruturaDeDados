#include <stdio.h>

 //Escreva um programa que lê 12 valores reais, encontra o maior e o menor deles e mostra o resultado.//

void exercicio1() {
//Declaração de variaveis//
    float numero, numeromaior, numeromenor;
    int i;

       //Cabeçalho//
   printf("Exercicio02\n\n");

//Inicio do Programa//
    printf("Entre com um valor: ");
    scanf("%f", &numero);
    
    numeromenor=numero;             //para salvar o numero menor//
    numeromaior=numero;              //para salvar o numero maior//
for(i=1; i<12; i++){
printf("\nEntre com o %dos valores reais: ",i+1);  // para incrementar até onde o exercicio pede (12)//
scanf("%f", &numero);

 if(numero>numeromaior)
 numeromaior=numero;
 else if(numero<numeromenor)
 numeromenor=numero;
 }
    
    
printf("\nO menor numero e: %.f\n", numeromenor);
printf("O maior numero e: %.f", numeromaior);
 

 }



#include <stdio.h>    //Biblioteca de entrada/saida//

//Faça um programa que calcula e escreve a seguinte soma:1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50.//    

void exercicio2() {  
  //Declaração de variaveis//
  float numerador,denominador,soma,resultado;
   //Cabeçalho//
   printf("Exercicio02\n\n");
   //Inicio do Programa//
  for(numerador = 1, denominador = 1; numerador <= 99; numerador = numerador +2, denominador = denominador+1){
    resultado = numerador / denominador;   // o for no numerador com a condicional de ir incrementando +2 e o denominador +1,seguindo a logica do exercicio//
    printf("\n%.3f\n", resultado);
    soma = soma + resultado;    
  }
  printf("O valor e de = %.4f\n", soma);
  
 
  }

#include <stdio.h>

void exercicio3() {
//Faça um programa que calcula a soma dos números digitados pelo usuário.
//O programa deve permitir que o usuário digite uma quantidade não determinada de números, 
//encerrando-se quando o usuário digitar o valor zero (0);//

  printf("Exercicio03\n\n");
  float numero,numero2, soma;

  while(numero != 0 && numero2 != 0 ){  //nesse while, foi utilizado pra caso o numero digitado fosse diferente de 0, passa a executar os comandos após o bloco do while.//
    printf("Insira um valor : ");
    scanf("%f", &numero);
    printf("Insira outro valor : ");
    scanf("%f", &numero2);
    if( numero != 0 && numero2 != 0){   //Operador logico AND para encerrar quando digitar o valor 0 em algum dos numeros//
    soma = numero2 + numero;
    printf("Valor Total: %f \n", soma);
    printf("Insira 0 para encerrar.");
    }else{
    printf("Fechando...");
    }
  }
}


#include <stdio.h>
//Escreva um programa que mostra os números que possuem resto igual a 5 quando divididos por 13. Considere o intervalo entre 1000 e 1999, incluindo esses extremos.//
void exercicio4(){

    //Declaração de variaveis//
    int numero, divisao =  13;
    //Cabeçalho//
    printf("Exercicio04\n\n");
     //Inicio do Programa//
    for (numero = 1000 ; numero <=1999; numero++){
        if( numero % divisao == 5 )  //O operador % retorna o resto da divisão de um número por outro.//
        printf("Os numeros que possuem resto igual a 5 quando divididos por 13 sao : %i\n ",numero);

    }
}



#include <stdio.h>
//Faça um programa para gerar os N primeiros termos da sequência:1 1 2 3 5 8 13 21 34 55 89 ...//
void exercicio5(){
    //Declaração de variaveis//
    int numero=0, i, atual=1, anterior=1, proximo=0;
    float total=0;

    //Cabeçalho//
    printf("Exercicio05\n\n");

//Inicio do Programa//
    while(numero<=0)
    {
        printf("Digite a quantidade de de termos que seja maior que 0: ");
        scanf("%d", &numero);
    }
    for(i=0;i<numero;i++)
    {
        if(i==0)
        {
            printf("0, ");
        }else if(i==1 || i==2)   //Operador Logico ||  é o (OU)//
        {
            printf("1, ");
            total=total+1;
        }else
        {
            proximo=anterior+atual;
            anterior=atual;
            atual=proximo;
            printf("%i, ",proximo);
            total=total+atual;
        }
    }
   
}



#include <stdio.h>
//Faça um programa que leia 12 números inteiros positivos e, ao final, faça a exibição do resultado da soma dos números ímpares e dos números pares.//

void exercicio6(){
    //Declaração de variaveis//
    int numero, numeropar = 0, numeroimpar = 0, i = 1;

 //Cabeçalho//
    printf("Exercicio06\n\n");

    //Inicio do Programa//
    for(i >= 1; i <= 12; i++){
    printf("Digite o %i numero: ", i);
    scanf("%i", &numero);

    if(numero % 2 == 0  ){
        numeropar = numeropar + numero;

    }else{
        numeroimpar = numeroimpar + numero;
         }
    }
    printf("\nA soma dos numeros pares sao: %i", numeropar);
    printf("\nA soma dos numeros impares sao: %i: ", numeroimpar);

}


#include <stdio.h>
//O  professor  da  disciplina  LPF  (Linguagem  de  Programação  Fácil)  precisa  calcular  as  médias aritméticas alcançadas por seus alunos para o semestre corrente. Para isto, faça um programa que receba os valores das 5 avaliações realizadas e exiba a média final.//

void exercicio7(){
    
    //Declaração de variaveis//
    float nota, media, soma = 02;
    int i = 1;

    //Cabeçalho//
printf("Exercicio07\n\n");

//Inicio do Programa//
    while(i <= 5){
        printf("Digite a %da nota: ", i);
        scanf("%f", &nota);
        while(nota < 0 || nota > 10){    //Operador OU
            printf("Nota nao valida,\nDigite denovo %da nota: ", i);
            scanf("%f", &nota);
        }

        soma = nota + soma;
        i++;
        
    }

    media = soma / 5;
    printf("\nA nota final do aluno sera: %.3f",media);

}

#include <stdio.h>
//Faça um programa que leia um número N positivo e mostre na tela os N primeiros números pares que são ao mesmo tempo divisíveis por 4 e por 7.//
void exercicio8(){
    //Declaração de variaveis//
  int numero [30], final, i;
   //Cabeçalho//
    printf("Exercicio8\n\n");
  //Inicio do Programa//
  printf("Insira o valor: ");
  scanf("%d", &final);  

  for( i = 1 ; i<= final; i++ ){
    printf(" \nEscreva o %d numero: ", i);
    scanf("%d", &numero[i]);   
  }
    printf("os numeros pares que são divisiveis por 4 e 7: ");
  printf("Os numeros pares que são divisiveis por 4: ");
}

#include<stdio.h>

void exercicio9(){
    
    //Declaração de variaveis//
  float Josevaldo = 1.35, Rafonildo = 1.07;
  int ano = 0;
  
  //Cabeçalho//
printf("Exercicio09\n\n");

//Inicio do Programa//
  while(Rafonildo < Josevaldo){  //While com a condição de que a altura de Rafonildo seja menor que a do Josevaldo//
  Josevaldo = Josevaldo + 0.02; //0.02 e 0.03 seria os valores em CM de crescimento de ambos.//
  Rafonildo = Rafonildo + 0.03;
  ano++;
  }
  printf("A quantidade de anos sera de %d ", ano);
  }
  

  #include <stdio.h>
//Crie  um  programa que seja capaz de realizar o cálculo de exponenciação para qualquer base e expoentes fornecidos pelo usuário. O cálculo deve ser realizado sem a utilização de função pronta do C.//
void exercicio10(){
//Declaração de variaveis//
    int x, y , r = 1;

   //Cabeçalho//
    printf("Exercicio10\n\n");

 //Inicio do Programa//
    printf("Insira a a base: ");
    scanf("%d", &x);
    printf("Insira o expoente: ");
    scanf("%d", &y);
    for (int i = 0; i < y; i++)
    {
        r = r * x;
    }
    printf("O numero  %d elevado a %d e de : %d", y, x, r);
}
  
  


  
  void menu(){
  printf("Lista2");
  printf("\n\n1- exercicio1- Maior e Menor \n2- exercicio2- Sequencia de numeros com soma \n3- exercicio3- Encerrar com valor 0 \n4- exercicio4- intervalo entre 1000 e 1999 \n5- exercicio5- Termos da sequencia \n6- exercicio6- soma dos números ímpares e dos números pares. \n7- exercicio7- medias \n8- exercicio8- divisíveis por 4 e por 7.  \n9- exercicio9- Josevaldo e Rafonildo \n10- exercicio10- Exponenciação\n ");
  printf("0-Sair\n");
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
