#include "salaAula.cpp"
#include "Salareuniao.cpp"
#include "Auditorio.cpp"
#include <vector>

using namespace std;

int main() {
    int numSalas;

    cin >> numSalas;

    vector<Sala*> ListaSalas;

    string tipo;
    int capacidade;
    bool disponivel;
    bool ultimoAtributo; //possuiQuadrInterativo ou possuiVideoConferencia ou possuiSistemaSom

    for(int i = 0; i < numSalas; i++) {
        cin >> tipo >> capacidade >> disponivel >> ultimoAtributo;

        Sala* novaSala = nullptr;

        if (tipo == "SalaAula") {
            novaSala = new SalaAula(tipo, capacidade, disponivel, ultimoAtributo);
        }
        else if (tipo == "SalaReuniao") {
            novaSala = new SalaReuniao(tipo, capacidade, disponivel, ultimoAtributo);
        }
        else if (tipo == "Auditorio") {
            novaSala = new Auditorio(tipo, capacidade, disponivel, ultimoAtributo);
        }

        if (novaSala != nullptr) {
            ListaSalas.push_back(novaSala);
        }
    }

    int numReservas;

    cin >> numReservas;

    for(int i = 0; i < numReservas; i++) {
        string tipoSala;
        int qtdPessoas;
        string nomeResponsavel;

        cin >> nomeResponsavel >> tipoSala >> qtdPessoas;

        bool reservaFeita = false;

        for (Sala* sala : ListaSalas) {
            if (sala->getTipo() == tipoSala) {
                sala->reservar(qtdPessoas, nomeResponsavel);
                reservaFeita = true;
                break;
            }
        }
    }

    for (Sala* s : ListaSalas) {
        delete s;
    }
    
    return 0;
};
