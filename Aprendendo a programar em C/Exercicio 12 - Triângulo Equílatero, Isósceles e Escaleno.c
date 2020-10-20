#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
   setlocale(LC_ALL, "");

   int a, b, c;

   printf("Digite o valor do primeiro lado do triângulo: ");
   scanf("%d", &a);
   printf("\nDigite o valor do segundo lado do triângulo: ");
   scanf("%d", &b);
   printf("\nDigite o valor do terceiro lado do triângulo: ");
   scanf("%d", &c);

   if( (a == b) && (b == c) ) {
        printf("\nEsse triângulo é Equílatero.\n");
    } else if( (a == b) && (b != c) || (a != b) && (b == c) || (b == c) && (c != a) || (a == c) && (c != b)) {
        printf("\nEsse triângulo é Isósceles.\n");
    } else {
        printf("\nEsse triângulo é Escaleno.\n");
    }
    return 0;
}
