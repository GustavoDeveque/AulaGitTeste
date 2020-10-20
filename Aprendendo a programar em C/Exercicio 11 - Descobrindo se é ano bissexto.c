#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL, "");

     int ano;
     printf("Digite o ano: ");
     scanf("%d", &ano);

     if(ano % 400 == 0) {
        printf("\nO ano de %d é bissexto.\n", ano);
     } else if( (ano % 4 == 0) && (ano % 100 != 0) ) {
        printf("\nO ano de %d é bissexto.\n", ano);
     }
     else {
        printf("\nO ano de %d não é bissexto.\n", ano);
     }

    return 0;
}
