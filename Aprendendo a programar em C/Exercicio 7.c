e#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
        setlocale(LC_ALL, "");

    float r, pi = 3.14, A, P;


    printf("Digite o valor do Raio do disco: ");
    scanf("%f", &r);

    A = pi * r*r;

    P = 2 * pi * r;

    printf("\nO valor da �rea �: %.2f\n", A);
    printf("\nO valor do Per�metro �: %.2f\n", P);


    return 0;
}
