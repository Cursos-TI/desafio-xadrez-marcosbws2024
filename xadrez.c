#include <stdio.h>
#include <stdbool.h>

int main()
{
    /*VARIAVEIS QUE RECEBEM O VALOR DO USUARIO*/
    int moveTorre, moveRainha, moveBispo;
    /*VARIAVEIS QUE PERTENCEM A CONTAGEM DOS LAÇOS */
    int contTorre, contRainha, contBispo;
    /*VARIAVEIS QUE PARA INDICAR AS DIREÇÕES QUE AS PEÇAS DEVEM IR*/
    int direcaoTorre, direcaoBispo, direcaoRainha;
    /*VARIAVEIS PARA MOVER O CAVALO*/
    int moveCavalo = 1, contCavalo,direcaoMoveCavalo;
    bool ladoDireito, ladoEsquerdo;
    int direcaoCavalo=0;
    
    
    

    /*ENTRADA DO USUARIO PARA INSERIR QUANTAS CASAS A TORRE DEVE PERCORRER*/
    printf("Insira quantas casas a Torre deve se mover: ");
    fflush(stdin);//limpar buffer
    scanf("%d",&moveTorre);
    
    /*ESCOLHA A DIREÇÃO DA TORRE*/
    printf("Escolha a direção que a Torre deve Percorrer:\n");
    printf("\n1.Cima\n2.Baixo\n3.Esquerda\n4.Direita\n");
    fflush(stdin);//limpar buffer
    scanf("%d",&direcaoTorre);
    
    /*ENTRADA DO USUARIO PARA INSERIR QUANTAS CASAS A RAINHA DEVE PERCORRER*/
    printf("Insira quantas casas a Rainha deve se mover: ");
    fflush(stdin);//limpar buffer
    scanf("%d",&moveRainha);
    
    /*ESCOLHA A DIREÇÃO DA RAINHA*/
    printf("\nEscolha a direção que a Rainha deve Percorrer:\n");
    printf("\n1.Cima\n2.Baixo\n3.Esquerda\n4.Direita\n");
    fflush(stdin);//limpar buffer
    scanf("%d",&direcaoRainha);
    
     /*ENTRADA DO USUARIO PARA INSERIR QUANTAS CASAS A BISPO DEVE PERCORRER*/
    printf("Insira quantas casas o Bispo deve se mover: ");
    fflush(stdin);//limpar buffer
    scanf("%d",&moveBispo);
    
    /*ESCOLHA A DIREÇÃO DO BISPO*/
    printf("\n1.Para Cima Diagonal Direita \n2.Para Cima Diagonal Esquerda\n3.Para baixo Diagonal Esquerda\n4.Para Baixo Diagonal Direita\n");
    fflush(stdin);//limpar buffer
    scanf("%d",&direcaoBispo);
    
    /*ESCOLHA A DIREÇÃO DO CAVALO*/
    printf("\nEscolha a direção que a Cavalo deve Percorrer:\n");
    printf("\n1.Para Cima\n2.Para Baixo\n");
    fflush(stdin);//limpar buffer
    scanf("%d",&direcaoMoveCavalo);
    printf("\nEscolha a direção final do Cavalo:\n");
    printf("\n1.Para Direita\n2.Para Esquerda\n");
    fflush(stdin);//limpar buffer
    scanf("%d",&direcaoCavalo);
    
    
    
    /*LAÇO SIMULANDO A MOVIMENTAÇÃO DA TORRE*/
    printf("\nMovimentação da Torre\n\n");
    for(contTorre=0;contTorre<=moveTorre; contTorre++){
        switch(direcaoTorre){
        case 1:
         printf("Para Cima (N Casas: %d)\n",contTorre);
        break;
         
        case 2: 
          printf("Para Baixo (N Casas: %d)\n",contTorre);
        break;
        
        case 3: 
          printf("Para Esquerda (N Casas: %d)\n",contTorre);
        break;
          
         case 4: 
          printf("Para direita (N Casas: %d)\n",contTorre);
         break;
          
        }
    }

    /*LAÇO SIMULANDO A MOVIMENTAÇÃO DA RAINHA*/
    printf("\n\nMovimentação da Rainha\n\n");
    
    for(contRainha=0;contRainha<=moveRainha; contRainha++){
        switch(direcaoRainha){
        
        case 1:
         printf("Para Cima (N Casas: %d)\n",contRainha);
        break;
         
        case 2: 
          printf("Para Baixo (N Casas: %d)\n",contRainha);
        break;
        
        case 3: 
            printf("Para Esquerda (N Casas: %d)\n",contRainha);
        break;
          
        case 4: 
            printf("Para direita (N Casas: %d)\n",contRainha);
        break;
          
        }
    }
    
    /*LAÇO SIMULANDO A MOVIMENTAÇÃO DA BISPO*/
    printf("\n\nMovimentação do Bispo\n\n");
    for(contBispo=0;contBispo<=moveBispo; contBispo++){
        switch(direcaoBispo){
        
        case 1:
         printf("Para Cima Diagonal Direta (N Casas: %d)\n",contBispo);
        break;
         
        case 2: 
          printf("Para Cima Diagonal Esquerda (N Casas: %d)\n",contBispo);
        break;
        
        case 3: 
            printf("Para Baixo Diagonal Esquerda (N Casas: %d)\n",contBispo);
        break;
          
        case 4: 
            printf("Para Baixo Diagonal Direita (N Casas: %d)\n",contBispo);
        break;
          
        }
    }
    
    
     /* LAÇO SIMULANDO A MOVIMENTAÇÃO DO CAVALO */
printf("\n\nMovimentação do Cavalo\n\n");

while (moveCavalo--) {
    ladoDireito = false; // Resetando a cada iteração
    ladoEsquerdo = false;

    for (contCavalo = 0; contCavalo < 2; contCavalo++) {
        switch (direcaoMoveCavalo) {
            case 1:
                printf("Para Cima (N Casas: %d)\n", contCavalo);
                if (direcaoCavalo == 1) { 
                    ladoDireito = true;
                }
                break;

            case 2:
                printf("Para Baixo (N Casas: %d)\n", contCavalo);
                if (direcaoCavalo == 2) {
                    ladoEsquerdo = true;
                }
                break;
        }
    }

 // Imprimir corretamente a direção
        if (ladoDireito) {
            printf(">> Movendo para a Direita\n");
        } 
        if (ladoEsquerdo) {
            printf(">> Movendo para a Esquerda\n");
        }
        if (!ladoDireito && !ladoEsquerdo) {
            printf(">> Nenhuma direção escolhida!\n"); // Debug para verificar problema
        }
}


    return 0;
}
