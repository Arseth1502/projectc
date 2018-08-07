#include <stdio.h>
    
    int e=5,n=0, a;
   
    
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
	gets(fspa[n].nome);
	printf("Peso ao Entrar(em quilos):");
	scanf("%d",&(fspa[n].pe));
	printf("Dias de Tratamento:");
	scanf("%d",&(fspa[n].diast));
	
	fspa[n].status = 'B';
	n++;
	
}

struct fichaspa DarAlta(int a) {
	int perdapeso;
	
	printf("Peso ao Sair(em gramas):");
	scanf("%d",&(fspa[a].ps));
	
	perdapeso = ((fspa[a].pe)*1000) - fspa[a].ps;
	fspa[a].status = 'A';
	printf("Perda de Peso: %d gramas", perdapeso);
	
}



int main(){
	
	
    while(e != 0){
    	printf("MENU\n");
    	printf("- 0 para finalizar o programa\n");
    	printf("- 1 para cadastrar um novo paciente\n");
    	printf("- 2 para dar alta ao paciente\n");
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
	}
	
	
	

	
	
}
