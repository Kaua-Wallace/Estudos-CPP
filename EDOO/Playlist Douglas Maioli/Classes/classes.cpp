#include <iostream>

using namespace std;

class Propaganda{
    private:


    public:
        void inscrever(){
            cout << "Se inscreva no Canal do\nProfessor Douglas Maioli!\n";
        }

        void curtir(){
            cout << "Curta o video!" << endl;
        }

};





class Carro{
    private:
        int ano;
        float velocidade, preco;
         
    public:
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
    Propaganda canal;
    canal.inscrever();
    canal.curtir();

    Carro palio;
    palio.setano(2010);
    cout << palio.getano() << endl;

    palio.setpreco(25500.50);
    cout << palio.getpreco() << endl;

    palio.setvelocidade(144);
    cout << palio.getvelocidade() << endl;
    
    return 0;
}