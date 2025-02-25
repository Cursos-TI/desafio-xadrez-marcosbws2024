#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void moveTorre(int casas,int lado)
{
    if (casas > 0 )
    {
        switch(lado)
        {
          case 1:
            moveTorre(casas - 1, lado);
            printf(">>Movendo a Torre para %dª casa para Direita\n", casas);
          break;
          
          case 2:
             moveTorre(casas - 1, lado);
             printf(">>Movendo a Torre para %dª casa para Esquerda\n", casas);
          break;
          
          case 3:
             moveTorre(casas - 1, lado);
             printf(">>Movendo a Torre para %dª casa para Frente\n", casas);
          break;
          
          case 4:
             moveTorre(casas - 1, lado);
             printf(">>Movendo a Torre para %dª casa para Tras\n", casas);
          break;
         
        }
    }
}

/* MOVENDO A RAINHA */
void moveRainha(int casas, int lado) {
    if (casas > 0) {
        // Primeiro imprime o movimento atual
        switch (lado) {
            case 1:
                moveRainha(casas - 1, lado);
                printf(">>Movendo Rainha %dª casa para Direita\n", casas);
                break;
            case 2:
                moveRainha(casas - 1, lado);
                printf(">>Movendo Rainha %dª casa para Esquerda\n", casas);
                break;
            case 3:
                moveRainha(casas - 1, lado);
                printf(">>Movendo Rainha %dª casa para Frente\n", casas);
                break;
            case 4:
                moveRainha(casas - 1, lado);
                printf(">>Movendo Rainha %dª casa para Trás\n", casas);
                break;
            case 5:
                moveRainha(casas - 1, lado);
                printf(">>Movendo Rainha %dª casa Diagonal Frente Direita\n", casas);
                break;
            case 6:
                printf(">>Movendo Rainha %dª casa Diagonal Frente Esquerda\n", casas);
                break;
            case 7:
                moveRainha(casas - 1, lado);
                printf(">>Movendo Rainha %dª casa Diagonal para Trás Direita\n", casas);
                break;
            case 8:
                moveRainha(casas - 1, lado);
                printf(">>Movendo Rainha %dª casa Diagonal para Trás Esquerda\n", casas);
                break;
        }
       
    }
}

/*Função Recursiva que simula o movimento do Bisco*/
void moveBispo(int casas, int lado){
     if (casas > 0) {
        switch (lado) {
            
            case 1:
                    moveBispo(casas - 1, lado);
                printf(">>Movendo Bispo %dª casa para Diagonal Direita\n", casas);
                break;
            case 2:
                    moveBispo(casas - 1, lado);
                printf(">>Movendo Bispo %dª casa para Diagonal Esquerda\n", casas);
                break;
            case 3:
                    moveBispo(casas - 1, lado);
                printf(">>Movendo Bispo %dª casa para Diaagonal Atras Direita\n", casas);
                break;
            case 4:
                    moveBispo(casas - 1, lado);
                printf(">>Movendo Bispo %dª casa para Trás Esquerda\n", casas);
                break;
        
        }

    }
     
}

void moveCavalo(int direcaoCavalo, int formaL) {
    
    int andaCavalo=2;
    bool ladoDireito = false; 
    bool ladoEsquerdo = false;
    bool paraCima = false;
    bool paraBaixo = false;
    
    for (int contCavalo = 0; contCavalo < 2 && andaCavalo > 0; contCavalo++, andaCavalo--) {
        switch (direcaoCavalo) 
        {  // Usando o parâmetro correto
            case 1:
                printf(">>Movendo Cavalo %dª Casa para Cima\n", contCavalo+1);
            break;
        
            case 2:
                printf(">>Movendo Cavalo %dª Casa para Baixo \n", contCavalo+1);
            break;
                
            case 3:
                printf(">>Movendo Cavalo %dª Casa para o Lado Esquerdo \n", contCavalo+1);
            break;
                
            case 4:
                printf(">>Movendo Cavalo %dª casa para o lado Direito\n", contCavalo+1);
            break;
            
        }
        
        //Define qual drireção o cavalo tomou para Cima ou para Baixo
            if (direcaoCavalo==1 || direcaoCavalo==2)
            {
                   //Decide para que lado o Cavalo vai terminar o L
                  switch (formaL) 
                  {  // Usando o parâmetro correto

                         case 1:
                         ladoEsquerdo = true;
                         break;
            
                         case 2:
                         ladoDireito = true;    
                        break;
                   }
                
            }
            
          //Define qual direção o cavalo tomou a Esquerda ou a direita
            if (direcaoCavalo==3 || direcaoCavalo==4){
                //Define se o cavalo termina o L para Cima o Para Baixo.
            switch (formaL) 
            {  // Usando o parâmetro correto

            case 1:
                  paraCima = true;
            break;
                
            case 2:
                paraBaixo = true;
            break;
            }
        }
    }
   
    /*Depois de definir tudo imprime após o termino do laço qual direção o cavalo terminou o L*/
    // Exibir a direção do movimento
    if (ladoDireito) {
        printf(">>Movimento em L erminando para a Direita\n");
    }
    if (ladoEsquerdo) {
        printf(">>Movimento em L Terminado para a Esquerda\n");
    }
    
    if (paraCima) {
        printf(">>Movimento em L Terminando para Cima\n");
    }
    
    if (paraBaixo) {
        printf(">>Movimento em L Termimando para Baixo\n");
    }
    if (!ladoDireito && !ladoEsquerdo && !paraCima && !paraBaixo) {
        printf(">>Nenhuma direção escolhida!\n");
    }
}


int main()
{
    //declaração das variaveis que receberão a leitura dos dados.
    int andaTorre;
    int ladoTorre;
    int andaRainha;
    int ladoRainha;
    int andaBispo;
    int ladoBispo;
    int andaCavalo;
    int ladoCavalo;
    int formaL;
    
    char resp;
    
do{//reiniciar todo o programa

    do
     {
         
        printf("\nQuantas casas a Torre deve andar ?\n");
        fflush(stdin);
        printf("Qtde Casas: ");
        scanf("%d",&andaTorre);
        printf("Em que que direção Torre deve andar \n1=>Direita\n2=>Esquerda\n3=>Frente\n4=>Tras\n");
        fflush(stdin);
        printf("Lado Escolhido: ");
        scanf("%d",&ladoTorre);
        printf("\n");
        
     }while(ladoTorre<1 || ladoTorre>4);
    
    
    //Função Chamando Movimento
    moveTorre(andaTorre,ladoTorre);
    
    /*DEFINIR MOVIMENTO DA RAINHA*/
    do
    {
        printf("\nQuantas casas a Rainha deve andar ?\n");
        fflush(stdin);
        printf("Qtde Casas: ");
        scanf("%d",&andaRainha);
        printf("Em que que direção Rainha deve andar \n1=>Direita\n2=>Esquerda\n3=>Frente\n4=>Tras\n5=>Diagonal Frente Esquerda\n6=> Diagonal Frente Esquerda\n7=>Diagonal para Tras Direita\n8=>Diagonal para Tras Esquerda\n");
        fflush(stdin);
        printf("Lado Escolhido: ");
        scanf("%d",&ladoRainha);
        printf("\n");
    }while(ladoRainha<1 || ladoRainha>8);
    
    //Função Chamando Movimento
    moveRainha(andaRainha,ladoRainha);
    
    /*DEFINIR MOVIMENTO DO BISPO*/
    do
    {//se escolher a opção errada volta pra definir novamente a movimentação do Bispo
        printf("\nQuantas casas a Bispo deve andar ?\n");
        fflush(stdin);
        printf("Qtde Casas: ");
        scanf("%d",&andaBispo);
        printf("\n");
    
        printf("Em que que direção o Bispo deve andar?\n1=>Diagonal Direita\n2=>Diagonal Esquerda\n3=>Diagonal Frente\n4=>Diagonal para Tras\n");
        fflush(stdin);
        printf("Direção Escolhida:");
        scanf("%d",&ladoBispo);
        printf("\n");
    
        if ( ladoBispo<1 || ladoBispo>4)
        {
          printf("Opção Invalida!!!\n\n");
        }
    }while(ladoBispo<1 || ladoBispo>4);
    
    //Função Chamando Movimento
    moveBispo(andaBispo,ladoBispo);
    
    /*MOVIMENTAÇÃO DO CAVALO*/
    do 
    {//Faz esse trecho de codigo ser repetido até uma das opções corretas de 
        
        printf("\nDireção do Cavalo: \n1=>Cima\n2=>Baixo\n3=>Direita\n4=>Esquerda\n");
        scanf("%d",&ladoCavalo);
    
            //Testa qual das opções de lado tem Equivalencia com ir Para Direita ou Para Esquerda

    if (ladoCavalo==1 || ladoCavalo==2)
    {
            printf("Escolha Direção: \n1. Esquerda\n2. Direita\n");
            fflush(stdin);
            printf("Direção Escolhida: ");
            scanf("%d",&formaL);
            printf("\n");
            
            
    //Testa qual das opções de lado tem Equivalencia com ir Para Cima ou Para Baixo
    } else if(ladoCavalo==3 || ladoCavalo==4)
    {
  
            printf("Escolha Direção: \n1.Cima \n2.Baixo\n");
            fflush(stdin);
            printf("Lado Escolhido: ");
            scanf("%d",&formaL);
            printf("\n");
    }
    
    if (ladoCavalo<1 || ladoCavalo>4){
      printf("Opção Invalida!!!\n\n");
    }
    
    }while(ladoCavalo<1 || ladoCavalo>4);
    
    //Função Chamando Movimento
    moveCavalo(ladoCavalo, formaL);

printf("\nDeseja jogar novammente? [S|N]:");
scanf(" %c",&resp);
system("clear");
    
}while(resp=='S'|| resp=='s');

    return 0;
}