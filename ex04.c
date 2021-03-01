#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int* p;
	int n;

	printf("Digite o tamanho do vetor:\n");
	scanf("%i", &n);

	p = (int*)(malloc(n * sizeof(int)));

	if (p == NULL) {
		printf("ERRO\n");
		exit(1);
	}


	for (int i = 0; i < n; i++) {
		printf("Digite o valor do vetor[%i]:\n", i);
		scanf("%i", &p[i]);
	}

	printa(n, p);

	free(p);
}
int printa(int n, int* p) {
	for (int i = 0; i < n; i++)
	{
		printf("elemento[%i]: %i\n", i, p[i]);
	}
}




