#include <stdio.h>


main() {
	
	int i,p,ii;
	int pmv,mv,imp,mp;
	
	i = 1;
	p, pmv, mv, imp, mp = 0;	
	
	
	while(i>0){
		printf("Digite sua idade: ");
		scanf("%d" , &i);
		printf("Digite seu peso: ");
		scanf("%d" , &p);
		printf("\n");
		ii = i;
		if(i > mv){
		mv = i;
		pmv = p;
		}else{
		mv = mv;
		pmv = pmv;
	    }
		if(p > mp){
		mp = p;
		imp = ii;
		}else{
		mp = mp;
		imp = imp;
	    }
	 
     } 
    
	printf("O peso do mais velho e %d\n", pmv);
	printf("A idade do mais pesado e %d\n", imp);

}
