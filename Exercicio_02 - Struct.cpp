#include <stdio.h>
#include <stdlib.h>
struct pesquisa{
	char sexo;
	int idade, num_filhos;
	float salario;
};

main (){
	pesquisa v[500];
	int indice;
	
	for (indice=0; indice<500; indice++){
	printf("[] Questionario de Pesquisa []");
	printf("\n[] M para Masculino - F para Feminino []");
	printf("\n[] Digite o sexo: ");
	fflush (stdin);
	scanf("%c", &v[indice].sexo);
	printf("[] Idade: ");
	scanf("%i", &v[indice].idade);
	printf("[] Quantidade de Filhos: ");
	scanf("%i", &v[indice].num_filhos);
	printf("[] Salario: R$ ");
	scanf("%f", &v[indice].salario);
	system("cls");
	}
	printf("[] Dados da Pesquisa []");
	for (indice=0; indice<500; indice++){
	printf("\n\n[] Formulario %i []", (indice+1));
	printf("\n[] Sexo: %c", v[indice].sexo);
	printf("\n[] Idade: %i", v[indice].idade);
	printf("\n[] Quantidade de Filhos: %i", v[indice].num_filhos);
	printf("\n[] Salario: R$ %.2f", v[indice].salario);
	}
}
