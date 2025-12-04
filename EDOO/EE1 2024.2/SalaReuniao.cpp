#include "SalaReuniao.h"

SalaReuniao::SalaReuniao( const string& tipoSala, const int& capacidadeSala, const bool& disponibilidadeSala, const bool& videoconfSalaReuniao) :
    Sala(tipoSala, capacidadeSala,disponibilidadeSala) {
        possuiVideoConferencia = videoconfSalaReuniao;
    }