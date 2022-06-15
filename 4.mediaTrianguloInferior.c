#include <stdio.h>

int main() {
  #define n 4 // ordem da matriz quadrada
  int i, j, m[n][n]; // matriz quadrada

// entrada de dados
  for (i=0; i<n; i++) {
    printf("Informe os elementos da %da. linha:\n", (i+1));
    for (j=0; j<n; j++) {
      printf("m[%d][%d] = ", i, j);
      scanf("%d", &m[i][j]);
    }
    printf("\n");
  }

// processamento: verificando se a matriz informada eh uma matriz triangular inferior
  int ehinferior = 1;
  for (i=0; (i<n)&&(ehinferior==1); i++) {
// percorre os elementos acima da diagonal principal
    for (j=(i+1); (j<n)&&(ehinferior==1); j++) {
// verificando se os elementos acima da diagonal principal sao iguais a zero
      if (m[i][j] != 0)
         ehinferior = 0;
    }
  }

// saida: exibindo a matriz informada e indicando se ela eh uma matriz triangular inferior
  printf("\n");
  for (i=0; i<n; i++) {
    printf("%da. linha: ", (i+1));
    for (j=0; j<n; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  if (ehinferior == 1)
     printf("\nA matriz informada eh uma matriz triangular inferior.\n");
  else printf("\nA matriz informada \"nao\" eh uma matriz triangular inferior.\n");
}