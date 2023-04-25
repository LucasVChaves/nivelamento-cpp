#include <iostream>
#include "robot.hpp"

void Robot::andarX(bool negPos) {
    int velX = 1;
    if (negPos) {
        posX += velX;
    }
    else if (!negPos) {
        posX -= velX;
    }
    else {
        std::cout << "Especifique uma direção para a velocidade" << std::endl;
    }
}

void Robot::andarY(bool negPos) {
    int velY = 1;
    if (negPos) {
        posY += velY;
    }
    else if (!negPos) {
        posY -= velY;
    }
    else {
        std::cout << "Especifique uma direção para a velocidade" << std::endl;
    }
}

void Robot::printCoord(){
    std::cout << "Estou em X=" << this->posX << " e Y=" << this->posY << std::endl;
}