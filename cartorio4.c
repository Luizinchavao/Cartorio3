#include <stdio.h>  //biblioteca de texto de comunica��o com usu�rio
#include <stdlib.h>  //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro()

{   char arquivo[40]; // Char estamos criando o conjunto de banco de dados [40] significa que possui a quantidade m�xima de caracteres da variavel(String)
	char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
     
    printf("Digite o CPF a ser cadastrado: ");
    scanf("%s", cpf);            // Armazena a variavel, %s dentro da string  cpf
    
    strcpy(arquivo, cpf);       // Respons�vel por copiar os valores das sting
    
    FILE *file;                 // Cria o arquivo no banco de dados do computador
    file= fopen(arquivo, "w");  // Abre o arquivo e "w" write para escrever a informa�ao 
    fprintf(file, cpf);         // Salvo o valor da vari�vel cpf
    fclose(file);               // Fecha o arquivo
    
    file= fopen(arquivo, "a");  // Acessando o arquivo e "a" para atualizar a informa�ao
    fprintf(file,",");          // Salva o espa�o para separar a variavel por linha
    fclose(file);               // Fecha o arquivo atualizado
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);         // Salvar na string o que usuario digitou
    
    file= fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informa�ao
    fprintf(file, nome);       // Salva o espa�o para separar a variavel por linha
    fclose(file);              // Fecha o arquivo atualizado
    
    file= fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informa�ao
    fprintf(file,",");         // Salva o espa�o para separar a variavel por linha
    fclose(file);              // Fecha o arquivo atualizado
    
    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", sobrenome);
    
    file= fopen(arquivo,"a");
    fprintf(file, sobrenome);
    fclose(file);
    
    file= fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s", cargo);
    
    file= fopen(arquivo,"a");
    fprintf(file, cargo);
    fclose(file);
	
	system("pause");// N�o precisamos colocar v�rgula pq ja � o final
		     
}

int consulta()          // Nao tem ; pq estamos criando uma fun�ao
 {
	
	setlocale(LC_ALL, "portuguese"); //Definindo a linguagem que podemos usar acentos  
	
	char cpf[40];
	char conteudo[200];
	char *token;
	
    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);//Armazenando a variavel "cpf" utilizando a fun�ao string %s
   
    FILE *file;
    file = fopen(cpf,"r");// Abre o arquivo cpf  e "r" read = ler a informa�ao
	  
    
    if(file == NULL)            // Se a informa�ao nao existir fala isso para o usuario / NULL= Isso � uma condi�ao nao tem ; ponto e virgula
    {	
        printf("N�o foi poss�vel abrir o arquivo, n�o localizado!.\n ");
    }
	while(fgets(conteudo, 200, file) != NULL)// Valida�ao de nulo  "While" Enquanto tiver conte�do dentro desse arquivo ela vai armazenando dentro da variavel conteudo
     {               
	
    	printf("\n Essas s�o as informa��es do usu�rio: \n "); //Informa�ao a aparecer antes dos dados
    	
        token = strtok(conteudo, ",");     //Variavel utilizada para dividir a string em linhas
	    printf("CPF: %s\n", token);        //Informa�ao a aparecer antes dos dados do CPF
     	
     	token = strtok(NULL, ",");        //Variavel utilizada para dividir a string em linhas
     	printf("Nome: %s\n" , token);     //Informa�ao a aparecer antes dos dados do nome
     	
     	token = strtok(NULL, ",");        //Variavel utilizada para dividir a string em linhas
     	printf("Sobrenome: %s\n" , token);//Informa�ao a aparecer antes dos dados do sobrenome
     	
     	token = strtok(NULL, ",");        //Variavel utilizada para dividir a string em linhas
     	printf("cargo: %s\n" ,token);     //Informa�ao a aparecer antes dos dados do cargo

     }
     
     
        printf("\n");     // Comando utilizado para pular uma linha no final
		                    
        system("pause");
}

int deletar()

{   printf("Voc� escolheu deletar os nomes!\n"); 
	system("pause");
}


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
        	registro();
			break;
			
			case 2: 
			consulta();
			break;
			
			case 3:
		    deletar();
			break;
			
					
			default:
			printf("Essa Op��o n�o est� dispon�vel!\n");
			system("pause");
			break;
			
        }//Fim da sele�ao
    }
 }
      
         
