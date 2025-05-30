#include <stdio.h>


// MOVIMENTO DO BISPO COM RECURSIVA

// Função recursiva para imprimir números de n até 1

void recursive(int n) {  //criando o recursive
    if (n > 0)  {           // colocando decremento no recursivo até zerar
        recursive(n - 1); 
        
        if (n % 2== 1){         // se recursive for impar, imprimir "CIMA"
            printf("BISPO - CIMA\n");  
    }else if (n % 2== 0)         // // se recursive for par, imprimir "DIREITA"
    {
        printf("BISPO - DIREITA\n");
    }

}
}
int main() {
    recursive(10);                  //mandei imprimir 10x porque uma seria para CIMA e outra para DIREITA

    






               //MOVIMENTO DA cavalo

int cavalo;         ///criando a variavel

for (cavalo= 0; cavalo <=2; cavalo++) //definindo as condições
{
if (cavalo==2)
{
    printf("CAVALO - DIREITA\n");
} else {
     printf("CAVALO - CIMA\n");
}


}


            //MOVIMENTO DA RAINHA oito casas para a esquerda.


                int rainha=1;
    while (rainha<=8)
    
    {
        printf("RAINHA - ESQUERDA\n");
        rainha++;
    }



                //MOVIMENTO DA TORRE



                int torre=1;

    do
    {
        printf(" TORRE - DIREITA\n");
        torre++;
    } while (torre<=5);
    return 0;
}


                // Não consegui fazer todos com o recursiveloop
                //porque sempre que comecei a utilizar para outra peça
                // na hora de executar dava erro