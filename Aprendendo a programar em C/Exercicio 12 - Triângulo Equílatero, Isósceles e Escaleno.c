#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
   setlocale(LC_ALL, "");

   int a, b, c;

   printf("Digite o valor do primeiro lado do tri�ngulo: ");
   scanf("%d", &a);
   printf("\nDigite o valor do segundo lado do tri�ngulo: ");
   scanf("%d", &b);
   printf("\nDigite o valor do terceiro lado do tri�ngulo: ");
   scanf("%d", &c);

   if( (a == b) && (b == c) ) {
        printf("\nEsse tri�ngulo � Equ�latero.\n");
    } else if( (a == b) && (b != c) || (a != b) && (b == c) || (b == c) && (c != a) || (a == c) && (c != b)) {
        printf("\nEsse tri�ngulo � Is�sceles.\n");
    } else {
        printf("\nEsse tri�ngulo � Escaleno.\n");
    }
    return 0;
}
