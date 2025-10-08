#include <iostream>
#include "carro.h"
    //construtor
    Carro::Carro( int a = 0, float km = -1, float v = -1){
        ano = a;
        velocidade = km;
        preco = v;
    }

    void Carro::setano( int a){
        ano = a;
    }
    int Carro::getano(){
        return ano;
    }

    void Carro::setpreco( float v){
        preco = v;
    }
    float Carro::getpreco(){
        return preco;
    }

    void Carro::setvelocidade( float km){
        velocidade = km;
    }
    float Carro::getvelocidade(){
        return velocidade;
    }