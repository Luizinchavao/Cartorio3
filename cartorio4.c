#include <stdio.h>  //biblioteca de texto de comunicação com usuário
#include <stdlib.h>  //biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string

int registro()

{   char arquivo[40]; // Char estamos criando o conjunto de banco de dados [40] significa que possui a quantidade máxima de caracteres da variavel(String)
	char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
     
    printf("Digite o CPF a ser cadastrado: ");
    scanf("%s", cpf);            // Armazena a variavel, %s dentro da string  cpf
    
    strcpy(arquivo, cpf);       // Responsável por copiar os valores das sting
    
    FILE *file;                 // Cria o arquivo no banco de dados do computador
    file= fopen(arquivo, "w");  // Abre o arquivo e "w" write para escrever a informaçao 
    fprintf(file, cpf);         // Salvo o valor da variável cpf
    fclose(file);               // Fecha o arquivo
    
    file= fopen(arquivo, "a");  // Acessando o arquivo e "a" para atualizar a informaçao
    fprintf(file,",");          // Salva o espaço para separar a variavel por linha
    fclose(file);               // Fecha o arquivo atualizado
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);         // Salvar na string o que usuario digitou
    
    file= fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informaçao
    fprintf(file, nome);       // Salva o espaço para separar a variavel por linha
    fclose(file);              // Fecha o arquivo atualizado
    
    file= fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informaçao
    fprintf(file,",");         // Salva o espaço para separar a variavel por linha
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
	
	system("pause");// Não precisamos colocar vírgula pq ja é o final
		     
}

int consulta()          // Nao tem ; pq estamos criando uma funçao
 {
	
	setlocale(LC_ALL, "portuguese"); //Definindo a linguagem que podemos usar acentos  
	
	char cpf[40];
	char conteudo[200];
	char *token;
	
    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);//Armazenando a variavel "cpf" utilizando a funçao string %s
   
    FILE *file;
    file = fopen(cpf,"r");// Abre o arquivo cpf  e "r" read = ler a informaçao
	  
    
    if(file == NULL)            // Se a informaçao nao existir fala isso para o usuario / NULL= Isso é uma condiçao nao tem ; ponto e virgula
    {	
        printf("Não foi possível abrir o arquivo, não localizado!.\n ");
    }
	while(fgets(conteudo, 200, file) != NULL)// Validaçao de nulo  "While" Enquanto tiver conteúdo dentro desse arquivo ela vai armazenando dentro da variavel conteudo
     {               
	
    	printf("\n Essas são as informações do usuário: \n "); //Informaçao a aparecer antes dos dados
    	
        token = strtok(conteudo, ",");     //Variavel utilizada para dividir a string em linhas
	    printf("CPF: %s\n", token);        //Informaçao a aparecer antes dos dados do CPF
     	
     	token = strtok(NULL, ",");        //Variavel utilizada para dividir a string em linhas
     	printf("Nome: %s\n" , token);     //Informaçao a aparecer antes dos dados do nome
     	
     	token = strtok(NULL, ",");        //Variavel utilizada para dividir a string em linhas
     	printf("Sobrenome: %s\n" , token);//Informaçao a aparecer antes dos dados do sobrenome
     	
     	token = strtok(NULL, ",");        //Variavel utilizada para dividir a string em linhas
     	printf("cargo: %s\n" ,token);     //Informaçao a aparecer antes dos dados do cargo

     }
     
     
        printf("\n");     // Comando utilizado para pular uma linha no final
		                    
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
      
         
