#include<stdio.h>
#include<stdlib.h>

int main()
{
  int matriz[5][5];
  int i, j;

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf(" Digite o valor da linha %d , coluna %d : ", i + 1, j + 1);
      scanf(" %d ", &matriz[i][j]);
    }
  }

  printf(" \n ");

  printf(" Matriz original: \n ");
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf(" %d  ", matriz[i][j]);
    }
    printf(" \n ");
  }

  printf(" \n ");

  printf(" Matriz transposta: \n ");
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      printf(" %d  ", matriz[j][i]);
    }
    printf(" \n ");
  }

  printf(" \n ");
return(0);
}