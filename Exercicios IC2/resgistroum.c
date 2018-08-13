#include <stdio.h>
    
    int e=5,n=0, a,b, perdapeso;
   
    
	struct fichaspa {
	
	int nficha;
	int pe;
	int ps;
	char nome[50];
	int diast;
	char status;

	};

	struct fichaspa fspa[50];

struct fichaspa CadastrarFicha(int n) {
	printf("Nome:");
	fflush(stdin);
	gets(fspa[n].nome);
	printf("Peso ao Entrar(em quilos):");
	scanf("%d",&(fspa[n].pe));
	printf("Dias de Tratamento:");
	scanf("%d",&(fspa[n].diast));
	
	fspa[n].status = 'B';
	n++;
	printf("----------------------------------------------------------------------------------\n");
}

struct fichaspa DarAlta(int a) {
	
	printf("Peso ao Sair(em gramas):");
	scanf("%d",&(fspa[a].ps));
	
	perdapeso = ((fspa[a].pe)*1000) - fspa[a].ps;
	fspa[a].status = 'A';
	printf("Perda de Peso: %d gramas", perdapeso);
	printf("----------------------------------------------------------------------------------\n");
}

void VerFicha(int b) {
	
	if(fspa[b].status == 'B'){
		printf("Numero da Ficha: %d", fspa[b].nficha + 1 );
		puts(fspa[b].nome);
		printf("Peso ao Entrar: %d", fspa[b].pe );
		printf("Dias de Tratamento: %d", fspa[b].diast );
		printf("Paciente em Baixa");
	}
	if(fspa[b].status == 'A'){
		printf("Numero da Ficha: %d", fspa[b].nficha );
		puts(fspa[a-1].nome);
		printf("Peso ao Entrar: %d kg", fspa[b].pe );
		printf("Peso ao Sair: %d gramas", fspa[b].ps);
		printf("Perda de Peso: %d gramas", perdapeso);
		printf("Dias de Tratamento: %d", fspa[b].diast );
		printf("Paciente em Alta");
	}
	
}

int main(){
	
	
    while(e != 0){
    	printf("MENU\n");
    	printf("- 0 para finalizar o programa\n");
    	printf("- 1 para cadastrar um novo paciente\n");
    	printf("- 2 para dar alta ao paciente\n");
    	printf("- 3 para ver uma ficha\n");
    	scanf("%d",&e);
    	printf("----------------------------------------------------------------------------------\n");
    	
		if(e == 1)
    	CadastrarFicha(n);
    	
    	if(e == 2){
    		printf("Digite o numero da ficha que deseja dar alta");	
    		scanf("%d",&a);
    		a = a-1;
    		DarAlta(a);
		}
		
		if(e == 3){
    		printf("Digite o numero da ficha que deseja ver");	
    		scanf("%d",&b);
    		b = b-1;
    		VerFicha(b);
		}
	}
	
	
	

	
	
}
