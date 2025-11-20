#include <iostream>
#include <string>

class Link {
public:
    char element; // dado armazenado no no
    Link* next;   // aponta pro prox no

    // construtor
    Link(char elem, Link* nextval = nullptr); // 
};

class LStack {
private:
    Link* top; // aponta para o topo da pilha
    int size;  // contador de elementos na pilha

public:
    // construtor
    LStack();

    // destrutor
    ~LStack();

    // metodos da pilha
    void clear();                   // remove todos os elementos
    void push(const char& it);      // insere no topo
    char pop();                     // remove e retorna o topo
    const char& topValue() const;   // consulta o topo sem remover
    int length() const;             // retorna o tamanho atual
};

Link::Link(char elem, Link* nextval) {
    element = elem;
    next = nextval;
}

LStack::LStack() {
    top = nullptr; 
    size = 0;
}

LStack::~LStack() {
    clear();
}

void LStack::clear() {
    while (top != nullptr) {
        Link* temp = top; // guarda a ref do atual
        top = top->next;  // avanca o topo
        delete temp;      // libera memoria do antigo
    }
    size = 0;
}

// push: empilha o elemento no topo.
void LStack::push(const char& it) {
    top = new Link(it, top); // novo no aponta pro antigo topo
    size++;
}

// pop: desempilha elemento do topo.

char LStack::pop() {
    if (top == nullptr) {
        return '\0'; 
    }
    char it = top->element;   // salva valor
    Link* ltemp = top->next;  // salva prox no
    delete top;               // libera memoria do antigo topo
    top = ltemp;              // atualiza topo
    size--;
    return it;
}
// topValue: retorna o valor do topo sem desempilhar.
const char& LStack::topValue() const {
    if (top == nullptr) {
        static const char nullchar = '\0';
        return nullchar;
    }
    return top->element;
}

// tamanho da pilha
int LStack::length() const {
    return size;
}
//  verificando pares correspondentes
bool isMatchingPair(char opening, char closing) {
    if (opening == '(' && closing == ')') return true;
    if (opening == '{' && closing == '}') return true;
    if (opening == '[' && closing == ']') return true;
    return false;
}

std::string isBalanced(std::string s) {
    LStack stack; // instancia a pilha
    for (char c : s) {
        // char aberto => empilha
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } 
        // char fechado => verifica topo
        else if (c == ')' || c == '}' || c == ']') {
            
            // pilha vazia => desbalanceado
            if (stack.length() == 0) {
                return "NO";
            }

            // verifica quem esta no topo
            char lastOpen = stack.topValue();

            if (isMatchingPair(lastOpen, c)) {
                stack.pop(); // par corresponde, desempilha
            } else {
                return "NO"; // par nao corresponde => desbalanceado
            }
        }
    }

    // pilha vazia => balanceado
    // pilha nao vazia => desbalanceado( par aberto sem fechar)
    return (stack.length() == 0) ? "YES" : "NO";
}

int main() {
    
    int n;

    if (std::cin >> n) {
        std::string nullchar; 
        std::getline(std::cin, nullchar); 

        // para cada n linhas, verifica balanceamento
        for (int i = 0; i < n; ++i) {
            std::string s;
            std::cin >> s; // lendo a sequencia de brackets
            std::cout << isBalanced(s) << std::endl;
        }
    }
    return 0;
}