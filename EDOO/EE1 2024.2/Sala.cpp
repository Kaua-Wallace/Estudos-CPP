#include "Sala.h"

Sala::Sala ( const string& tipoSala, const int& capacidadeSala, const bool& disponibilidadeSala) {
    tipo = tipoSala;
    capacidade = capacidadeSala;
    disponivel = disponibilidadeSala;
}

/*
Sala.cpp
Implementação dos métodos da classe Sala.
Responsabilidades:
- Inicializar atributos comuns;
- Fornecer implementação base de reservar (valida capacidade, atualiza estado);
- Expor getters/setters simples.
Evitar efeitos colaterais não esperados; testar comportamentos de reserva via unit tests.
*/
