#include <stdio.h>


int main (){


    int i = 0, bispo = 5,rainha = 8;


         //movimento da torre usando for
          printf("### Jogada da Torre ###\n");
     for ( i = 0; i < 5; i++)
     {
        printf("Direita\n"); //
     }
     
     i = 0;
     //movimento do bispo usando while
    printf("\n### Jogada do Bispo ###\n");
     while (i < bispo)
     {
        printf("Cima Direita\n");
        i++;
     }
     i = 0;
     //movimento da rainha usando do-while
     printf("\n### Jogada da Rainha ###\n");
     do{ 
        printf("Esquerda\n");
        i++;
     } while (i < rainha);
//final dos movimentos
    printf("\nAs peças foram movidas!!\n");
     
     
   return 0;  
}