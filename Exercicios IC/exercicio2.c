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
          if(a[i] > a[i+1]){
            printf("X esta em %d e vale %d \n", i,a[i]);
            printf("Y esta em %d e vale %d \n", i+1,a[i+1]);
		  }
		  else
		  printf("X nao e maior que Y \n", i);
     }
}
