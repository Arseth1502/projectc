#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() {
	     int i, a[99];
 
     printf("Gerando 100 valores aleatorios:\n\n");
 
     for (i = 0; i < 99; i++)
     {
          a[i] = rand() % 99;
          printf("%d \n", a[i]);
     }
     
     printf("Valores gerados.\n");
     
     for (i = 0; i < 99; i++)
     {
          if(a[i] % 2 == 0 || a[i] == 0){
            printf("Existe um valor par em %d", i+1);
            return(0);
		  }
     }
     
}
