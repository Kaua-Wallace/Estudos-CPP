#include  <iostream>
#include  <cstdlib> // para srand() e rand(), que são usadas para gerar números aleatórios
#include  <ctime>   // Necessário para a função time()

using namespace std;

bool repeat_game = true;

int main(){
    int number, attempt;
    long system_time; // em segundos

    time(&system_time); // inicializa o system_time com o tempo atual
    srand((unsigned) system_time); // inicia o random numbers usando o system_time

    cout << "\n\n "
        << " ******* A NUMERICAL GAME *******" << endl;
    cout << "\n\nRules of the game:" << endl;

    while (repeat_game){
        cout << "I have a number between 1 and 15 in mind \n"
            << "You have three chances to guess correctly!\n"
            << endl;

        number = (rand() % 15) + 1; // rand() gera o número a ser acertado. rand() % 15 resulta em um valor de 0 a 14. Adicionar 1 garante que o intervalo seja de 1 a 15.

        bool number_found = false; // número encontrado
        int number_attempts = 0; // numero de tentativas
        while (!number_found && number_attempts < 3){

            // Limpa o buffer de entrada
            cin.sync(); 
            cin.clear();
            cout << ++number_attempts << ". attempt: "; // aqui há o incremento do numero de tentativas
            cin >> attempt;
            if (attempt < number){
                cout << "too small!" <<  endl;
            }

            else if (attempt > number){
                cout << "too big!" << endl;
            }

            else { // note que resta apenas attempt==number, isto é, o numero foi encontrado

                number_found = true;
            }  
        }

        if (!number_found){
            cout << "\nI won!"
                << " The number in question was: "
                << number << endl;
        }

        else {
            cout << "\nCongratulations! You won!" << endl;
        }

        //pergunta se o jogador quer repetir

        cout << "Want to repeat?\n";

        char resposta_jogador;
        cout << "Repeat ----> <r> Finish ----> <f>\n";

        do {
            cin.get(resposta_jogador); //O método get() da classe istream (associado ao objeto cin) é usado para ler o próximo caractere do stream de entrada (teclado) e armazená-lo na variável resposta_jogador        
        } 
        
        while (resposta_jogador != 'r' && resposta_jogador != 'f');

        if (resposta_jogador == 'f'){
            repeat_game = false;
        }    
    }

    return 0;
}