#include <iostream>
// Inclua o cabeçalho robot.hpp
#include "robot.hpp"

void Robot::andarX(bool negPos) {
    int posX = this->posX;
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
    int posY = this->posY;
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