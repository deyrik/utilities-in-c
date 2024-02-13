#include "utilidades.h"



void limparTerminalUnix() {

    // caso eu queira relizar um atraso, posso pausar/esperar o processo usando a função 
    // sleep(2) //parametro e em segundos ;
    //faz parte da biblioteca <unistd.h> e está disponível em sistemas operacionais Unix-like, como Linux e macOS

    printf("\033[H\033[J"); //posiciona o cursor no inicio do terminal (posiçao \033[h) e limpa a partir dai (\033[j)
}