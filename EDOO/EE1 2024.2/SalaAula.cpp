#include "SalaAula.h"

SalaAula::SalaAula ( const string& tipoSala, const int& capacidadeSala, const bool& disponibilidadeSala, const bool& QuadroSalaAula) :
    Sala(tipoSala, capacidadeSala, disponibilidadeSala) {
        possuiQuadroInterativo = QuadroSalaAula;
}

