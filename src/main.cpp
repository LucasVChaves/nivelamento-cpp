#include <iostream>
#include "robot.hpp"

int coordMax = 200, coordMin = 200;
int coordXObjeto = 30, coordYObjeto = 8;
int coordXEntrega = -14, coordYEntrega = -60;

int main() {

    // Setup da classe robot
    Robot robot;
    robot.posX = 0;
    robot.posY = 0;
    robot.velX = 1;
    robot.velY = 1;
    robot.pegouObjeto = false;

    // Loop do jogo 
    while (true) {
        
    }
    

    return 0;
}