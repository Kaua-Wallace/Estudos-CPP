// link da playlist https://youtu.be/pYcneq-aOaQ?si=v7VENV67ReIkcp2H

// Operadores lógicos em C++
// E: &&
// OU: ||
// Negação: !

// Operador Ternário: ? :
// exemplo: (condição) ? valor1( se for V) : valor2( se for F)


#include <iostream>

#define pi 3.14

#define curtir cout << "Curta o video!" << endl;

using namespace std;

int t; // note que t é global
void inscrever() {
    cout << "Se inscreva no Canal do\nProfessor Douglas Maioli!\n";

}

int somar( int x, int y) {
    //int t;
    t = 1;
    int soma; 
    soma = x + y;
    
    return soma;
}

int main() {

    //int t;
    t = 0;

    inscrever();

    int a = 5, b = 4;
    int s;

    s = somar(a, b);

    cout << s << endl;

    cout << t << endl;

    cout << pi << endl;

    curtir;


    return 0;

}