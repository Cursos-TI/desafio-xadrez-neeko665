#include <stdio.h>


int main (){

    //informações das peças
    int i = 0, bispo = 5,rainha = 8 ,cavalo = 0 ;


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
        printf("esquerda\n");
        i++;

        
     } while (i < rainha);
     i = 0;
    
     // movimento do cavalo usando for e while
     printf("\n### Jogada do Cavalo ###\n");
      while (cavalo < 1)
      {
        
        for ( i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        cavalo++;
      }
      
       
     
//final dos movimentos
    printf("\nAs peças foram movidas!!\n");
     
     
   return 0;  
}