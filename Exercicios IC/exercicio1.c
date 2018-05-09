#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() {
	     int i, a[99], n;
 
     printf("Gerando 100 valores aleatorios:\n\n");
 
     for (i = 0; i < 99; i++)
     {
          a[i] = rand() % 100;
          printf("%d \n", a[i]);
     }
     
     printf("Valores gerados. Qual numero devo ler ? \n");
     scanf("%d", &n);
     
     for (i = 0; i < 99; i++)
     {
          if(a[i] == n){
            printf("O indice %d contem o valor lido \n", i);
		  }
		  else
		  printf("O indice %d nao contem o valor lido \n", i);
     }
}
