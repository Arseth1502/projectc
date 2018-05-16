#include <stdio.h>

main(){
	
	int i,np ,p[100];
	np=0;
	i=0;
	p[0] = 1;
	
	printf("Digite o fator do polinomio e o grau(Ex: 5x^2 fica como 5 2) e ignore as constantes \n");
	printf("Digite 0 para terminar \n");
	
	while(1){
		printf("Fator %d: ",i+1);
		scanf("%d %d",&p[i],&p[i+1]);
		if(p[i] == 0)
		break;
		np++;
		i++;
	}
	i = 0;
	while(i <= np){
		printf("(%dx^%d) + ",p[i+1], p[i] - 1);
		i += 2;
	}
	
	
	
	
}
