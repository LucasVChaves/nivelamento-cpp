#include <iostream>
#include "objeto.hpp"
#include "robot.hpp"

#define COORDMAX 200
#define COORDMIN -200

int coordXEntrega = -14, coordYEntrega = -60;

int main() {
    // Faça o setup das classes robot e objeto
    Robot robot;
    robot.posX = 0;
    robot.posY = 0;
    robot.velX = 1;
    robot.velY = 1;
    robot.pegouObjeto = false;

    Objeto objeto;
    objeto.coordX = 10;
    objeto.coordY = 23;

    // Loop do jogo 
    // Modifique esta parte
    // Menos o codigo marcado com **
    while (true) {
        if((robot.posX >= COORDMIN && robot.posX <= COORDMAX) && (robot.posY >= COORDMIN && robot.posY <= COORDMAX)){

            // Faça aqui sua lógica de jogo
            
            // Ir até o objeto:
            if(robot.posX < objeto.coordX && !robot.pegouObjeto) {
                robot.andarX(true);
                robot.printCoord();
            } else if(robot.posY < objeto.coordY && !robot.pegouObjeto){
                robot.andarY(true);
                robot.printCoord();
            }

            // Check pra ver se eu peguei o objeto:
            if(robot.posX == objeto.coordX && robot.posY == objeto.coordY){
                robot.pegouObjeto = true;
                std::cout << "Peguei!" << std::endl;
            }

            if(robot.posX > coordXEntrega && robot.pegouObjeto) {
                robot.andarX(false);
                robot.printCoord();
            } else if(robot.posY > coordYEntrega && robot.pegouObjeto){
                robot.andarY(false);
                robot.printCoord();
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