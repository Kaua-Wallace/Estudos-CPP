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


    int numReservas;

    cin >> numReservas;

    for(int i = 0; i < numReservas; i++) {
        string tipoSala;
        int qtdPessoas;
        string nomeResponsavel;

        cin >> nomeResponsavel >> tipoSala >> qtdPessoas ;
    }

    return 0;
};
