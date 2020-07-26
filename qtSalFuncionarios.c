#include <stdio.h>
#define TAM1 25
#define TAM2 5

void inicializa (int v[], int n, int val)
{
	int i;
	for(i=0; i<n; i++)
	{
		v[i] = val;
	}
	return;
}

int ateCinco (int v1[], int n, int v2[]) 
{
	int i, qt = 0;

	for (i=0; i<n; i++)
	{
		if (v1[i] <= 5)
		{
			v2[qt] = v1[i];
        			qt++;
		}
	}
	printf("%i funcionarios recebem ate 5 salarios minimos.\n", qt);
	return qt;
}

void SalRep (int v1[], int n)
{
	int vSalRep [TAM2];
	int i, salario, maior, maiorPos;

  inicializa(vSalRep, TAM2, 0);
	for (i=0; i<n; i++) 
	{
      		salario = v1[i];
      		vSalRep[salario-1] = vSalRep[salario-1] + 1;
	}

	maior = vSalRep[0]; 
	for (i=1; i<TAM2; i++)
    	{
		if (vSalRep[i] > maior)
        	{
             		maior = vSalRep[i]; 
             		maiorPos = i + 1; 
        	}
    	}
    	printf("\n\n%i funcionarios recebem %i salarios minimos.\nMaior quantidade de funcionarios recebendo.\n\n", maior, maiorPos);
}

int main(void)
{
	int vSals [TAM1] = {1,3,7,20,3,4,2,6,9,10,1,10,2,1,3,2,5,4,5,4,3,2,90,10,2};
 	int vAteCinco [TAM1];
	int i, qt;

  inicializa(vAteCinco, TAM1, 0);
	qt = ateCinco (vSals, TAM1, vAteCinco);

	SalRep(vAteCinco, qt);

  printf("\n\n");
	return 0;
}
