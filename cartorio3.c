#include <stdio.h>  //biblioteca de texto de comunica��o com usu�rio
#include <stdlib.h>  //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o


int main () 
{ 
      int opcao=0; //Definindo vari�veis que equivale a 0. // 1 igual(=) esta atribuindo o valor
      
      setlocale(LC_ALL, "portuguese"); //Definindo a linguagem que podemos usar acentos  
	      
      printf("### Cart�rio da EBAC ###\n\n"); //In�cio do menu
      printf("Escolha a Op��o desejada no menu: \n\n");
      printf("\t1 - Registrar nomes:\n");
      printf("\t2 - Consultar nomes:\n");
      printf("\t3 - Deletar nomes:\n\n\n");
	  printf("Op��o:"); // FIm do menu 
      
      scanf("%d", &opcao); //Armazenando  a escolha do usuario                 Armazenando na variavel opcao o valor que o usuario digitar/
      
      system("cls"); // O sistema vai deletar todas as mensagens limpar a tela
      
      if(opcao==1) // In�cio da Sele�ao                2 Igual == Esta fazendo uma compara�ao
      {
      	printf("Voc� escolheu o registro de nomes!");
      }	
      if(opcao==2)	
      {
	    printf("Voc� escolheu consultar os nomes!");
	  }
      if(opcao==3) // Sempre vai perguntando para o computador ex:  if= se a variavel opcao que � igual = 3 . Entao computador voc� fala para o usuario no printf
      {
      	printf("Voc� escolheu deletar os nomes!"); // Ponto e virgula = ; sempre usar qundo for uma instru�ao para o computador
	  }
      if(opcao >=4 || opcao <=0) // || essa tecla chama-se PAIPE significa Ou, EX: computador se o valor que o usuario digitar for >=4 ou <=0 fala o que esta no printf
      {
      	printf("Essa op��o n�o est� dispon�vel!");
      	
	  }         // fim da sele�ao
     	  
} 
   
   
