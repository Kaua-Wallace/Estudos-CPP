#include "Sala.h"

class SalaAula: public Sala {
    private:
        bool possuiQuadroInterativo;

    public:
        SalaAula (const string&, const int&, const bool&, const bool&);

        bool reservar(int qtdPessoas, string nomeResponsavel) override;

        void setPossuiQuadroInterativo( const bool& QuadroSalaAula){
            possuiQuadroInterativo = QuadroSalaAula;
        }
        
        bool getPossuiQuadroInterativo() {
            return possuiQuadroInterativo;
        }
};
    /*
    SalaAula.h
    Declaração da classe SalaAula derivada de Sala.
    Responsabilidade: representar salas de aula com possíveis atributos extras (quadro, projetor).
    Contrato: pode sobrescrever reservar para regras específicas (ex.: número mínimo/máximo de alunos).
    Documentar comportamentos diferenciais aqui.
    */
