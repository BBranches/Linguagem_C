#include <stdio.h>

float determina_valorKWH (int bandEira,int usuArio)
{   	
	float valkwh;
	if (bandEira == 1)
  {   
  valkwh = 3.2;
  }
	else
  {   	
    if (bandEira == 2)
    {   
      valkwh = 4.5;
    }
    else
    {   	
      if (usuArio == 1)
      {        
        valkwh = 6;
      }
    	else
      {     
        valkwh = 5;
      }
    }
  }
	return valkwh;
}

float calcula_TaxaExtra (int usUario, float contaInicial)
{   	
	int funcionarios;
	float taxaExtra;
	if (usUario == 2)
  {   	
    printf ("\n\tQuantos funcionarios trabalham? ");
   	scanf ("%d",&funcionarios);
    if(funcionarios > 100)
    {   
      taxaExtra = contaInicial * 0.02;
    }
    else
    {   
      taxaExtra = contaInicial * 0.03;
    }
  }
  else
  {   
    taxaExtra = contaInicial * 0.5;
  }
	return taxaExtra;
}

float calcula_conta (int banDeira, int usuaRio, float consmes, float totalkwh)
{   	
	float conta, valConta, taxaEXTRA;
	conta = consmes * totalkwh;
  if (banDeira == 1)
  {   
    valConta = conta;
  }
  else
  {	
    if (consmes>100)
    {   
      taxaEXTRA = calcula_TaxaExtra(usuaRio,conta);
      valConta = conta + taxaEXTRA;
    }
  	else
    {   
      valConta = conta;
    }
  }
	return valConta;
}

int main (void)
{
	int bandeira, usuario;
	float consumoMes, valorConta, totalkwh;

	printf ("\tI - TIPOS DE BANDEIRAS:\n\n\tA) Bandeira Verde:    1\n\tB) Bandeira Amarela:  2\n\tC) Bandeira Vermelha: 3\n\n\n");

	printf ("\tII - TIPOS DE USUARIOS:\n\n\tA) Residencial:   1\n\tB) N Residencial: 2\n\n\n");

  printf ("\tIII - TAXA EXTRA: MAIS DE 100KWH:\n\n\tA) Residencial:\n\t\t50 por cento\n\n");

  printf("\tB) N Residencial:\n\n\t- Ate 100 funcionarios:\n\t\t3 por cento\n\t- Mais de 100 funcionarios:\n\t\t2 por cento");

	printf ("\n\n\n\tQual o a cor da Bandeira? ");
	scanf ("%i",&bandeira);

	printf ("\n\tQual o tipo de usuario? ");
	scanf ("%i",&usuario);

	printf ("\n\tQuanto foi consumido no mes (KWH)? ");
	scanf ("%f",&consumoMes);

	totalkwh = determina_valorKWH(bandeira,usuario);
	valorConta = calcula_conta(bandeira,usuario,consumoMes,totalkwh);

	printf ("\n\n\tValor da sua (Conta de Luz) deste mes: R$%.2f\n\n\n\n\n",valorConta);

	return 0;
}

