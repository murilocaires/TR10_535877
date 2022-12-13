#include <stdio.h>
#include <stdlib.h>

int main() {
  //Zerando todos os bits, substituindo o lixo de memoria por zero
  unsigned int x[200] = {0};
  int y, i;

  //escaneamento dos números e ativação dos bits no vetor
  while (1) {
    printf("Digite um número (0 a 5000): ");
    scanf("%d", &y);

    if (y == -1) break;

    x[y/32] |= (1 << (y % 32));
  }

  //Imprime os números correspondente do bits ativados
  for (i = 0; i <= 5000; i++) {
    if ((x[i/32] >> i) & 1) {
      printf("%d\n", i);
    }
  }

  return 0;
}