#include <stdio.h>

void detSalaHora(int curso, int mat, int *numSal, int *horaAv, int *qtAlunos)
{
	if (mat % 2 != 0)
	{
		if (mat % 9 == 0)
			if (curso == 2 || curso == 3)
			{
				*numSal = 4;
				*horaAv = 9;
				*qtAlunos = *qtAlunos + 1;
				printf("\nA matricula do aluno: %i\nO curso: %d\nA sala da prova: %i\nA hora da prova: %i", mat, curso, *numSal, *horaAv);
			}
			else
			{
				*numSal = 1;
				*horaAv = 10;
				*qtAlunos = *qtAlunos + 1;
				printf("\nA matricula do aluno: %i\nO curso: %d \nA sala da prova: %i\nA hora da prova: %i", mat, curso, *numSal, *horaAv);
			}
		else
		{
			*numSal = 2;
			*horaAv = 11;
			*qtAlunos = *qtAlunos + 1;
			printf("\nA matricula do aluno: %i\nO curso: %d\nA sala da prova: %i\nA hora da prova: %i", mat, curso, *numSal, *horaAv);
		}
	}
	else
	{
		*numSal = 3;
		*horaAv = 12;
		*qtAlunos = *qtAlunos + 1;
		printf("\nA matricula do aluno: %i\nO curso: %d\nA sala da prova: %i\nA hora da prova: %i", mat, curso, *numSal, *horaAv);
	}
	return;
}

int main(void)
{
	int mat, curso, numSal = 0, horaAv = 0, qtAlunos = 0;

	printf("Digite 0 para terminar - Qual o numero da sua matricula? ");
	scanf("%i", &mat);

	while (mat != 0)
	{
		printf("\nQual o numero do seu curso? ");
		scanf("%i", &curso);

		detSalaHora(curso, mat, &numSal, &horaAv, &qtAlunos);

		printf("\n\nDigite 0 para terminar - Qual o numero da sua matricula? ");
		scanf("%i", &mat);
	}
	printf("\nA quantidade de alunos que vai fazer a prova: %i", qtAlunos);

	return 0;
}
