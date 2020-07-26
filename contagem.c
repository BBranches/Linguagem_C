#include <stdio.h>

int main(void) {

  int qtcontar, cont = 0;
  printf("Até quanto quer contar? ");
  scanf("%i", &qtcontar);

  while (qtcontar >= cont)
{
  printf("\n\n%i", cont);
  cont++;
}
  return 0;
}