#include <stdio.h>

main () {
	
	int naipea,facea,naipeb,faceb;
	
	printf("Faces \n A - 1 \n 2 - 2 \n 3 - 3 \n 4 - 4 \n 5 - 5 \n 6 - 6 \n 7 - 7 \n Q - 8 \n J - 9 \n K - 10 \n \n");
	 
	printf("Naipes \n Ouros - 1 \n Espadas - 2 \n Copas - 3 \n Paus - 4 \n \n");	
	
	printf("Digite a face e o naipe da primeira carta \n");
	scanf("%d %d", &facea, &naipea);

	printf("Digite a face e o naipe da segunda carta \n");
	scanf("%d %d", &faceb, &naipeb);
	
	if ( facea == 1 )
	facea = 11;
	else if ( faceb == 1 )
	faceb = 11;		
	else if ( facea == 2 )
	facea = 12;	
	else if ( faceb == 2 )
	faceb = 12;	
	else if ( facea == 3 )
	facea = 13;	
	else if ( faceb == 3 )
	faceb = 13;
	
	if ( (facea > faceb) || ((facea == faceb) && (naipea > naipeb))) 
	printf("A primeira carta e maior");
	else
	printf("A segunda carta e maior");	
	
	
	
	
	
	
	
	
	
	
	
	
		
}
