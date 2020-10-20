#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int dia, mes, ano;
    int dia2, mes2,ano2;

    printf("Digite um Dia: ");
    scanf("%d", &dia);
    printf("\nDigite um Mês: ");
    scanf("%d", &mes);
    printf("\nDigite um Ano: ");
    scanf("%d", &ano);

    printf("\nDigite um Dia: ");
    scanf("%d", &dia2);
    printf("\nDigite um Mês: ");
    scanf("%d", &mes2);
    printf("\nDigite um Ano: ");
    scanf("%d", &ano2);

    if( (ano > ano2) ) {
        printf("\nA data %d% d %d é a maior cronologicamente.\n", dia, mes, ano);
   } else if( (ano == ano2) && (mes == mes2) && (dia >= dia2) ) {
        printf("\nA data %d %d %d  é a maior cronologicamente.\n", dia, mes, ano);
   } else {
        printf("\nA data %d %d %d é a maior cronologicamente.\n", dia2, mes2, ano2);
   }






    return 0;
}
