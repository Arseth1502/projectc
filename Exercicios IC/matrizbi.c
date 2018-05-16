#include <stdio.h>

main(){

int x= 3;
int y= 3;

int m[x][y], i ,j, n;

    
	for (i = 0; i <= x; i++) {
        for(j = 0; j <= y; j++) {
            m[i][j] = i+j;
			printf("m[%d][%d] : %d \n", i, j, m[i][j]);
        }	
}

	printf("Digite um numero");
	scanf("%d", &n);
	
	for(i=0;i <=x;i++){
	for(j=0;j <=y;j++){
	if(m[i][j] == n)
	printf("Seu numero esta em [%d][%d] \n", i, j);
	else
	printf("Seu numero nao esta em [%d][%d] \n", i, j);
	}
	}

}
