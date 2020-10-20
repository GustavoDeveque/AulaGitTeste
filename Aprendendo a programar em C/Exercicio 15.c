#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    char sexo;
    int idade, contribuicao;

    printf("Informe o sexo, M para masculino e F para Feminino: ");
    scanf("%c", &sexo);
    printf("\nInforme a sua idade: ");
    scanf("%d", &idade);
    printf("\nInforme o tempo de contribuição: ");
    scanf("%d", &contribuicao);

    if( (sexo == 'M') && (idade >= 65) && (contribuicao >= 10) ) {
        printf("\nAposentável\n");
    } else if( (sexo == 'M') && (idade >= 63) && (contribuicao >= 15) ) {
        printf("\nAposentável\n");
    } else if( (sexo == 'F') && (idade >= 63) && (contribuicao >= 10) ) {
        printf("\nAposentável\n");
    } else if ( (sexo == 'F') && (idade >= 61) && (contribuicao >= 15) ) {
        printf("\nAposentável\n");
    } else {
        printf("\nNão Aposentável\n");
    }

    return 0;
}
