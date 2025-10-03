// link da playlist https://youtu.be/pYcneq-aOaQ?si=v7VENV67ReIkcp2H

#include <iostream>
#include<cstddef>

using namespace std;

int main() {
    int var1;
    int* pont1;

    var1 = 5;
    pont1 = &var1;

    cout << var1 << endl;
    cout << pont1 << endl; // informa o endereço armazenado no ponteiro
    cout << *pont1 << endl; // valor que ta no endereço

    int var2;
    // var2 = var1;
    // ou
    var2 = *pont1;
    cout << var2 << endl;

    var2 = 50;
//    pont1 = &var2;
//    cout << *pont1 << endl;
//    cout << var1;

//int* pont2;
//pont2 = NULL;
//cout << *pont2;

//int* pont3;
int* pont3 = new int;
*pont3 = 35;
cout << pont3;
cout << *pont3;

*pont3 = *pont1; // atribuindo valor
cout << *pont3;

delete pont3;
pont3 = pont1; // atribuindo endereço
cout << *pont3;





    return 0;
}

