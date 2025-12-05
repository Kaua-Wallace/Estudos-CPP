#include "Sala.h"

class SalaReuniao : public Sala{
    private:
        bool possuiVideoConferencia;

    public:
        SalaReuniao( const string&, const int&, const bool&, const bool&);

        bool reservar(int qtdPessoas, string nomeResponsavel) override;

        void setPossuiVideoConferencia( const bool& videoconfSalaReuniao) {
            possuiVideoConferencia = videoconfSalaReuniao;
        }
        bool getPossuiVideoConferencia() {
            return possuiVideoConferencia;
        }
};

/*
SalaReuniao.h
Declaração da classe SalaReuniao (derivada de Sala).
Responsabilidade: representar salas de reunião com atributo adicional de videoconferência.
Principais pontos:
- possuiVideoConferencia indica disponibilidade do recurso;
- reservar sobrescreve a política de reserva da Sala base;
- construtor recebe nome, capacidade e flags relevantes.
Documentar pré-condições (ex.: qtdPessoas > 0) e efeitos de reservar.
*/





