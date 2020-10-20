#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "");

    char letra;
    int temperatura, celsius, fahrenheit;

    printf("Digite F para Fahrenheit ou C para Celsius: ");
    scanf("%c", &letra);
    printf("\nDigite a temperatura: ");
    scanf("%d", &temperatura);

    if(letra == 'F') {
    printf("\nA temperatura é de %d° Fahrenheit.\n", temperatura);
    celsius = (temperatura - 32) * 5/9;
    printf("\nO valor é de %d° Celsius.\n", celsius);
    } else if(letra == 'C') {
    printf("\nA temperatura é de %d° Celsius.\n", temperatura);
    fahrenheit = (temperatura * 1.8) + 32;
    printf("\nO valor é de %d° Fahrenheit.\n", fahrenheit);
    }


    return 0;
}
