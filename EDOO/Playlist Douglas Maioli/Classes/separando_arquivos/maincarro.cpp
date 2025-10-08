#include <iostream>
#include "carro.h"

using namespace std;

int main() {
    Carro palio(2010, 144, 25500.50);
        cout << palio.getano() << endl;
        cout << palio.getpreco() << endl;
        cout << palio.getvelocidade() << endl;

    Carro celta(1999, 120, 31000.50);
        cout << celta.getano() << endl;
        cout << celta.getpreco() << endl;
        cout << celta.getvelocidade() << endl;

        system("pause");

    return 0;
}