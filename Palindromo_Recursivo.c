/* Função recursiva que determina se s é ou não um palíndromo. */

#include <stdio.h>
#include <string.h>

int palindromo (char s[], int first, int last)
{
   if (s[first] == s[last])
    {
        if ((first == last) || (first+1 == last))
    {
       return 0;
    }
        else
        {
              return palindromo(s, first+1, last-1); 
        }
	}
  else
  {
    return -1; 
  } 
}

int main ()
{
  char s[] = "amhynnyhma";
  int resp, tam;
  tam = strlen(s)-1;
  resp = palindromo(s, 0, tam);

  if (resp == -1)
  {
    printf("Não é um Palíndromo");
  }
  else
  {
    printf("É um Palíndromo");
  }
  return 0;
}