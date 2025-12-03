#include <iostream>
#include <string>
#include <algorithm> // pra usar std::max

using namespace std;

int depthHelp(const string& s, int& index) {
 
    // processando raiz
    char current = s[index];
    index++; // pula pro prox no

    // folha( "l") => profundidade 0
    if (current == 'l') {
        return 0;
    } 
    // no interno("n") => profundidade de n(1) + a profundidade da subarvore de maior profundidade
    else {
        // subarvore esquerda
        int leftdepth = depthHelp(s, index);

        // subarvore direita
        int rightdepth = depthHelp(s, index);

        
        return 1 + max(leftdepth, rightdepth); // max: pega a maior profundidade entre as duas subarvores
    }
}

int solve(const string& s) {
    int index = 0; // pos atual na string
    return depthHelp(s, index);
}

int main() {
    int T;
    if (cin >> T) {
        while (T--) {
            string s;
            cin >> s;
    
            cout << solve(s) << endl;
        }
    }

    return 0;
}