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





