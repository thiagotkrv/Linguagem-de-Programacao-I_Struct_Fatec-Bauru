#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct aluno{
	char nome [50];
	int matricula;
	float nota1, nota2, media;
};

main (){
	aluno a[5];
	char op2;
	int indice=0, ref=0, op1;
	float maior=0, menor_med=0, maior_med=0;
	
	for (indice=0; indice<5; indice++){
	printf("[] Aluno de Introducao a Programacao []\n\n");
	printf("Nome do aluno: ");
	fflush (stdin);
	gets(a[indice].nome);
	printf("Matricula: ");
	scanf("%i", &a[indice].matricula);
	printf("Nota 1: ");
	scanf("%f", &a[indice].nota1);
	printf("Nota 2: ");
	scanf("%f", &a[indice].nota2);
	a[indice].media=(a[indice].nota1+a[indice].nota2)/2;
	system("cls");
    }
    do{
	    do{
	    printf("Digite a opcao que deseja exibir conforme abaixo: ");
	    printf("\n[1] - Aluno com a maior nota da primeira prova;");
	    printf("\n[2] - Aluno com a maior media geral;");
	    printf("\n[3] - Aluno com a menor media geral;");
		scanf("%i", &op1);
			if (op1 < 1 && op1 > 3){
				printf("Categoria Invalida!");
				getch();
		}
		}
		while (op1 < 1 && op1 > 3);
		fflush (stdin);
		switch (op1){
			case 1:
				for (indice=0; indice<5; indice++){
					if (a[indice].nota1 > maior){
						maior=a[indice].nota1;
						ref=indice;
					}
				}
			printf("O aluno com a maior nota na primeira prova e %s", a[ref].nome);
			printf("\nNota: %.1f", a[ref].nota1);
			break;
			case 2:
				for (indice=0; indice<5; indice++){
					if (a[indice].media > maior_med){
						maior_med=a[indice].media;
						ref=indice;
					}
				}
			printf("O aluno com a maior media geral e %s", a[ref].nome);
			printf("\nNota: %.1f", a[ref].media);
			break;
			case 3:
				for (indice=0; indice<5; indice++){
					if (a[indice].media < menor_med){
						menor_med=a[indice].media;
						ref=indice;
				}
				}
			printf("O aluno com a menor media geral e %s", a[ref].nome);
			printf("\nNota: %.1f", a[ref].media);
			break;
		}
		getch();
		system("cls");
		do{
		printf("Deseja realizar outra consulta? \nS - Sim | N - Nao: ");
		fflush (stdin);
		scanf("%c", &op2);
			if (op2 != 'S' && op2 != 's' && op2 != 'N' && op2 != 'n'){
				printf("Categoria Invalida!");
				getch();
			}
		}
		while (op2 != 'S' && op2 != 's' && op2 != 'N' && op2 != 'n');
	system("cls");
	}
	while (op2 == 'S' || op2 == 's');
	printf("[] Panorama Geral - Introducao a Programacao []");
	printf("\n\n\n");
	for (indice=0; indice<5; indice++){
		printf("Nome: %s", a[indice].nome);
		printf("\nMatricula: %i", a[indice].matricula);
		printf("\nNota 1: %.1f", a[indice].nota1);
		printf("\nNota 2: %.1f", a[indice].nota2);
		printf("\nMedia: %.1f", a[indice].media);
		if(a[indice].media > 6.0){
			printf("O aluno foi aprovado na disciplina!");
		} else{
			printf("O aluno foi reprovado na disciplina!");
		}
	}
}

