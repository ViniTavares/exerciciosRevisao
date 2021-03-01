#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x = 0;
	int y = 0;
	int resultado = 0;

	printf("Digite a base:\n");
	scanf("%i", &x);
	printf("Digite o expoente:\n");
	scanf("%i", &y);

	resultado = recursao(x, y);

	printf("%i", resultado);
}


int recursao(int x, int y) {
	if (y == 0) {

		return 1;
	}


	if (y > 0) {
		return x * recursao(x, y - 1);

	}
}


