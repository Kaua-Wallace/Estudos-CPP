#include <iostream>
#include <string>

using namespace std;

class Sala {
    private:
        string tipo;
        int capacidade;
        bool disponivel;
        string responsavel;

    public:
        Sala ( const string&, const int&, const bool&);
        
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
};
