#include <stdio.h>
#include <stdlib.h>
struct livros{
	char titulo[50];
	int ano_edicao, num_paginas;
	float preco;
};

main (){
	livros v[5];
	int indice, total_paginas=0, media_paginas;
	
	
	for (indice=0; indice<5; indice++){
	printf("[] Cadastramento de Livros []");
	printf("\n[] Digite o titulo do livro: ");
	fflush (stdin);
	gets(v[indice].titulo);
	printf("[] Ano de edicao: ");
	scanf("%i", &v[indice].ano_edicao);
	printf("[] Quantidade de paginas: ");
	scanf("%i", &v[indice].num_paginas);
	printf("[] Preco: R$ ");
	scanf("%f", &v[indice].preco);
	total_paginas=total_paginas+v[indice].num_paginas;
	system("cls");
	}
	media_paginas=total_paginas/5;
	for (indice=0; indice<5; indice++){
	printf("\n\n[] Dados do %io livro []", (indice+1));
	printf("\n[] Titulo: %s", v[indice].titulo);
	printf("\n[] Ano de edicao: %i", v[indice].ano_edicao);
	printf("\n[] Quantidade de paginas: %i", v[indice].num_paginas);
	printf("\n[] Preco: R$ %.2f", v[indice].preco);
	}
	printf("\n\n[] A media de paginas dos livros e de %i paginas.", media_paginas);
}
