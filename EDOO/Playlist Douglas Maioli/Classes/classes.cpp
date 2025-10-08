#include <iostream>

using namespace std;

class Carro{
    private:
        int ano;
        float velocidade, preco;
         
    public:

    //construtor
        Carro( int a = 0, float km = 0, float v = 0){
            ano = a;
            velocidade = km;
            preco = v;
        }

        void setano( int a){
            ano = a;
        }

        int getano(){

            return ano;
        }

        void setpreco( float v){
            preco = v;
        }
        float getpreco(){

            return preco;
        }

        void setvelocidade( float km){
            velocidade = km;
        }

        float getvelocidade(){
            return velocidade;
        }

};

int main() {
    // com o contrutor, teremos valores iniciais definidos para os atributos:
    // Carro palio(2010, 144, 25500.50);
    // nesse caso, não precisamos usar os sets para definir valores

    Carro palio; // objeto da classe Carro: palio
    palio.setano(2010);
    cout << palio.getano() << endl;

    palio.setpreco(25500.50);
    cout << palio.getpreco() << endl;

    palio.setvelocidade(144);
    cout << palio.getvelocidade() << endl;

    // Carro celta(1999, 120, 31000.50);
    Carro celta; // objeto da classe Carro: celta
    celta.setano(1999);
    cout << celta.getano() << endl;

    celta.setpreco(31000.50);
    cout << celta.getpreco() << endl;

    celta.setvelocidade(120);
    cout << celta.getvelocidade() << endl;
    
    return 0;
}
