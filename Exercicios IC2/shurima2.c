#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

FILE *arq;
char buffer[100];

struct no {
	int numero;
	int salario;
	float desconto;
	struct no *prox;
};

	struct no *atual, *primeiro = NULL;


void imprimelista(){
	struct no *atual = primeiro;
	   while (atual->prox != NULL) {
	   	printf("\n\n", atual->salario);
        printf("Numero:%d\n", atual->numero);
        printf("Salario:%d\n", atual->salario);
        printf("Desconto:%f\n", atual->desconto);
        printf("\n\n", atual->salario);
        atual = atual->prox;
			
}
}

void cadastrar(int a,int b, float c) {
    struct no *atual = primeiro;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = (struct no *)malloc(sizeof(struct no));
    atual->prox->numero = a;
    atual->prox->salario = b;
    atual->prox->desconto = c;
    atual->prox->prox = NULL;
    fwrite (buffer, sizeof(int), a, arq); 
    fwrite (buffer, sizeof(int), b, arq); 
    fwrite (buffer, sizeof(float), c, arq); 
}
	
	
main(){
int a,b,ncadastrados = 0;
float c;
primeiro =(struct no *)malloc(sizeof(struct no));

if(primeiro == NULL){
	return 1;
}


    
	arq = fopen("ArqShurima.dat", "wb"); // Cria um arquivo binário para gravação

    if (arq == NULL) // Se não conseguiu criar
    {
        printf("Problemas na CRIACAO do arquivo\n");

   	return;
    }


while(a != 999 || b != 999 || c != 999){
	if (ncadastrados == 0){
	printf("Digite o numero:");
	scanf("%d", &a);
	printf("Digite o salario:");
	scanf("%d", &b);
	printf("Digite o desconto:");
	scanf("%f", &c);
	printf("\n \n");
	primeiro->numero = a;
	primeiro->salario = b;
	primeiro->desconto = c;
	primeiro->prox = NULL;
	ncadastrados++;
	}
    else{
	printf("Digite o numero:");
	scanf("%d", &a);
	printf("Digite o salario:");
	scanf("%d", &b);
	printf("Digite o desconto:");
	scanf("%f", &c);
	printf("\n \n");
	cadastrar(a,b,c);
    }
}

imprimelista();
 
    
    

    

    fclose(arq);



}
