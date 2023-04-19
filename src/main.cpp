#include <iostream>
// Retirar depois
#include "robot.hpp"

int coordMax = 200, coordMin = -200;
int coordXObjeto = 30, coordYObjeto = 8;
int coordXEntrega = -14, coordYEntrega = -60;

int main() {

    // Setup da classe robot, retirar depois
    Robot robot;
    robot.posX = 0;
    robot.posY = 0;
    robot.velX = 1;
    robot.velY = 1;
    robot.pegouObjeto = false;

    // Loop do jogo 
    // Modifique esta parte
    // Menos o codigo marcado com **
    while (true) {
        if((robot.posX >= coordMin && robot.posX <= coordMax) && (robot.posY >= coordMin && robot.posY <= coordMax)){

            // retirar depois
            if(robot.posX == coordXObjeto && robot.posY == coordYObjeto){
                robot.pegouObjeto = true;
            }

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