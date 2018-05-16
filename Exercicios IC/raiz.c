#include <stdio.h>

main(){
	int i,n,rn,sn;
	
	printf("Digite n");
	scanf("%d",&n);
	i=1;
	rn=0;
	sn=0;
	
	while(sn<n){
		if(i%2 != 0){
			rn++;
			sn+=i;
		}
		i++;
	}
	printf("A raiz aproximada e %d", rn);
}
