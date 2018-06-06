#include <stdio.h>
#include <stdlib.h>
#define ALT 27
#define LARG 61

char tela[ALT][LARG];
char tela1[ALT][LARG];

void imprime_tela() {
	int i, j;
	
	for(i = 0; i < ALT; i++) {
		for(j = 0; j < LARG; j++) {
		putchar(tela[i][j]);
	}
		putchar('\n');
	}
}
//sendo as coordenadas do tipo (y, x1, x2)
void imprime_segm_h(int y, int x1, int x2) {
	int x;
	
	for(x = x1; x < x2; x++)
		tela[y][x] = '_';
}
//sendo as coordenadas do tipo (x1, y, x2)
void imprime_segm_v(int y, int x1, int x2) {
	int x;
	
	for(x = x1; x < x2; x++)
		tela[x][y] = '|';
}

void desenha_quadrado(int x, int y, int l) {
	imprime_segm_v(x, y, y + l);
	imprime_segm_v(x + l, y, y + l);
	imprime_segm_h(y, x, x + l);
	imprime_segm_h(y + l, x, x + l);
	
}

int main(int argc, char *argv[]) {
	
	int i, j, cont, idai;
	srand(time(NULL));
	
	for(i = 0; i < ALT; i++) {
		for(j = 0; j < LARG; j++) {
		tela[i][j] = '.';
		}
	}
	i=0;
	while(i<=61){
		imprime_segm_h(i,0,60);
		i = i + 2;
	} 
	i=0;
	while(i<=61){
		imprime_segm_v(i,0,60);
		i = i + 2;
	}
	 
	
	
	
	
	i=0;
	j=0;
	
	for(idai=0;idai <= 15; idai++){
		i = (rand() % 15) * 2 + 1;
		j = (rand() % 12) * 2 + 1;
		tela1[i][j] = 'B';
	}
	
	imprime_tela();
	
	
	
	i=0;
	j=0;

	while(1){
	    cont = 0;
		printf("Digite as coordenadas: ");
		scanf("%d %d",&i,&j);
		if(tela1[i][j] == 'B'){
			tela[i][j] = 'B';
			imprime_tela();
			break;
		}
	    if(tela1[i][j] != '.'){
	    	if(tela1[i-2][j]=='B')
	    	cont++;
	    	if(tela1[i-2][j-2]=='B')
	    	cont++;
	    	if(tela1[i-2][j+2]=='B')
	    	cont++;
	    	if(tela1[i+2][j]=='B')
	    	cont++;
	    	if(tela1[i+2][j-2]=='B')
	    	cont++;
	    	if(tela1[i+2][j+2]=='B')
	    	cont++;
	    	if(tela1[i][j-2]=='B')
	    	cont++;
	    	if(tela1[i][j+2]=='B')
	    	cont++;	    	
		}
		if(cont == 0)
		tela[i][j] = '/';
		if(cont > 0)
		tela[i][j] = cont + 48;
		imprime_tela();
	}
	
	printf("Voce perdeu, otario.");
	
	return 0;
}
