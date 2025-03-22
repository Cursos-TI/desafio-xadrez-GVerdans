// https://github.com/GVerdans/Programacao-em-C
// https://github.com/Cursos-TI/desafio-xadrez-GVerdans/tree/main

#include <stdio.h>

int main() {

    int opcaoXadrez;
    int movTorrre = 0, movBispo = 0, movRainha = 0;

    printf("++++++++++++++++++++++++++\n");
    printf("||Mova as peças de Xadrez||\n");
    printf("|| 1. Torre              ||\n");
    printf("|| 2. Bispo              ||\n");
    printf("|| 3. Rainha             ||\n");
    printf("|| 4. Cavalo             ||\n");
    printf("+++++++++++++++++++++++++++\n\n");
    printf("Escolha qual peça você quer mover: ");
    scanf("%d", &opcaoXadrez);

    switch (opcaoXadrez){
        case 1:
            printf("\nVoce escolheu a Torre !\n\n");
            
            for(movTorrre ; movTorrre < 5 ; movTorrre++){
                printf("Torre moveu para direita\n");
            }
        break;
            
        case 2:
            
            printf("\nVoce escolheu o Bispo !\n\n");
            
            do{
                printf("Bispo moveu-se para diagonal direita !\n");
                movBispo++;
            } while(movBispo < 5);
            
            
        break;
            
        case 3:
            
            printf("\nVoce escolheu a Rainha !\n\n");
            
            while(movRainha < 8){
                printf("Rainha se Moveu para Esquerda !\n");
                movRainha++;
            }
        break;
            
        case 4:
            printf("\nVoce escolheu o Cavalo !\n\n"); // duas para baixo e uma para esquerda.

            for (int i = 0; i < 2; i++) { // Loop para mover duas casas para baixo
                printf("O cavalo se moveu para baixo!\n");
                
                while(i == 1){ // Loop para o cavalo se mover para esquerda quando bater as duas casas para baixo.
                    printf("O Cabalo se moveu para esquerda !\n");
                    i++;
                    // printf("%d\n", i); 
                }
            
            }



        break;

    }
    
    return 0;
}
