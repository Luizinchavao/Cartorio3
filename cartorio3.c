#include <stdio.h>  //biblioteca de texto de comunica��o com usu�rio
#include <stdlib.h>  //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o


int main ()  
{
    int opcao=0; //Definindo vari�veis que equivale a 0. // 1 igual(=) esta atribuindo o valor
    int laco=1;
    
    for (laco=1;laco=1;)
    {
	     system("cls");
         setlocale(LC_ALL, "portuguese"); //Definindo a linguagem que podemos usar acentos  
	      
	      
         printf("### Cart�rio da EBAC ###\n\n"); //In�cio do menu
         printf("Escolha a Op��o desejada no menu: \n\n");
         printf("\t1 - Registrar nomes:\n");
         printf("\t2 - Consultar nomes:\n");
         printf("\t3 - Deletar nomes:\n\n\n");
	     printf("Op��o:"); // FIm do menu 
        
         scanf("%d", &opcao); //Armazenando  a escolha do usuario/Armazenando na variavel opcao o valor que o usuario digitar/
      
         system("cls"); // O sistema vai deletar todas as mensagens limpar a tela
         
         switch(opcao) // Computador Analisa essa variavel pra mim 
        {
        	case 1: // Caso a op�ao for 1
        	printf("Voc� escolheu o registro de nomes!\n");
			system("pause"); // Pausa o sistema no momento
			break;
			
			case 2: 
			printf("Voc� escolheu consultar os nomes!\n");
			system("pause");
			break;
			
			case 3:
		    printf("Voc� escolheu deletar os nomes!\n"); 
		    system("pause");
			break;
			
			default:
			printf("Essa Op��o n�o est� dispon�vel!\n");
			system("pause");
			break;
			
        }//Fim da sele�ao
    }
}
      
         
