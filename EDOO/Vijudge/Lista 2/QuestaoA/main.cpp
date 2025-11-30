#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int table_length = 101;

// funcao hash
int calculateHash(const string& key) {
    long long sum = 0;
    for (size_t i = 0; i < key.length(); ++i) {
        // ASCII(an) * n
        sum += (int)key[i] * (i + 1);
    }
    // (19 * sum) mod 101
    long long h = (19 * sum) % table_length;
    return (int)h;
}

// quadratic probing: (Hash(key) + j^2 + 23*j) mod 101
int getPosition(int baseHash, int j) {
    return (baseHash + j * j + 23 * j) % table_length;
}

void solve() {
    // todos os elementos são armazenados na própria tabela hash
    // strings vazias pra marcar pos livres
    vector<string> table(table_length, "");
    
    int n_operations;
    cin >> n_operations;

    for ( ; n_operations > 0; --n_operations) {
        string line;
        cin >> line;

        // fatiando a entrada no formato op:key
        size_t line_separated = line.find(':');
        string op = line.substr(0, line_separated);
        string key = line.substr(line_separated + 1);

        int baseHash = calculateHash(key);

        if (op == "ADD") {
            // verificando se a chave ja existe
            bool key_exists = false;
            for (int j = 0; j < 20; ++j) {
                int pos = getPosition(baseHash, j);
                if (table[pos] == key) {
                    key_exists = true;
                    break;
                }
            }

            // chave não existe => insert na primeira pos vazia
            if (!key_exists) {
                for (int j = 0; j < 20; ++j) {
                    int pos = getPosition(baseHash, j);
                    if (table[pos] == "") { // pos vazia encontrada
                        table[pos] = key;
                        break; 
                    }
                }
            }
        } 
        else if (op == "DEL") {
            // encontrando a chave 
            for (int j = 0; j < 20; ++j) {
                int pos = getPosition(baseHash, j);
                if (table[pos] == key) {
                    table[pos] = ""; // marca como vazia
                    break;
                }
            }
        }
    }

    // gerando output
    int count = 0;
    for (int i = 0; i < table_length; ++i) {
        if (table[i] != "") {
            count++;
        }
    }

    cout << count << endl;

    for (int i = 0; i < table_length; ++i) {
        if (table[i] != "") {
            cout << i << ":" << table[i] << endl;
        }
    }
}

int main() {
    int t;
    cin >> t; // num de casos de teste
    while (t--) {
        solve();
    }
    return 0;
}