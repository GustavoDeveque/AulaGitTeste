#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "");

    int a, b, c;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &b);
    printf("Digite o terceiro n�mero inteiro: ");
    scanf("%d", &c);

       if( (a <= b) && (b <= c) ) {
        printf("\nOs n�meros em ordem crescente s�o: %d %d %d\n", a, b, c);
    }  if( (a < c) && (c < b) ) {
        printf("\nOs n�meros em ordem crescente s�o: %d %d %d\n", a, c, b);
    }
       if( (b < a) && (a < c) ) {
        printf("\nOs n�meros em ordem crescente s�o: %d %d %d\n", b, a, c);
    }  if( (b < c) && (c < a) ) {
        printf("\nOs n�meros em ordem crescente s�o: %d %d %d\n", b, c, a);
    }
       if( (c < b) && (b < a) ) {
        printf("\nOs n�meros em ordem crescente s�o: %d %d %d\n", c, b, a);
    }  if( (c < a) && (a < b) ) {
        printf("\nOs n�meros em ordem crescente s�o: %d %d %d\n", c, a, b);
    }

    return 0;
}
