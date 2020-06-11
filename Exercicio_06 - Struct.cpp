#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct data{
	int dia, ano;
	char mes[10];
};
struct telefone{
	int ddd, numero;
};
struct endereco{
	int numero, cep;
	char rua[50], complemento[50], bairro[50], cidade[50], estado[50], pais[50];
};
struct agenda{
	int codigo;
	char nome[50], email[50], observacoes[50];
	struct data nasc;
	struct telefone tel;
	struct endereco adress;
};

main (){
	agenda p[3];
	int indice, op1, op3;
	char op2;
	
	
	for (indice=0; indice<3; indice++){
	printf("[] Cadastramento de Agenda []");
	p[indice].codigo=indice;
	printf("\n[] Nome: ");
	fflush (stdin);
	gets(p[indice].nome);
	printf("[] E-mail: ");
	gets(p[indice].email);
	printf("[] ENDERECO ");
	printf("\n[] Rua: ");
	gets(p[indice].adress.rua);
	printf("[] Numero: ");
	scanf("%i", &p[indice].adress.numero);
	printf("[] Complemento: ");
	fflush (stdin);
	gets(p[indice].adress.complemento);
	printf("[] Bairro: ");
	gets(p[indice].adress.bairro);
	printf("[] CEP: ");
	scanf("%i", &p[indice].adress.cep);
	printf("[] Cidade: ");
	fflush (stdin);
	gets(p[indice].adress.cidade);
	printf("[] Estado: ");
	gets(p[indice].adress.estado);
	printf("[] Pais: ");
	gets(p[indice].adress.pais);
	printf("[] TELEFONE ");
	printf("\n[] DDD: ");
	scanf("%i", &p[indice].tel.ddd);
	printf("[] Numero: ");
	scanf("%i", &p[indice].tel.numero);
	printf("[] DATA DE NASCIMENTO ");
	printf("\n[] Dia: ");
	scanf("%i", &p[indice].nasc.dia);
	printf("[] Mes: ");
	fflush (stdin);
	gets(p[indice].nasc.mes);
	printf("[] Ano: ");
	scanf("%i", &p[indice].nasc.ano);
	printf("[] OBSERVACOES: ");
	fflush (stdin);
	gets(p[indice].observacoes);
	system("cls");
	}
	do{
	    do{
	    printf("Escolha o que deseja exibir conforme abaixo: ");
	    printf("\n[1] - Buscar contato pelo codigo;");
	    printf("\n[2] - Mostrar todos os contatos registrados;");
	    printf("\nDigite a opcao desejada: ");
		scanf("%i", &op1);
			if (op1 < 1 && op1 > 2){
				printf("Categoria Invalida!");
				getch();
			}
		system("cls");
		}
		while (op1 < 1 && op1 > 2);
		fflush (stdin);
		switch (op1){
			case 1:
				printf("\n[] Digite o codigo do contato que deseja exibir: ");
				scanf("%i", &op3);
				system("cls");
				printf("\n[] Nome: %s", p[op3].nome);
				printf("\n[] E-mail: %s", p[op3].email);
				printf("\n[] ENDERECO ");
				printf("\n[] Rua: %s, numero %i, complemento %s, bairro %s, CEP %i, cidade %s, estado %s, pais %s", p[op3].adress.rua, p[op3].adress.numero, 
				p[op3].adress.complemento, p[op3].adress.bairro, p[op3].adress.cep, p[op3].adress.cidade, p[op3].adress.estado, p[op3].adress.pais);
				printf("\n[] TELEFONE ");
				printf("\n[] DDD: %i, numero: %i", p[op3].tel.ddd, p[op3].tel.numero);
				printf("\n[] DATA DE NASCIMENTO ");
				printf("\n[] Dia %i de %s de %i", p[op3].nasc.dia, p[op3].nasc.mes, p[op3].nasc.ano);
				printf("\n[] OBSERVACOES: %s", p[op3].observacoes);
			break;
			case 2:
				printf("[] Panorama Geral - Introducao a Programacao []");
				printf("\n\n\n");
				for (indice=0; indice<3; indice++){
					printf("\n[] Nome: %s", p[indice].nome);
					printf("\n[] E-mail: %s", p[indice].email);
					printf("\n[] ENDERECO ");
					printf("\n[] Rua: %s, numero %i, complemento %s, bairro %s, CEP %i, cidade %s, estado %s, pais %s", p[indice].adress.rua, p[indice].adress.numero, 
					p[indice].adress.complemento, p[indice].adress.bairro, p[indice].adress.cep, p[indice].adress.cidade, p[indice].adress.estado, p[indice].adress.pais);
					printf("\n[] TELEFONE ");
					printf("\n[] DDD: %i, numero: %i", p[indice].tel.ddd, p[indice].tel.numero);
					printf("\n[] DATA DE NASCIMENTO ");
					printf("\n[] Dia %i de %s de %i", p[indice].nasc.dia, p[indice].nasc.mes, p[indice].nasc.ano);
					printf("\n[] OBSERVACOES: %s", p[indice].observacoes);
				}
			break;
		}
		getch();
		system("cls");
		do{
		printf("Deseja realizar outra consulta? \nS - Sim | N - Nao: ");
		fflush (stdin);
		scanf("%c", &op2);
			if (op2 != 'S' && op2 != 's' && op2 != 'N' && op2 != 'n'){
				printf("Opcao Invalida!");
				getch();
			}
		}
		while (op2 != 'S' && op2 != 's' && op2 != 'N' && op2 != 'n');
	system("cls");
	}
	while (op2 == 'S' || op2 == 's');
	printf("\n\n\nFIM");
	}

