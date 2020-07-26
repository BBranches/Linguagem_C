#include <stdio.h>

void exibeValores (int v1[], int n, int v2[])
{
  int g;
  for (g=0; g<n; g++)
    {
        printf("\nA soma dos valores apostados no cavalo %d: R$ %.d\n", v1[g], v2[g]);
    }
    return;
}

void inicializa (int v[], int n, int val)
{
    int i;
    for (i=0; i<n; i++)
    {
        v[i]=val;
    }
    return;
}

int busca (int v, int n, int val)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (v == val)
        {
            return i;
        }
    return -1;
    }
}

void somaValores (int v1[], int n, int v2[], int n2, int v3[], int v4[])
{
    int i, j, soma = 0;

    for (i=0; i<n; i++)
    {
       for(j=0; j<n2; j++)
        {
            if (busca(v2[i], n2, v1[j]) != -1)
            {
                v4[j] += v3[i];
            }
        }
    }
    return ;
}

int main (void)
{
    int vCavalos[4] = {101, 210, 307, 490};
    int n = 12, n2 = 4, z = 0;
    int vCavalosApostados [12] = {101, 101, 210, 490, 490, 101, 307, 210, 101, 490, 490, 307};
    int vValoresApostados[12] = {1000, 10, 1200, 1500, 100, 300, 200, 4210, 1901, 4000, 80, 1290};
    int vTotalValores[4];

    inicializa(vTotalValores, n2, z);

    somaValores(vCavalos, n, vCavalosApostados, n2, vValoresApostados, vTotalValores);
    
    exibeValores(vCavalos, n2, vTotalValores);
     
    printf("\n\n\n");

    return 0;
}
