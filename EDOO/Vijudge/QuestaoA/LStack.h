#ifndef LSTACK_H
#define LSTACK_H

class Link {

public:
    char element;
    Link* next;

    // construtor
    Link( char elem, Link* nextval = nullptr);
};

// LStack

class LStack {
    private:
        Link* top; // ponteiro para o topo da pilha
        int size; // tamanho da pilha

    public:
        //construtor
        LStack(int sz = 0);

        // destrutor
        ~LStack();

        void clear(); // limpa a pilha
        void push(const char& it); // empilha um elemento
        char pop(); // desempilha um elemento
        const char& topValue() const; // retorna o elemento do topo
        int length() const; // retorna o tamanho da pilha
};
#endif