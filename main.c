/* Programa baseado no vídeo do link: https://youtu.be/Y-vIeBCblZk */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

char nome[SIZE] [50];
char email[SIZE] [50];
int cpf[SIZE];
int op;
void cadastrar();
//void pesquisa();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	do
	{
		system("cls");
		printf("\n_____ MENU _____\n1 - Cadastrar\n2 - Listar todos\n3 - Pesquisar\n4 - Sair \n\nOpcao: ");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
				cadastrar();
				break;
				
			case 2:
				listar();
				break;
				
			case 3:
				pesquisar();
				break;
				
			case 4:
				system("exit");
				break;
				
			default:
				printf("\nOpção inválida!");
				break;
		}
		
	}
	while(op!=4);
	
}


/* Criando a função de cadastro de pessoas*/
void cadastrar(){
	static int linha;
	do
	{
		printf("\n Digite o nome da pessoa: ");
		scanf("%s", &nome[linha]);
		printf("\n Digite o email da pessoa: ");
		scanf("%s", &email[linha]);
		printf("\n Digite o cpf da pessoa: ");
		scanf("%d", &cpf[linha]);
		printf("\n Digite 1 para continuar ou outro valor para sair: ");
		scanf("%d", &op);
		linha++;
	}
	while(op==1);
}


/* Criando a função de pesquisa de pessoas*/
void pesquisar(){
	
	int cpfPesquisa;
	char emailPesquisa[50];
	int i;
	
	do
	{
		printf("\n Digite 1 para pesquisar por CPF ou 2 para pesquisar por email: ");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
				printf("\n Digite o CPF da pessoa: ");
				scanf("%d", &cpfPesquisa);
				for(i=0; i<SIZE;i++)
				{
					if(cpf[i]==cpfPesquisa)
					{
						printf("\n Nome: %s \n Email: %s \n CPF: %d", nome[i], email[i], cpf[i]);
					}
				}
				break;
				
			case 2:
				printf("\n Digite o email da pessoa: ");
				scanf("%s", &emailPesquisa);
				for(i=0; i<SIZE;i++)
				{
					if(strcmp(email[i], emailPesquisa)==0)
					{
						printf("\n Nome: %s \n Email: %s \n CPF: %d", nome[i], email[i], cpf[i]);
					}
				}
				break;
				
			default:
				printf("\n Opção inválida!");
				break;	
		}
		
		printf("\n Digite 1 para continuar pesquisando ou digite outra coisa para sair: ");
		scanf("%d", &op);
	}
	while(op==1);
}


void listar()
{
	int i;
	for(i=0; i<SIZE; i++)
	{
		if(cpf[i] > 0)
		{
			printf("\n Nome: %s \n Email: %s \n CPF: %d \n", nome[i], email[i], cpf[i]);
		}
		else
		{
			break;
		}		
	}
	getchar();
	getchar();
}

