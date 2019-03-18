#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	struct Lista {
		
		int info;
		struct Lista *next;
		
	};
	
	struct Lista *head = NULL;
	struct Lista *atual = NULL;

void deletaintervalo(int vi, int vf){
	struct Lista *q = head;
	struct Lista *ant;
	
	while(q!=NULL){
		if(q->info >= vi && q->info<=vf){
			ant->next = q->next;
			
		}
		ant = q;
		q = q->next;
	}
	
	
}


void insere(int dado) {

   struct Lista *no = (struct Lista*)malloc(sizeof(struct Lista));
	
   no->info = dado;

   no->next = head;
	
   head = no;
}

void mostra(){
	struct Lista *p = head;
	
	while(p!=NULL){
		printf("%d \n", p->info);
		p = p->next;
	}
}




main(){
	

	insere(6);
	insere(5);
	insere(4);
	insere(3);
	insere(2);
	insere(1);
	
	mostra();
	
	deletaintervalo(3,5);
	
	printf("\n");
	
	mostra();
	
	
	
	
	
}
