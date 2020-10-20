#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int x, y;

    printf("Digite um número inteiro para X: ");
    scanf("%d", &x);
    printf("\nDigite um número inteiro para Y: ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("\nO valor de X: %d",x);
    printf("\nO valor de Y: %d", y);

    return 0;
}
