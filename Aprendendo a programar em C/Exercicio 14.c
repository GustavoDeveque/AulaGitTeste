#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x, y;

   printf("Digite o valor de X: ");
   scanf("%d", &x);
   printf("\nDigite o valor de Y: ");
   scanf("%d", &y);

   if( (x > 0) && (y > 0) ) {
        printf("\nPertence ao primeiro quadrante.\n");
   } else if ( (x < 0) && (y > 0) ){
        printf("\nPertence ao segundo quadrante.\n");
   } else if ( (x < 0) && (y < 0) ){
        printf("\nPertence ao terceiro quadrante.\n");
   } else {
        printf("\nPertence ao quarto quadrante.\n");
   }

    return 0;
}
