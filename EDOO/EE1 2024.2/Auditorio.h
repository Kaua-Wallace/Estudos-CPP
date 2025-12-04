#include "Sala.h"

class Auditorio : public Sala{
    private:
        bool possuiSistemaSom;
        
    public:
        Auditorio(const string&, const int&, const bool&, const bool&);

        void setPossuiSistemaSom( const bool& sistsomAuditorio){
            possuiSistemaSom = sistsomAuditorio;
        }
        bool getPossuiSistemaSom() {
            return possuiSistemaSom;
        }
};
