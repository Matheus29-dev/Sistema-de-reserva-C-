#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct reserva
	{
		char nome[50];
		int cpf;
		int dia_reserva;
		int nPessoas;
	};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	struct reserva lista[10]={0};
	int i, op,dia=0;
	int totalp[5]={0};
	
	op=0;
	while(op!=4)
	{
		printf("1- Fazer a reserva\n 2-Listar reserva\n 3-Total de pessoas por dia\n 4-Sair\n");
		printf("Digite o número da opção desejada:\n");
		scanf("%d", &op);
		fflush(stdin);
		if(op==1)
		{
			system("cls");
			for(i=0;i<10;i++)
			{
			
			
			printf("Digite o seu nome:\n");
			scanf("%49[^\n]s", &lista[i].nome);
			fflush(stdin);
			printf("Digite seu CPF:\n");
			scanf("%d", &lista[i].cpf);
			fflush(stdin);
			printf("Digite o número correspondente ao dia da reserva:\n 1-Quinta\n2-Sexta\n3-Sábado\n4-Domingo\n");
			scanf("%d", &lista[i].dia_reserva);
			fflush(stdin);
			if (lista[i].dia_reserva < 1 || lista[i].dia_reserva > 4)
			{
				printf("Dia inválido. Digite um valor entre 1 e 4.\n");
				i--;
				continue;
			}
			printf("Digite a quantidade de pessoas que irão:");
			scanf("%d", &lista[i].nPessoas);
			fflush(stdin);
			totalp[lista[i].dia_reserva]=totalp[lista[i].dia_reserva]+lista[i].nPessoas;
			system("cls");
			
			
		
		
	    	}
			
		 }
		 else
		 {
		 	if(op==2)
			 {
			 	system("cls");
		    	for(i=0;i<10;i++)
				{
					printf("\nNome: %s\n", lista[i].nome);
					printf("CPF: %d\n", lista[i].cpf);
					printf("Dia: %d\n", lista[i].dia_reserva);
					printf("Número de Pessoas: %d\n",lista[i].nPessoas);
				    printf("===============================\n");
				    
				}
		    	
			 }
	
			 else
			 {
			 	if(op==3)
				 {
				 	system("cls");
				 	printf("Digite o número correspondente ao dia da reserva:\n 1-Quinta\n2-Sexta\n3-Sábado\n4-Domingo\n:\n");
				 	scanf("%d", &dia);
				 	fflush(stdin);
				 	if (dia < 1 || dia > 4)
					 {
					 	printf("Dia inválido. Digite um valor entre 1 e 4.\n");
					 }
					 else
					 {
				 	printf("O número total de pessoas que irão nesse dia é: %d\n", totalp[dia] );
				 	system("pause");
				     }
		       	}
				 	
				 	else
					 {
					 	if(op==4)
						 {
						 	printf("Encerrar programa");
						 }
					 }
				 	
				 	
				 
			 	
			 	
			 }
		 }
		
	}
	
	
	
	
	
	return 0;
}
