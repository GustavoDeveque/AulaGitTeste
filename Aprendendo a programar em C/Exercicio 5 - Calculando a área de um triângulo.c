#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    float a, b, resultado;

    printf("Digite a altura do triângulo: ");
    scanf("%f", &a);
    printf("\nDigite a base do triângulo: ");
    scanf("%f", &b);

    resultado = a * b / 2;

    printf("\nA área do triângulo é: %.2f\n", resultado);

    return 0;
}
