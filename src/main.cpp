#include <iostream>
#include "objeto.hpp"
#include "robot.hpp"

int coordMax = 200, coordMin = -200;
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
        if((robot.posX >= coordMin && robot.posX <= coordMax) && (robot.posY >= coordMin && robot.posY <= coordMax)){

            // Faça aqui sua lógica de jogo
            
            // Ir até o objeto:
            for(int i = 0; i != objeto.coordX; i++){
                robot.andarX(true);
                for(int j = 0; j != objeto.coordY;){
                    robot.andarY(true);
                }
            }

            // Check pra ver se eu peguei o objeto:
            if(robot.posX == objeto.coordX && robot.posY == objeto.coordY){
                robot.pegouObjeto = true;
            }

            // Ir até a entrega:
            for(int i = 0; i != coordXEntrega; i++){
                robot.andarX(false);
                for(int j = 0; j != objeto.coordY; j++){
                    robot.andarY(true);
                }
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