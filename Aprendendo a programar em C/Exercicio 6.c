#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    float a, b, c, s;
    double A;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("\nDigite o valor de b: ");
    scanf("%f", &b);
    printf("\nDigite o valor de c: ");
    scanf("%f", &c);

    s = a + b + c / 2;

    A = sqrt (s * (s - a) * (s - b) * (s - c));

    printf("\nA área de A é: %.2lf\n", A);

    return 0;
}
