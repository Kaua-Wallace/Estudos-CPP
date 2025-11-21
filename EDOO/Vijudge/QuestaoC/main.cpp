#include <iostream>
#include <string>

class Link {
public:
    int element; // dado armazenado no no
    Link* next;  // aponta pro prox no

    // construtores
    Link(int elemval, Link* nextval = nullptr);
    Link(Link* nextval = nullptr);
};

class LQueue {
private:
    Link* front; // aponta pro inicio da fila (no cabeca)
    Link* rear;  // aponta pro final da fila
    int size;    // contador de elementos

public:
    // construtor
    LQueue();

    // destrutor
    ~LQueue();

    // metodos da fila
    void clear();             // remove todos os elementos
    void enqueue(int it);     // insere no final
    int dequeue();            // remove e retorna do inicio
    int frontValue() const;   // consulta o inicio sem remover
    int length() const;       // retorna o tamanho atual
};

Link::Link(int elemval, Link* nextval) {
    element = elemval;
    next = nextval;
}

Link::Link(Link* nextval) {
    next = nextval;
}

LQueue::LQueue() {
    front = rear = new Link(nullptr); // inicializa com no cabeca
    size = 0;
}

LQueue::~LQueue() {
    clear();
    delete front; // libera o no cabeca
}

void LQueue::clear() {
    while (front->next != nullptr) {
        rear = front->next;       // avanca referencia
        front->next = rear->next; // ajusta o proximo do front
        delete rear;              // libera memoria do antigo
    }
    rear = front;
    size = 0;
}

// enqueue: insere elemento no final da fila.
void LQueue::enqueue(int it) {
    rear->next = new Link(it, nullptr); // novo no entra apos o atual rear
    rear = rear->next;                  // atualiza o rear
    size++;
}

// dequeue: remove elemento do inicio.
int LQueue::dequeue() {
    if (size == 0) return -1; 

    int it = front->next->element; // salva valor
    Link* ltemp = front->next;     // salva prox no

    front->next = ltemp->next;     // avanca o inicio (pula o no removido)

    // se o no removido era o ultimo => rear volta pro front
    if (rear == ltemp) rear = front; 

    delete ltemp; // libera memoria do antigo
    size--;
    return it;
}

// frontValue: retorna o valor do inicio sem remover.
int LQueue::frontValue() const {
    if (size == 0) return -1;
    return front->next->element;
}

// tamanho da fila
int LQueue::length() const {
    return size;
}

void solve() {
    int L_meters, m;
    std::cin >> L_meters >> m;

    // converte metros para cm
    int L_cm = L_meters * 100;

    LQueue leftQueue;  // fila da margem esquerda
    LQueue rightQueue; // fila da margem direita

    // leitura dos carros
    for (int i = 0; i < m; ++i) {
        int len;
        std::string bank;
        std::cin >> len >> bank;
        
        // margem esquerda => enfileira na leftQueue
        if (bank == "left") {
            leftQueue.enqueue(len);
        } 
        // margem direita => enfileira na rightQueue
        else {
            rightQueue.enqueue(len);
        }
    }

    int crossings = 0;
    bool isLeftBank = true; // balsa comeca na esquerda

    // enquanto houver carros em alguma margem
    while (leftQueue.length() > 0 || rightQueue.length() > 0) {
        int currentLoad = 0;

        if (isLeftBank) {
            // balsa na esquerda => carrega carros da esquerda se couber
            while (leftQueue.length() > 0 && (currentLoad + leftQueue.frontValue() <= L_cm)) {
                currentLoad += leftQueue.dequeue(); // embarca o carro
            }
        } else {
            // balsa na direita => carrega carros da direita se couber
            while (rightQueue.length() > 0 && (currentLoad + rightQueue.frontValue() <= L_cm)) {
                currentLoad += rightQueue.dequeue(); // embarca o carro
            }
        }

        // balsa atravessa o rio
        crossings++;
        isLeftBank = !isLeftBank; // alterna o lado
    }

    std::cout << crossings << std::endl;
}

int main() {

    int c;
    std::cin >> c; // numero de casos de teste
    while (c--) {
        solve();
    }

    return 0;
}