#include <iostream>
#include <vector>
#include <string>

using namespace std;

// no da BST
class Node {
public: 
    char data;
    Node *left;
    Node *right;

    // construtor
    Node(char c) : data(c), left(nullptr), right(nullptr) {}
};

// insert na BST
void insert(Node*& root, char k) {
    
    if (root == nullptr) { 

        root = new Node(k); // se no = NULL => cria novo no
        return;
    }

    if (root->data > k) {
        insert(root->left, k);
    } else {
        insert(root->right, k);
    }
}

// travessia em preorder
void preorder(Node* root) {
    if (root == nullptr) 
        return; 
    
    cout << root->data;    // imprimir o valor do no
    preorder(root->left);  // vai pra subarvore esquerda
    preorder(root->right); // vai pra subarvore direita
}

void solve() {
    string line;
    vector<string> dataset;

    // lendo linhas ate encontrar '*' ou '$'
    while (cin >> line) {
        // '*' separa datasets
        // '$' encerra o input
        if (line == "*" || line == "$") {
            Node* root = nullptr;

            // reconstruindo a BST => processar as linhas da raiz para as folhas
            for (int i = dataset.size() - 1; i >= 0; --i) {
                string currentLine = dataset[i];

                for (char c : currentLine) {
                    insert(root, c);
                }
            }

            preorder(root);
            cout << endl;

            dataset.clear(); // limpando para o proximo dataset( esvaziando o vetor)

            if (line == "$") break;
        } else {
            dataset.push_back(line);
        }
    }
}

int main() {
    solve();

    return 0;
}