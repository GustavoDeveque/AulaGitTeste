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
    printf("\nInforme o tempo de contribui��o: ");
    scanf("%d", &contribuicao);

    if( (sexo == 'M') && (idade >= 65) && (contribuicao >= 10) ) {
        printf("\nAposent�vel\n");
    } else if( (sexo == 'M') && (idade >= 63) && (contribuicao >= 15) ) {
        printf("\nAposent�vel\n");
    } else if( (sexo == 'F') && (idade >= 63) && (contribuicao >= 10) ) {
        printf("\nAposent�vel\n");
    } else if ( (sexo == 'F') && (idade >= 61) && (contribuicao >= 15) ) {
        printf("\nAposent�vel\n");
    } else {
        printf("\nN�o Aposent�vel\n");
    }

    return 0;
}
