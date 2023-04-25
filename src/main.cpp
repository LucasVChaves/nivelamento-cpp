#include <iostream>
// Inclua o header do objeto.
#include "robot.hpp"

#define COORDMAX 200
#define COORDMIN -200
int coordXEntrega = -14, coordYEntrega = -60;

int main() {

    // Faça o setup das classes robot e objeto
    Robot robot;

    // Loop do jogo 
    // Modifique esta parte
    // Menos o codigo marcado com **
    while (true) {
        if((robot.posX >= COORDMIN && robot.posX <= COORDMAX) && (robot.posY >= COORDMIN && robot.posY <= COORDMAX)){

            //Faça aqui sua lógica de jogo

            // **
            // Verifica se chegou ao lugar certo com o objeto
            if(robot.posX == coordXEntrega && robot.posY == coordYEntrega && robot.pegouObjeto){
                std::cout<< "Parabéns, você ganhou o jogo." << std::endl;
                break;
            }
        }
        else {
            std::cout<< "Você saiu do mapa!!" << std::endl;
            break;
        }
    }

    return 0;
}