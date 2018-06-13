#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j,k;

int tamanho(char *palavra){
	while(palavra[i]!='\0'){
		i++;
	}
	printf("%d", i);
	
}

int copia(char *dest, char *orig){
   	j=0;
		while(orig[j]!='\0'){
		j++;
	}
    k = j;
      for(j=0;j<=k;j++){
		dest[j] = orig[j];
	}
	
	printf("%s", dest);
}

main(){
	
	tamanho("Lalala");
	putchar('\n');
	copia("Lalalala", "Eunaosei");
	
	
	
	
	
	
	
	
	
	
	
}
