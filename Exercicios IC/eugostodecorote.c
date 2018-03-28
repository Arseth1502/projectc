#include <stdio.h>

main () {
	
	int a,b,c,n,m;

	printf("Digite tres numeros inteiros \n");
	scanf("%d %d %d", &a, &b, &c);
	
    if(c < a && c < b){
    printf("%d e o menor numero \n", c);
    n = c;
}
    else if(b < a && b < c){
    printf("%d e o menor numero \n", b);
	n = b;
}	
    else if(a < c && a < b) {
    printf("%d e o menor numero \n", a);
    n = a;
}
    
	
	
	if(c > a && c > b){
    printf("%d e o maior numero \n", c);
    m = c;
}
    else if( b > a && b > c){
    printf("%d e o maior numero \n", b);
	m = b;
}	
    else if( a > b && a > c ) {
    printf("%d e o maior numero \n", a);
    m = a;
}
	
   
   
   if( n < a && a < m)
	printf("A ordem crescente e %d < %d < %d", n,a,m);
   else if( n < b && b < m)
	printf("A ordem crescente e %d < %d < %d", n,b,m);
   else if( n < c && c < m)
	printf("A ordem crescente e %d < %d < %d", n,c,m);	
}
