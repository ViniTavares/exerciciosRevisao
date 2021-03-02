#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	char nomeDaBanda[11];
	char tipoDeMusica[21];
	int numeroDeIntegrantes;
	int posicaoDoRanking ;


}Dados;

Dados preencher(Dados dados[]) {
	int c = 0;
	
	for (int i = 0; i < 5; i++) {
		
		printf("Nome da banda:\n");
		fgets(dados[i].nomeDaBanda, 11, stdin);
		dados[i].nomeDaBanda[strcspn(dados[i].nomeDaBanda, "\n")] = '\0';
		setbuf(stdin, NULL);
		
		printf("Tipo musical:\n");
		fgets(dados[i].tipoDeMusica, 21, stdin);
		dados[i].tipoDeMusica[strcspn(dados[i].tipoDeMusica, "\n")] = '\0';
		setbuf(stdin, NULL);
		
		printf("Numero de integrantes:\n");
		scanf("%i", &dados[i].posicaoDoRanking);
		
		do{
			printf("Posicao no ranking (1-5):\n");
			scanf("%i", &dados[i].numeroDeIntegrantes);
			if (dados[i].numeroDeIntegrantes < 1 || dados[i].numeroDeIntegrantes >5) {
				c++;
			}
			else {
				c = 0;
			}
		} while (c!=0);
	}
}

Dados exibir(Dados dados[]) {


	for (int i = 0; i < 5; i++) {

		printf("Nome da banda: %s\n", dados[i].nomeDaBanda);
		

		printf("Tipo musical: %s\n", dados[i].tipoDeMusica);
		

		printf("Numero de integrantes: %i\n", dados[i].posicaoDoRanking);
		

		printf("Posicao no ranking: %i\n", dados[i].numeroDeIntegrantes);
		

	}
}


Dados exibirPorRanking(Dados dados[]) {
	
	int n = 0;
	
	while (n<1 ||n>5) {
		
		printf("Digite a posicao da banda (1-5):\n");
		scanf("%i", &n);
	}
	for (int i = 0; i < 5; i++) {
		
		if (dados[i].posicaoDoRanking == n) {
			printf("Nome da banda: %s\n", dados[i].nomeDaBanda);


			printf("Tipo musical: %s\n", dados[i].tipoDeMusica);


			printf("Numero de integrantes: %i\n", dados[i].posicaoDoRanking);


			printf("Posicao no ranking: %i\n", dados[i].numeroDeIntegrantes);
		}

	}
}
int main()
{
	

	Dados dados[5];
	preencher(dados);
	exibir(dados);
	exibirPorRanking(dados);
}




