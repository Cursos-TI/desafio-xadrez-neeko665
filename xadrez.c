#include <stdio.h>

//programação para mover as peças
void movertorre(int casas){
    if (casas > 0) {
        
        printf("direita\n");
        movertorre(casas - 1);
    }
}

void moverbispo(int vertical, int horizontal) {
    if (vertical > 0) {
        // Loop interno para movimento horizontal (Direita)
        for (int i = 0; i < horizontal; i++) {
            printf("Direita ");
        }
        // Movimento vertical (Cima) após cada passo na diagonal
        printf("Cima\n");

        // Chamada recursiva para próxima casa na diagonal
        moverbispo(vertical - 1, horizontal);
    }
}

void moverrainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
    
}

void movercavalo(){

    for (int i = 0; i < 3; i++)
    {for (int j = 0; j < 3; j++)
     {
      if (i == 2 && j == 1)
      {
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
        break; //finaliza o movimento do cavalo
      }else
      {
        continue; // continua e ignora
      }
      
      
     }
    
    }
    
}




int main (){



    //movendo as peças
    
    printf("\n### Jogada da torre ###\n");
    movertorre(5);

    printf("\n### Jogada do Bispo ###\n");
    moverbispo(5, 1);  // 5 casas para cima, 1 para a direita em cada

    printf("\n### Jogada da Rainha ###\n");
    moverrainha(8);

    
     printf("\n### Jogada do Cavalo ###\n");
      movercavalo();
      
       
     
//final dos movimentos
    printf("\nAs peças foram movidas!!\n");
     
     
   return 0;  

}