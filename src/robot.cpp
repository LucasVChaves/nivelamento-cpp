#include <iostream>
#include "robot.hpp"

void Robot::andarX(bool negPos) {
    int velX = this->velX;
    if (posX >= -100 && posX <= 100) {
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
}

void Robot::andarY(bool negPos) {
    int velY = this->velY;
    if (posY >= -100 && posY <= 100) {
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
}

void Robot::printCoord(){
    std::cout << "Estou em X=" << this->posX << " e Y=" << this->posY << std::endl;
}