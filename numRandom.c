#include <stdio.h>
#include <stdlib.h>
#define TAM1 3000
#define TAM2 5

int randomInteger(int low, int high)
{
	int k;
	double d;
	d = (double)rand() / ((double)RAND_MAX + 1);
	k = d * (high - low + 1);

	return low + k;
}

void inicializa(int v[], int n, int val)
{
	int i;
	for (i = 0; i<n; i++)
	{
		v[i] = val;
	}
	return;
}

void exibeVetor(int vet[], int n)
{
	int i;
	for (i = 0; i<n; i++)
	{
		printf("O numero %i foi sorteado %i vezes\n", i + 1, vet[i]);
	}
	return;
}
void gerarNum (int v1[], int n, int n2)
{
    int i, numSorte;

    inicializa(v1, n2, 0);

	for (i = 0; i<n; i++)
	{
		numSorte = randomInteger(1, 40);

		if ((numSorte >= 1) && (numSorte <= 5))
        {
            v1[numSorte - 1] += 1;
        }
	}
	exibeVetor(v1, n2);
}
int main()
{
	int vAteCinco[TAM2];
    gerarNum(vAteCinco, TAM1, TAM2);

	return 0;
}
