#include <stdio.h>



struct no {
	int nmatricula;
	int idade;
	struct no *prox;
};

	struct no *atual, *primeiro = NULL;


void imprimelista(){
	struct no *atual = primeiro;
	   while (atual != NULL) {
	   	printf("\n\n", atual->idade);
        printf("Numero da Matricula:%d\n", atual->nmatricula);
        printf("Idade:%d\n", atual->idade);
        printf("\n\n", atual->idade);
        atual = atual->prox;	
}
}

void cadastrar(int a,int b) {
    struct no *atual = primeiro;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = (struct no *)malloc(sizeof(struct no));
    atual->prox->nmatricula = a;
    atual->prox->idade = b;
    atual->prox->prox = NULL;
}
	
	
main(){
int a,b, ncadastrados = 0;
primeiro =(struct no *)malloc(sizeof(struct no));

if(primeiro == NULL){
	return 1;
}


while(a != 999 || b != 999){
	if (ncadastrados == 0){
	printf("Digite o numero da primeira matricula:");
	scanf("%d", &a);
	printf("Digite a idade:");
	scanf("%d", &b);
	primeiro->nmatricula = a;
	primeiro->idade = b;
	primeiro->prox = NULL;
	ncadastrados++;
	}
    else{
	printf("Digite o numero da matricula:");
	scanf("%d", &a);
	printf("Digite a idade:");
	scanf("%d", &b);
	cadastrar(a,b);
    }
}

imprimelista();
 
 


}
