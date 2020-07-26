#include <stdio.h>
#define TAM 16

int busca(int v[], int n, int val)
{
    int i;

    for (i=0; i<n; i++)
    {
        if (v[i]==val)
        return i;
    }

    return -1;
}

int novoSemRepeticao (int v1[], int n1, int v2[])

{
	int i, n2 = 0;

    for (i=0; i<n1; i++)
    {
        if ((v1[i]%2) != 0 )
        {
            if(busca(v2, n1,v1[i]) == -1)
               {v2[n2] = v1[i];
                n2++;}
        }
    }
    return n2;
}

int main(void)
{
    int n2, i;
    int v1[TAM] = {1,2,2,3,3,1,5,11,6,9,6,9,1,2,6,1};
    int v2[TAM];

    n2 = novoSemRepeticao (v1,TAM,v2);
    printf("\nVetor 1:\n\n");
    for (i=0;i<TAM;i++)
    {
      printf("%d ", v1[i]);
    }

    printf("\n\nNumeros Impares no Vetor 1 (Vetor 2):\n\n");
    for (i=0; i<n2; i++)
    {
      printf("%d ", v2[i]); //v2 recebe impares de v1 sem repetir
    }
    
	return 0;
}
