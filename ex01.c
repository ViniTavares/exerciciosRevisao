#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int horas = 0;
	int minutos = 0;
	int totalMinutos = 0;

	printf("Digite o total de minutos:\n");
	scanf("%i", &totalMinutos);

	funcao(totalMinutos, &horas, &minutos);

	printf("%i h %i min", horas, minutos);


}

int funcao(int totalMinutos, int* horas, int* minutos) {


	if (totalMinutos >= 60) {
		do {
			totalMinutos = totalMinutos - 60;
			*horas = *horas + 1;

		} while (totalMinutos >= 60);


		if (totalMinutos < 60) {
			*minutos = totalMinutos;
		}
	}
	else {
		*horas = 0;
		*minutos = totalMinutos;


	}


}



