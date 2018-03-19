#include <stdio.h>

// Programa simples para dizer se um número natural inteiro menor ou igual a 100 é primo
// Feito por Isaías Fortes(Arseth1502)
// 18/03/2018

int n,conta,contb,contc,div, a[100000],soma;

int main()

{
 printf("Insira um numero natural inteiro menor ou igual a 100000: ");
 scanf("%d", &n);
 soma=0;
 
   for(conta=1; conta<=n; conta++)
 {
   div = n%conta;
   printf("Mod %d = %d \n" , conta, div);
   a[conta] = div;
 }
 
   for(contb=1; contb<=n; contb++)
 {
   printf("Elemento %d da Array = %d \n", contb,a[contb]);
 }
 
 for(contc=1; contc<=n; contc++)
 {
   if(a[contc]== 0)
   soma= soma+1;
 }
 if(soma==2)
 printf("O numero %d e primo." , n);
 else
 printf("O numero %d nao e primo." , n);
}

