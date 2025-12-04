#include "Auditorio.h"

Auditorio::Auditorio( const string& tipoSala, const int& capacidadeSala, const bool& disponibilidadeSala, const bool& sistsomAuditorio) :
    Sala (tipoSala, capacidadeSala, disponibilidadeSala) {
        possuiSistemaSom = sistsomAuditorio;
    }

bool Auditorio::reservar(int pessoas, string nomeResponsavel) {
    if (getDisponivel() && pessoas >= 30 && pessoas <= getCapacidade()) {
        setDisponivel(false);
        setResponsavel(nomeResponsavel);

        cout << getTipo() << " " << nomeResponsavel << " " << pessoas << " " << "true" << " " << " estavaLivre" << endl;

        if (!getPossuiSistemaSom()){
            cout << " nao_possui_sistema_som" << endl;
        }
        return true;
    } 
    
    else {
        //reserva falhou
        string motivo;
        if (!getDisponivel()) motivo = "estavaReservada";
        else if (pessoas > getCapacidade()) motivo = "capacidade_excedida";

        cout << getTipo() << " " << nomeResponsavel << " " << pessoas << " " << "false" << " " << motivo << endl;
        return false;
    }
}

