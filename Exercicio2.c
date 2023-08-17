#include <stdio.h>
int i, maior, menor, x;
int num[10];

int
main ()
{
  for (i = 0; i < 10; i++)
    {
      printf ("\nDigite de um nC:mero:\n");
      scanf ("%d", &num[i]);
      if (i == 0)
	{
	  maior = num[i];
	  menor = num[i];
	}
      else
	{
	  if (num[i] > maior)
	    {
	      maior = num[i];
	    }
	  if (num[i] < menor)
	    {
	      menor = num[i];
	    }
	}
    }

  for (int i = 0; i < 10 - 1; i++)
    {
      for (int j = 0; j < 10 - i - 1; j++)
	{
	  if (num[j] > num[j + 1])
	    {
	      int aux = num[j];
	      num[j] = num[j + 1];
	      num[j + 1] = aux;
	    }
	}
    }

  printf ("%d foi o maior e %d foi o menor digitado", maior, menor);

  for (int i = 0; i < 10; i++)
    {
      printf ("\n[%i] do Vetor = %i", i, num[i]);
    }
  return 0;
}

