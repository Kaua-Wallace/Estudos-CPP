#include "salaAula.cpp"
#include "Salareuniao.cpp"
#include "Auditorio.cpp"

using namespace std;

int main() {
    int numSalas;

    cin >> numSalas;

    string tipo;
    int capacidade;
    bool disponivel;
    bool ultimoAtributo; //possuiQuadrInterativo ou possuiVideoConferencia ou possuiSistemaSom

    for(int i = 0; i < numSalas; i++) {
        cin >> tipo >> capacidade >> disponivel >> ultimoAtributo;
    }
};
