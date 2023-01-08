#include <stdio.h>
#include <math.h> // essa biblioteca fornece um conjunto de funções para operações matemáticas, tais como funções trigonométricas, hiperbólicas, logaritmos, potência e arredondamentos.//


void exercicio1() {

  float horapaga, horasemana, desconto;
  
  
  
  
  printf("Calculo Salario\n"); 
  printf("Digite o valor pago por hora trabalhada: R$");
  scanf("%f", &horapaga);
  
  printf("Digite quantas horas trabalhadas na semana: ");
  scanf("%f", &horasemana);
  
  printf("Digite o valor do desconto do INSS: ");
  scanf("%f", &desconto);

  float salariobase =  (horapaga * horasemana) * 4.5;

  float salario = salariobase - (salariobase * desconto / 100);
  
  printf("\nSeu salario bruto e R$%.3f Com o desconto do INSS o salario sera de %.3f", salariobase, salario);  //.3 é o numero de casas depois da virgula // 
  return 0;
} 

void exercicio2() {
     printf("               Exercicio 2 - Media Ponderada\n");
  float nota1, nota2, nota3, nota4, nota5, mediaponderada;
  int peso1, peso2, peso3, peso4, peso5;

  printf("Digite 5 notas separadas : ");
  scanf("%f%f%f%f%f", &nota1, &nota2, &nota3, &nota4, &nota5); 

  printf("Digite 5 pesos : ");
  scanf("%d%d%d%d%d", &peso1, &peso2, &peso3, &peso4, &peso5);

  
  mediaponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4 + nota5 * peso5);
  
  printf("A media ponderada sera de %.3f: ", mediaponderada);
    
  return 0;
}

void exercicio3() {
    printf("Exercicio 3 - Numero positivo e negativo\n\n");
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  if(numero > 0){
    printf("%i e positivo \n entao sua raiz quadrada sera de %.2f", numero, sqrt(numero));     //sqrt calcula raiz quadrada//
  } 
    
  if(numero < 0){
  printf("%i e negativo \n entao %i e o seu numero ao quadrado", numero, numero * numero);
  }
    
  if (numero == 0){
  printf("O valor que digitou e de zero");
    }
   
  return 0;
}

void exercicio4() {
    printf("Exercicio 4 - Distancia \n");
  int distancia, velocidade, tempo ;
  
  printf("Digite o tempo percorrido em minutos km/h: "); 
  scanf("%d", &tempo);

  printf("Digite a velocidade do carro em km/h : ");
  scanf("%d", &velocidade);
  distancia = (tempo * velocidade)  / 60;
  printf("A distancia sera de %dkm", distancia);
  
  return 0;
}

void exercicio5() {
    printf("Exercicio 5 - Divisivel 4 e 5 \n");

  int numero;
  printf("Digite o numero: ");
  scanf("%d", &numero);

  if (numero % 4 == 0 && numero % 5 == 0)
    printf("O numero %d e divisivel por 4 e 5", numero);
  
  else if(numero % 4 == 0 )
    printf("O numero %d e divisivel por 4", numero);
  
  else if(numero % 5 == 0)
    printf("O numero %d e divisivel por 5", numero);

  else
    printf("%d nao e divisivel por 4 e 5", numero);
    
  return 0;
}

void exercicio6() {
printf("Exercicio 6 - Equacao");
  
  float a, b, c, delta, x1, x2;
  
  printf("Digite o valor de a: ");
  scanf("%f", &a);
  
  printf("Digite o valor de b: ");
  scanf("%f", &b);
  
  printf("Digite o valor de c: ");
  scanf("%f", &c);

  if (a == 0){
    printf("nao e uma equação de segundo grau");
    return 0;
  }

  delta = pow(b, 2) - 4 * a * c;
  if(delta < 0){
    printf("Nao existe raiz real!");
    return 0;
  }
  if (delta == 0){
    x1 = ((-b + sqrt(delta)) / 2 * a);       // O valor de delta é dado pela seguinte expressão: Δ = b2 – 4ac, em que a, b e c são coeficientes da equação e Δ é delta. //
    printf("A unica raiz é %.2f", x1);       
  }

  else{
    x1 = ((-b + sqrt(delta)) / 2 * a);
    x2 = ((-b - sqrt(delta)) / 2 * a);
    printf("A raizes e %.3f e %.3f", x1, x2);
  }
    
  return 0;
}

void exercicio7() {
     printf("Desafio - ASCII\n");

  char l1;
  printf("Entre com um caractere: ");
  l1 = getchar();               // A função getchar() retorna um valor, o caractere lido (mais precisamente, o código inteiro ASCII correspondente ao caractere)//

  printf("\nEntrou com a letra \"%c\"\nSeu valor em decimal e %i \nE em " "hexadecimal e %x ",                        // %x = número na base hexadecimal //
         l1, l1, l1);

  return 0;
}
// FALTA POR A FUNÇÃO DE LIMPAR, PARA QUE NÃO OCORRA BUGS NA DE SELECIONAR OS EXERCICIOS.//

void menu(){
  printf("Lista1");
  printf("\n\n1- exercicio1- Calculo salario \n2- exercicio2- Media \n3- exercicio3- Numero positivo e negativo \n4- exercicio4- Distancia \n5- exercicio5- Verificar divisivel 4 e 5 \n6- exercicio6- Equacao 2grau \n7- Desafio- ASCII");
  printf("\n0- SAIR\n");
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
          case 0:
            printf("\nFechando..");
            exit(0);
            break;
              return opcao;
          default:
              printf("\n\nOPÇÃO INVÁLIDA!!\n\nSelecione o número corresponde ao exercicio desejado\n\n");
              menu();
        }  
    }
  
}


  int main(){
    int opcao;
    menu();
    opcao = ler_opcao();
    printf("O usuario escolheu o exercicio %d", opcao);
    

    
  return 0;
}


