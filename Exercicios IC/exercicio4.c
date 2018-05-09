#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() {
	     int i, a[99];
 
     printf("Gerando 100 valores aleatorios:\n\n");
 
     for (i = 0; i < 99; i++)
     {
          a[i] = rand() % 100;
          printf("%d \n", a[i]);
     }
     
     printf("Valores gerados.\n");
     
     for (i = 0; i < 99; i++)
     {
          if(a[i] % 2 == 0 || a[i] == 0){
            printf("Indice %d e par e vale %d \n", i,a[i]);
		  }
		  else
		  printf("O numero nao e par \n", i);
     }
}
