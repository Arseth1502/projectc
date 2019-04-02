#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	struct Lista {
		
		char carac;
		int topo;
		struct Lista *next;
		
	};
	
	struct Lista *head = NULL;
	struct Lista *atual = NULL;

void push(char dadopush) {

   struct Lista *no = (struct Lista*)malloc(sizeof(struct Lista));
	
   no->carac = dadopush;

   no->next = head;
	
   head = no;
}

void pop(){
	struct Lista *p = head;
	
	head = p->next;
	
	p = NULL;
	
	
}


void mostra(){
	struct Lista *p = head;
	
	while(p!=NULL){
		printf("%c \n", p->carac);
		p = p->next;
	}
}


main(){
	char c;
	int valido = 0;
	
	
	while(1){
	printf("Digite o caractere:");
	scanf("%c", &c);
	printf("\n");
	
	if(c=='C'){
		valido = 1;
		push(c);
		break;
	}
	
	
	if(c == 'a' || c == 'b'){
		valido = 1;
		push(c);
	}
	
	};
	
	printf("\n");
	
	mostra();
	printf("Valido = %d \n\n", valido);
	
	mostra();
	
}
