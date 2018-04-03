#include <stdio.h>


main(_) {
	
	int i,m;
	m=0;
	while(i!=-1){
		printf("Digite um valor: ");
		scanf("%d" , &i);
		
		if(i > m)
		m = i;
		else
		m = m;
	}
	
	printf("O maior valor e %d", m);
	
	
}
