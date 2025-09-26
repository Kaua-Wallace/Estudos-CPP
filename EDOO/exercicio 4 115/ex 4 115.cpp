#include  <iostream>
#include  <cstdlib> // para srand() e rand(), que são usadas para gerar números aleatórios
#include  <ctime>   // Necessário para a função time()

using namespace std;

bool repetir_jogo = true;

int main(){
    int number, attpempt;
    long tempo_sistema; // em segundos
    srand((unsigned) tempo_sistema); // inicia o random numbers usando o tempo_sistema

    cout << "\n\n "
        << " ******* A NUMERICAL GAME *******" << endl;
cout << "\n\nRules of the game:" << endl;

    while( repetir_jogo){
        cout << "I have a number between 1 and 15 in mind \n"
            << "You have three chances to guess correctly!\n"
            << endl;

        number = (rand() % 15) + 1; // rand() gera o númeroa ser acertado. rand() % 15 resulta em um valor de 0 a 14. Adicionar 1 garante que o intervalo seja de 1 a 15.

        bool number_found = false;
        int number_attempts = 0;







    }







}