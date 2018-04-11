#include <stdio.h>

int main(){
	
	int n,i, soma,aux;
	
	printf("Digite o numero:");
	scanf("%d", &n);
	i = n - 1;
	soma = 1;
	
	while(i>=1){
		aux = n*i;
		soma = soma * aux;
		n = n-2;
		i = n-1;
	}
	
	printf("O resultado e %d", soma);
	
}
