// necessário para as operações de cin e cout
#include <iostream>
//O arquivo <cmath> declara os mesmos identificadores no namespace std que o <math.h> fornece globalmente, sendo o uso de <cmath> acompanhado de using namespace std uma prática comum em C++
#include <cmath>
// Utilizamos using namespace std para permitir acesso direto a nomes predefinidos(como cout e cin)
using namespace std;

int main(){
    //variáveis do tipo double são usadas para floating-point
    double x1 = 4.0, x2 = 12.25, x3 = 0.0121; // double x1 = 4 também funcionaria

    cout << "\n Number \t Square Root" << endl;
    cout << "\n "  << x1 << "  \t " << sqrt(x1) 
        << "\n "  << x2 << "  \t " << sqrt(x2) 
        << "\n "  << x3 << "  \t " << sqrt(x3) << endl;
         

    cout << "\nType a number whose square root is to be" << " computed. ";

    // A variável x1 é reutilizada, demonstrando que variáveis podem ser redefinidas e usadas em diferentes partes da função.
    cin >> x1;

    cout << "\n Number \t Square Root" << endl;
    cout << "\n     " << x1 << " \t " << sqrt(x1) << endl;

    return 0;
}
