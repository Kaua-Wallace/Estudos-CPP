#include "Auditorio.h"

Auditorio::Auditorio( const string& tipoSala, const int& capacidadeSala, const bool& disponibilidadeSala, const bool& sistsomAuditorio) :
    Sala (tipoSala, capacidadeSala, disponibilidadeSala) {
        possuiSistemaSom = sistsomAuditorio;
    }

    