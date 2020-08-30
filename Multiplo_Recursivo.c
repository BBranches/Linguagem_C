/* Função recursiva que exibe todos os múltiplos do número N, inferiores ao valor V. */

#include <stdio.h>
void funcaoMult (int n, int v, int x) 
{
  int num = n*v;
  if (num<v)
  {
    return;
  }
  else
  {
    funcaoMult(n, v-1,x);
    if (num<x)
    {
      printf("%d | ", num);
    }
  }  
}

int main ()
{
  	int x, v, n;
	  printf("\nDigite o valor de V:");
  	scanf("%d",&v);
  	printf("Digite o valor de N:");
  	scanf("%d",&n);
    x = v;
    printf("\nOs multiplos de %d menores que %d: ",n,v);
    funcaoMult(n,v,x);
}