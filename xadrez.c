// https://github.com/GVerdans/Programacao-em-C
// https://github.com/Cursos-TI/desafio-xadrez-GVerdans/tree/main

/*
    Loops Complexos (Cavalo): Utilize loops aninhados com múltiplas variáveis e/ou condições para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
*/


#include <stdio.h>


void movTorre(int casaTorre){ // CINCO CASAS PARA DIREITA

    if(casaTorre > 0){
        printf("Torre moveu-se para direita !\n");
        
        movTorre(casaTorre - 1);
    }

}

void movBispo(int casaBispo){ // CINCO CASA NA DIAGONAL DIREITA

    if(casaBispo > 0){
        for(int i = 0; i < 1; i++){
            printf("O bispo se moveu para CIMA !\n");

            for(int j = 0; j < 1; j++){
                printf("O bispo se moveu para DIREITA !\n");
            }
        }
        printf("\n");

        movBispo(casaBispo - 1);
    }



    // if(casaBispo > 0){ // ISSO AQUI TA FUNCIONANDO !!!!!!!!!!!!!!!!!!!!
    //     printf("Bispo se moveu para direita !\n");
    //     printf("Bispo se moveu para cima !\n");
    //     printf("\n");
    // }

    // movBispo(casaBispo - 1);

}

void movRainha(int casaRainha){ // OITO CASAS PARA ESQUERDA

    if(casaRainha > 0){
        printf("A rainha se moveu para esquerda !\n");
        movRainha(casaRainha - 1);
    }
}

void movCabalo(int casaCabalo){ // DUAS PARA CIMA, UMA PARA DIREITA

    if(casaCabalo > 0){

        for(int i = 0; i < 2; i++){
            printf("O cavalo se moveu para CIMA !\n");
            
            for(int j = 0; i > j; j++){
                printf("O cavalo se moveu para DIREITA !\n");
            }
           
        }

        printf("\n");
        movCabalo(casaCabalo - 1);
    }

}


int main() {

    int opcaoXadrez;
    const int casaTorre = 5, casaBispo = 5, casaRainha = 8; // DEFINE O NUMERO DE CASAS QUE AS PEÇAS VÃO ANDAR!
    const int qtdCavaloAnda = 1; // Quantidade de vezes que o cavalo faz o L;

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
            
            movTorre(casaTorre);
        break;
            
        case 2:
            
            printf("\nVoce escolheu o Bispo !\n\n");
            
            movBispo(casaBispo);
            
        break;
            
        case 3:
            
            printf("\nVoce escolheu a Rainha !\n\n");
            
            movRainha(casaRainha); // Chama a função movRainha, e o quantidade de casas a serem andadas foi definida na variavel 'casaRainha'.
        break;
            
        case 4:
            printf("\nVoce escolheu o Cavalo !\n\n"); // duas para CIMA e uma para DIREITA.
            
            movCabalo(qtdCavaloAnda);
        break;

    }
    
    return 0;
}
