#include <stdio.h>
#include <stdlib.h>

struct data{
	char data_nasc[10];
};

struct pessoa{
	char nome[50];
	float altura;
	struct data nasc;
};

main (){
	pessoa p[10];
	int indice;
	
	
	for (indice=0; indice<10; indice++){
	printf("[] Cadastramento de Pessoas []");
	printf("\n[] Digite o nome: ");
	fflush (stdin);
	gets(p[indice].nome);
	printf("[] Altura: ");
	scanf("%f", &p[indice].altura);
	printf("[] Data de nascimento: ");
	fflush (stdin);
	gets(p[indice].nasc.data_nasc);
	system("cls");
	}
	printf("\n\n[] Dados Cadastrados []", (indice+1));
	for (indice=0; indice<10; indice++){
	printf("\n\n[] %io Cadastro []", (indice+1));
	printf("\n[] Nome: %s", p[indice].nome);
	printf("\n[] Altura: %.2f", p[indice].altura);
	printf("\n[] Data de nascimento: %s", p[indice].nasc.data_nasc);
	}
}
