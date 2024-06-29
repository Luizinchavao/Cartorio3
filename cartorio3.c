#include <stdio.h>  //biblioteca de texto de comunicação com usuário
#include <stdlib.h>  //biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região

int registro()

{	printf("Você escolheu o registro de nomes!\n");
	system("pause");
}

int consulta() // nao tem ; pq estamos criando uma funçao

{   printf("Você escolheu consultar os nomes!\n");
	system("pause");
}

int deletar()

{   printf("Você escolheu deletar os nomes!\n"); 
	system("pause");
}


int main ()  

    {
    int opcao=0; //Definindo variáveis que equivale a 0. // 1 igual(=) esta atribuindo o valor
    int laco=1;
    
    for (laco=1;laco=1;)
    {
	     system("cls");
         setlocale(LC_ALL, "portuguese"); //Definindo a linguagem que podemos usar acentos  
	      
	      
         printf("### Cartório da EBAC ###\n\n"); //Início do menu
         printf("Escolha a Opção desejada no menu: \n\n");
         printf("\t1 - Registrar nomes:\n");
         printf("\t2 - Consultar nomes:\n");
         printf("\t3 - Deletar nomes:\n\n\n");
	     printf("Opção:"); // FIm do menu 
        
         scanf("%d", &opcao); //Armazenando  a escolha do usuario/Armazenando na variavel opcao o valor que o usuario digitar/
      
         system("cls"); // O sistema vai deletar todas as mensagens limpar a tela
         
         switch(opcao) // Computador Analisa essa variavel pra mim 
        {
        	case 1: // Caso a opçao for 1
        	registro();
			break;
			
			case 2: 
			consulta();
			break;
			
			case 3:
		    deletar();
			break;
			
					
			default:
			printf("Essa Opção não está disponível!\n");
			system("pause");
			break;
			
        }//Fim da seleçao
    }
}
      
         
