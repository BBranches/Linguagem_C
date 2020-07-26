#include <stdio.h>

void separaDados (int mat, int *nEst, int *nSeq)
{
    *nSeq = mat % 1000;
    *nEst = mat / 1000;

    return;
}

void detDia (int mat)
{
    int nEst = 0, nSeq = 0, anos;
    separaDados(mat, &nEst, &nSeq);

    printf("\nNUMERO ESTACAO: %i", nEst);

    printf("\nNUMERO SEQUENCIAL: %i", nSeq);

    if ((nEst >= 1) && (nEst <= 3))
    {
        if ((nSeq <= 500))
        {
            printf("\n\nDIA RECEBIMENTO: 5");
        }
        else
        {
            printf("\n\nDIA RECEBIMENTO: 4");
        }
    }
    else
    {
        if ((nEst >= 4) && (nEst <= 6))
        {
            printf("\n\nQuantos anos trabalha no metro? ");
            scanf("%i", &anos);
            if (anos > 3)
            {
                printf("\n\nDIA RECEBIMENTO: 2");
            }
            else
            {
                printf("\n\nDIA RECEBIMENTO: 6");
            }
        }
        else
        {
           if ((nEst >= 7) && (nEst <= 9))
           {
               if ((nSeq > 800))
                {
                    printf("\n\nDIA RECEBIMENTO: 7");
                }
                else
                {
                    printf("\n\nDIA RECEBIMENTO: 3");
                }
           }
           else
           {
               printf("\n\nMATRICULA INVALIDA");
           }

        }
    }
}

int main(void)
{
    int mat;

    printf("\tDIA DO RECEBIMENTO DECIMO TERCEIRO SALARIO");
    
    printf("\n\nDIGITE UM NUMERO NEGATIVO PARA TERMINAR");
    printf("\n\n\nDigite a matricula com 4 algarismos: ");
    scanf("%i", &mat);

    while (mat >= 0)
    {
        detDia(mat);
        printf("\n\n\nDIGITE UM NUMERO NEGATIVO PARA TERMINAR");
        printf("\n\n\nDigite a matricula com 4 algarismos: ");
        scanf("%i", &mat);
    }
    printf("\n\nFIM");
    return 0;
}
