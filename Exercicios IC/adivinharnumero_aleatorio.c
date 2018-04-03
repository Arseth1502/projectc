#include <stdio.h>
#include <time.h>

main(_) {
	srand(time(NULL));  
    int nc = rand() % 100;
	
	int nu;
	
	printf("Adivinhe o numero do computador(esta entre 1 e 100)\n\n");	
	
	while(nu!=nc){
		printf("Digite um numero qualquer: ");
		scanf("%d" , &nu);
		
		if(nu < nc)
		printf("O numero do computador e maior \n\n");
		else if(nu > nc)
		printf("O numero do computador e menor \n\n");
	}
	
	if (nu==nc)
	printf("Voce acertou o numero! O numero e %d", nc);
	
	
}
