#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "");

    double x, resultado;

    printf("Digite um número real: ");
    scanf("%lf", &x);

    resultado = sqrt(x) + x/2 + x*x;

    printf("\nO resultado é: %.2lf\n", resultado);


    return 0;
}
