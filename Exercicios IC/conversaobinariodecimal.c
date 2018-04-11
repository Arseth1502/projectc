#include <stdio.h>

int main(){
	
	int d, r[7], i, n;
	
	printf("Digite o valor que sera convertido:");
	scanf("%d", &d);
	i=7;
	n=d;
	while(i>=0){
		
		r[i] = d%2;
		d = d/2;
		i--;
	}
	
	printf("O numero %d em binario e igual a %d%d%d%d%d%d%d%d",n,r[0],r[1],r[2],r[3],r[4],r[5],r[6],r[7]);
	
}
