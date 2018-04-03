#include <stdio.h>

main() {
	
	int nu,nc;
	
	
	printf("Digite um numero qualquer entre 1 e 100 e o computador tentara adivinhar");	
	scanf("%d", &nu);
	nc= 50;
	while(nc!=nu){
		printf("O computador digitou: %d\n", nc);
		
		if(nc < nu){
		printf("O numero do usuario e maior \n\n");
		nc = nc+1;
		} else if(nc > nu){

		printf("O numero do usuario e menor \n\n");
		nc = nc-1;
	}
	
	if (nu==nc)
	printf("O computador acertou o numero! O numero e %d", nu);
	
}
}
