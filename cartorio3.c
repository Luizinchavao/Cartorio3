#include <stdio.h>  //biblioteca de texto de comunicação com usuário
#include <stdlib.h>  //biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região


int main () 
{ 
      int opcao=0; //Definindo variáveis que equivale a 0. // 1 igual(=) esta atribuindo o valor
      
      setlocale(LC_ALL, "portuguese"); //Definindo a linguagem que podemos usar acentos  
	      
      printf("### Cartório da EBAC ###\n\n"); //Início do menu
      printf("Escolha a Opção desejada no menu: \n\n");
      printf("\t1 - Registrar nomes:\n");
      printf("\t2 - Consultar nomes:\n");
      printf("\t3 - Deletar nomes:\n\n\n");
	  printf("Opção:"); // FIm do menu 
      
      scanf("%d", &opcao); //Armazenando  a escolha do usuario                 Armazenando na variavel opcao o valor que o usuario digitar/
      
      system("cls"); // O sistema vai deletar todas as mensagens limpar a tela
      
      if(opcao==1) // Início da Seleçao                2 Igual == Esta fazendo uma comparaçao
      {
      	printf("Você escolheu o registro de nomes!");
      }	
      if(opcao==2)	
      {
	    printf("Você escolheu consultar os nomes!");
	  }
      if(opcao==3) // Sempre vai perguntando para o computador ex:  if= se a variavel opcao que é igual = 3 . Entao computador você fala para o usuario no printf
      {
      	printf("Você escolheu deletar os nomes!"); // Ponto e virgula = ; sempre usar qundo for uma instruçao para o computador
	  }
      if(opcao >=4 || opcao <=0) // || essa tecla chama-se PAIPE significa Ou, EX: computador se o valor que o usuario digitar for >=4 ou <=0 fala o que esta no printf
      {
      	printf("Essa opção não está disponível!");
      	
	  }         // fim da seleçao
     	  
} 
   
   
