#include "Sala.h"

class SalaAula: public Sala {
    private:
        bool possuiQuadroInterativo;

    public:
        SalaAula (const string&, const int&, const bool&, const bool&);

        void setPossuiQuadroInterativo( const bool& QuadroSalaAula){
            possuiQuadroInterativo = QuadroSalaAula;
        }
        
        bool getPossuiQuadroInterativo() {
            return possuiQuadroInterativo;
        }

};