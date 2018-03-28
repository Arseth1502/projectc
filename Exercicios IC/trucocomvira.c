#include <time.h>
#include <stdio.h>

main () {
	
	
	srand(time(NULL));  
    int r = rand() % 10;      
	int naipea,facea,naipeb,faceb,vira,manilha;
	
	r = r + 1;
	
	if( r == 8)
	printf("O vira e um Q \n");
	else if( r == 9)
	printf("O vira e um J \n")	;
    else if( r == 10)
	printf("O vira e um K \n");
	else
	printf("O vira e um %d \n", r);
	
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
	
	manilha = r+1;
	
	if ( facea == manilha)
	facea = 14;
	else if( faceb == manilha)
	faceb = 14;
	
	if ( (facea > faceb) || ((facea == faceb) && (naipea > naipeb))) 
	printf("A primeira carta e maior");
	else if ( (faceb > facea) || ((faceb == facea) && (naipeb > naipea)))
	printf("A segunda carta e maior");	
	
	
	
	
	
	
	
	
	
	
	
	
		
}
