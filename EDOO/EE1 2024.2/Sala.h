#ifndef SALA_H
#define SALA_H
#include <iostream>
#include <string>

using namespace std;

class Sala {
    private:
        string tipo;
        int capacidade;
        bool disponivel;
        string responsavel; // para guardar quem reservou

    public:
        Sala ( const string&, const int&, const bool&);
        virtual bool reservar( int qtdPessoas, string nomeResponsavel) = 0;
        
        void setTipo( const string& tipoSala) {
            tipo = tipoSala;
        }
        string getTipo() {
            return tipo;
        }
        
        void setCapacidade( const int& capacidadeSala) {
            capacidade = capacidadeSala;
        }
        int getCapacidade() {
            return capacidade;
        }

        void setDisponivel( const bool& disponibilidadeSala) {
            disponivel = disponibilidadeSala;
        }
        bool getDisponivel() {
            return disponivel;
        }

        void setResponsavel( const string& nomeResponsavel) {
            responsavel = nomeResponsavel;
        }
        string getResponsavel() {
            return responsavel;
        }
};

#endif

/*
Sala.h
Declaração da classe base Sala.
Responsabilidade: encapsular comportamento comum a todos os tipos de sala
(nome, capacidade, estado de ocupação, interface reservar).
Contrato: métodos públicos devem validar parâmetros (ex.: capacidade, número de pessoas)
e manter invariantes da instância.
Filhas sobrescrevem reservar quando regras específicas forem necessárias.
*/