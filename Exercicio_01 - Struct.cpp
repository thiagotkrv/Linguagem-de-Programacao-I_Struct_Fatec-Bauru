#include <stdio.h>
#include <stdlib.h>
struct banda{
	char nome [50], tipo_musica [50];
	int num_integrantes;
	float valor_show;
};

main (){
	banda a1;
	printf("[] Digite os dados da Banda []");
	printf("\n[] Nome: ");
	gets(a1.nome);
	printf("[] Estilo Musical: ");
	gets(a1.tipo_musica);
	printf("[] Numero de Integrantes: ");
	scanf("%i", &a1.num_integrantes);
	printf("[] Valor do Show: R$ ");
	scanf("%f", &a1.valor_show);
	system("cls");
	printf("[] Dados da Banda []");
	printf("\n[] Nome: %s", a1.nome);
	printf("\n[] Estilo Musical: %s", a1.tipo_musica);
	printf("\n[] Numero de Integrantes: %i", a1.num_integrantes);
	printf("\n[] Valor do Show: R$ %.2f", a1.valor_show);
}
