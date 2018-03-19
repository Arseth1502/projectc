#include <stdio.h>

// Programa simples para dizer a data da páscoa, baseado no algorítmo de Jean Meeus
// Feito por Isaías Fortes(Arseth1502)
// 18/03/2018

int ano, a, b, c, d, e, f, g, h, i, k, l, m, n, p, dia;

int main()

{
 printf("Insira o ano: ");
 scanf("%d", &ano);
 
 a = ano%19;
 
 b = ano/100;
 
 c = ano%100;
 
 d = b/4;
 
 e = b%4;
 
 f = (b+8)/25;
 
 g = (b-f+1)/3;
 
 h = (19 * a + b - d - g + 15)%30;
 
 i = c/4;
 
 k = c%4;
 
 l = (32 + 2 * e + 2 * i - h - k )%7;
 
 m = (a + 11 * h + 22 * l ) / 451;
 
 n = (h + l - 7 * m + 114)/31; 
 
 p = (h + l - 7 * m + 114)%31; 
 
 dia = p+1;
 
 if(n == 4)
 printf("A pascoa vai cair no dia %d de Abril", dia);
 else
 printf("A pascoa vai cair no dia %d de Marco", dia); 
 
 
}

