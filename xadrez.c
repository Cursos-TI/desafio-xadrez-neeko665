#include <stdio.h>

//programação para mover as peças

// Função recursiva para mover a Torre para a direita
void movertorre(int casas){
    if (casas > 0) {
        
        printf("direita\n");
        movertorre(casas - 1); // chamada recursiva
    }
}
// Função recursiva para mover o bispo com loops aninhados
void moverbispo(int passos) {
    if (passos > 0) { // Loop externo: simula movimento vertical
       for (int i = 0; i < 1; i++) {
       // Loop interno: simula movimento horizontal 
            for (int j = 0; j < 1; j++) {
                printf("Cima e Direita\n");
            }
        }

        // Chamada recursiva para o próximo passo diagonal
        moverbispo(passos - 1);
    }
}
//Função recursiva para mover a rainha para a esquerda
void moverrainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
    
}
// loops alinhados e condições para os movimento do cavalo
void movercavalo(){

    for (int i = 0; i < 3; i++)
    {for (int j = 0; j < 3; j++)
     {//movimento em "L": 2 para cima, 1 para direita
      if (i == 2 && j == 1)
      {
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
        break; //finaliza o movimento do cavalo
      }else
      {
        continue; // ignora outras combinações
      }
      
      
     }
    
    }
    
}




int main (){



    //movendo as peças
    
    printf("\n### Jogada da torre ###\n");
    movertorre(5); //  5 casas para a direita

    printf("\n### Jogada do Bispo ###\n");
    moverbispo(5);  // 5 casas para cima, 1 para a direita em cada

    printf("\n### Jogada da Rainha ###\n");
    moverrainha(8); // 8 casas para esquerda

    
     printf("\n### Jogada do Cavalo ###\n");
      movercavalo();// fazendo um "L" para cima e direita
      
       
     
//final dos movimentos
    printf("\nAs peças foram movidas!!\n");
     
     
   return 0;  

}