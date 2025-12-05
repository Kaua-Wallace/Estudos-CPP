#include "SalaAula.h"

SalaAula::SalaAula ( const string& tipoSala, const int& capacidadeSala, const bool& disponibilidadeSala, const bool& QuadroSalaAula) :
    Sala(tipoSala, capacidadeSala, disponibilidadeSala) {
        possuiQuadroInterativo = QuadroSalaAula;
}

bool SalaAula::reservar(int pessoas, string nomeResponsavel) {
    if (getDisponivel() && pessoas >= 30 && pessoas <= getCapacidade()) {
        setDisponivel(false);
        setResponsavel(nomeResponsavel);
        //TipoSala nomeResponsavel qtdPessoas reservou motivo
        cout << getTipo() << " " << nomeResponsavel << " " << pessoas << " " << "true" << " " << " estavaLivre" << endl;
        
        if (!getPossuiQuadroInterativo()){
            cout << "nao_possui_quadro_interativo" << endl;
        }
        return true;
    }

    else {
        //reserva falhou
        string motivo;
        if (!getDisponivel()) motivo = "estavaReservada";
        else if (pessoas > getCapacidade()) motivo = "capacidade_excedida";
        else if (pessoas < 30) motivo = "minimo_de_pessoas_nao_atingido";

        cout << getTipo() << " " << nomeResponsavel << " " << pessoas << " " << "false" << " " << motivo << endl;
        return false;
    }
}

/*
SalaAula.cpp
Implementação dos métodos de SalaAula.
Responsabilidades:
- Inicializar atributos específicos da sala de aula;
- Aplicar validações particulares em reservar e delegar lógica comum para Sala quando adequado.
Manter código claro sobre quais regras são locais à SalaAula.
*/