#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
// Esse arquivo header não pode ser modificado durante o exercício
class Robot {
    public:
        // Coordenadas do robô
        int posX, posY;
        // Velocidade em cada eixo
        int velX, velY;

        // Flag para a posse do objeto
        bool pegouObjeto;

        // Movimenta o robô no eixo X
        // O bool negPos especifica se o robô vai ter velocidade positiva ou negativa em relação ao eixo
        void andarX(bool negPos);
        // Movimenta o robô no eixo Y
        // O bool negPos especifica se o robô vai ter velocidade positiva ou negativa em relação ao eixo
        void andarY(bool negPos);
        //Printa as coordenadas atuais
        void printCoord();

};

#endif