#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
	FILE* file;
	FILE* fileB;
	char conteudoDoArquivo[50];
	char nomeDoArquivo[21];
	int numeroDeLinhas = 0;


	printf("Digite o nome do aquivo a ser lido:\n");
	fgets(nomeDoArquivo, 21, stdin);
	nomeDoArquivo[strcspn(nomeDoArquivo, "\n")] = '\0';
	setbuf(stdin, NULL);

	file = fopen(nomeDoArquivo, "r");
	fileB = fopen("Resultado.txt", "w");

	if (file == NULL) {
		printf("Arquivo nao existe");
		exit(0);
	}

	while (!feof(file)) {
		fgets(conteudoDoArquivo, 100, file);
		for (int i = 0; i < strlen(conteudoDoArquivo); i++) {
			if (conteudoDoArquivo[i] == 'a' || conteudoDoArquivo[i] == 'e' || conteudoDoArquivo[i] == 'i' || conteudoDoArquivo[i] == 'o' || conteudoDoArquivo[i] == 'u')
				conteudoDoArquivo[i] = '*';
		}

		fprintf(fileB, conteudoDoArquivo);
		numeroDeLinhas++;
	}





	printf("Numero de linhas: %i\n", numeroDeLinhas);




	fclose(file);
	fclose(fileB);



}





