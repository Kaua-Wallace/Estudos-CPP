#include "Sala.h"

class Auditorio : public Sala{
    private:
        bool possuiSistemaSom;
        
    public:
        Auditorio(const string&, const int&, const bool&, const bool&);
        
        bool reservar(int qtdPessoas, string nomeResponsavel) override;

        void setPossuiSistemaSom( const bool& sistsomAuditorio){
            possuiSistemaSom = sistsomAuditorio;
        }
        bool getPossuiSistemaSom() {
            return possuiSistemaSom;
        }
};

/*
Auditorio.h
Declaração da classe Auditorio (especialização de Sala).
Responsabilidade: representar um auditório com atributos/contratos específicos
(ex.: capacidade, recursos de palco/sonorização).
Contrato: validar capacidade >= 0; interface pública para criação e consulta.
Não gerencia recursos dinâmicos complexos diretamente.
*/
