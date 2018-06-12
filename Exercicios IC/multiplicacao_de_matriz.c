#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 3
main(){
	
	int m1[size][size], m2[size][size], m3[size][size], i=0, j=0, i2=0, j2=0, i3=0, j3=0, linha, coluna, somaprod;
	
	srand(getpid());
	
	printf ("Matriz 1:\n");
	
	for (i=0;i<size;i++)
	{
		for (j=0;j<size;j++)
		{
			m1[i][j]= rand() % 10;
			printf ("%d ", m1[i][j]);
		}
		putchar ('\n');
	}
	
	putchar ('\n');
	
	printf ("Matriz 2:\n");	
	
	for (i=0;i<size;i++)
	{
		for (j=0;j<size;j++)
		{
			m2[i][j]= rand() % 10;
			printf ("%d ", m2[i][j]);
		}
		putchar ('\n');
	}
	 
	putchar ('\n'); 
	 
	printf ("Matriz 3:\n");	
	
	for(i2=0; i2<size; i2++) 
    for(j2=0; j2<size; j2++){ 
      somaprod=0; 
      for(i=0; i<size; i++) somaprod+=m1[i2][i]*m2[i][j2]; 
      m3[i2][j2]=somaprod; 
    } 
	 	
	for(i2=0; i2<size; i2++){ 
    for(j2=0; j2<size; j2++) 
      printf("%d ", m3[i2][j2]); 
    printf("\n"); 
  }	
		
	 
	 
}
