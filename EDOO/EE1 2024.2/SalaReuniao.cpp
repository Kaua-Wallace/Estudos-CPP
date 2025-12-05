#include "SalaReuniao.h"

SalaReuniao::SalaReuniao( const string& tipoSala, const int& capacidadeSala, const bool& disponibilidadeSala, const bool& videoconfSalaReuniao) :
    Sala(tipoSala, capacidadeSala,disponibilidadeSala) {
        possuiVideoConferencia = videoconfSalaReuniao;
    }

bool SalaReuniao::reservar(int pessoas, string nomeResponsavel) {
    if (getDisponivel() && pessoas <= getCapacidade() && pessoas >= 10) {
        setDisponivel(false);
        setResponsavel(nomeResponsavel);
        cout << getTipo() << " " << nomeResponsavel << " " << pessoas << " " << "true" << " " << " estavaLivre" << endl;

        if (!getPossuiVideoConferencia()){
            cout << "nao_possui_video_conferencia" << endl;
        }
        return true;
    }

    else {
        //reserva falhou
        string motivo;
        if (!getDisponivel()) motivo = "estavaReservada";
        else if (pessoas > getCapacidade()) motivo = "capacidade_excedida";
        else if (pessoas < 10) motivo = "minimo_de_pessoas_nao_atingido";

        cout << getTipo() << " " << nomeResponsavel << " " << pessoas << " " << "false" << " " << motivo << endl;
        return false;
    }
    
};

/*
SalaReuniao.cpp
Implementação dos métodos de SalaReuniao.
Responsabilidades:
- Inicializar possuiVideoConferencia via construtor;
- Implementar regras de reserva específicas (ex.: checar capacidade e recursos);
- Delegar para Sala quando comportamentos comuns forem aplicáveis.
Documentar quaisquer retornos de erro/false e as condições que os provocam.
*/