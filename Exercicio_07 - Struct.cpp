#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


struct lutador{
	char nome[50];
	int poder;
};

main (){
	lutador a[5], b[5];
	int indice, vitorias_1=0, vitorias_2=0;
	
	
	for (indice=0; indice<5; indice++){
	printf("[] Escolha os lutadores de Player 1[]");
	printf("\n[] Digite o nome: ");
	fflush (stdin);
	gets(a[indice].nome);
	a[indice].poder=rand() %100;
	system("cls");
	}
	for (indice=0; indice<5; indice++){
	printf("[] Escolha os lutadores de Player 2[]");
	printf("\n[] Digite o nome: ");
	fflush (stdin);
	gets(b[indice].nome);
	b[indice].poder=rand() %100;
	system("cls");
	}
	
	for (indice=0; indice<5; indice++){
	printf("\n\n[] Detalhes da %ia Luta []", (indice+1));
	printf("\n\n[] %io Lutador do Player 1 []", (indice+1));
	printf("\n[] Nome: %s", a[indice].nome);
	printf("\n[] Poder do Lutador: %i", a[indice].poder);
	printf("\n\n[] %io Lutador do Player 2 []", (indice+1));
	printf("\n[] Nome: %s", b[indice].nome);
	printf("\n[] Poder do Lutador: %i", b[indice].poder);
	if(a[indice].poder > b[indice].poder){
		printf("\nVitoria do Player 1!");
		vitorias_1++;
	} else {
		printf("\nVitoria do Player 2!");
		vitorias_2++;
	}
	}
	printf("\nFIM DE JOGO");
	if(vitorias_1 > vitorias_2){
		printf("\nO Player 1 e o campeao!");
	} else {
		printf("\nO Player 2 e o campeao!");
	}
}
