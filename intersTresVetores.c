#include <stdio.h>
#define TAM 10

void inicializa (int v[], int n, int val)
{
	int i;
	for(i=0; i<n; i++)
	{
		v[i] = val;
	}
	return;
}

int busca (int vet[], int n, int chv)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (vet[i] == chv)
        {
            	return i;
        }
    }
    return -1;
}

int intersec (int v1[], int v2[], int v3[], int v4[], int n)
{
    int i, qt = 0, busca1, busca2, busca3;

    inicializa(v4, n, 0);
    for (i=0; i<n; i++)
    {
        busca1 = busca(v2, n, v1[i]);
        busca2 = busca(v3, n, v1[i]);
        if ((busca1 != -1) && (busca2 != -1))
        {
            v4[qt] = v1[i];
            qt++;
        }
    }
    return qt;
}

int main(void)
{
    int vet1[TAM] = {0, 4, 3, 2, 9, 6, 7, 5, 8, 1};
    int vet2[TAM] = {3, 9, 1, 5, 7, 6, 2, 0, 9, 8};
    int vet3[TAM] = {6, 2, 0, 8, 8, 4, 5, 3, 6, 7};
    int vetInters[TAM];
    int i, qt;

    qt = intersec(vet1, vet2, vet3, vetInters, TAM);

    printf("numeros repetidos simultaneamente em vetor 1, vetor 2 e vetor 3:\n");
    for (i=0; i < qt; i++)
    {
        {
             printf(" %d ", vetInters[i]);
        }
    }
    return 0;
}
