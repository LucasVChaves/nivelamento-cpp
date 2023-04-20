#include <iostream>
// Inclue os headers
#include "robot.hpp"

int coordMax = 200, coordMin = -200;
int coordXEntrega = -14, coordYEntrega = -60;

int main() {

    // Faça o setup das classes robot e objeto
    Robot robot;

    // Loop do jogo 
    // Modifique esta parte
    // Menos o codigo marcado com **
    while (true) {
        if((robot.posX >= coordMin && robot.posX <= coordMax) && (robot.posY >= coordMin && robot.posY <= coordMax)){

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