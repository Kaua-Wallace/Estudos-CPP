#include "LStack.h"
#include <iostream>

Link::Link( char elem, Link* nextval){
    element = elem;
    next = nextval;
}

LStack::LStack(int sz){
    top = nullptr;
    size = sz;
}

LStack::~LStack(){
    clear();
}

void LStack::clear(){
    while (top != nullptr){
        Link* temp = top;
        top = top->next;
        delete temp;
    }
    size = 0;
}

void LStack::push(const char& it){
    top = new Link(it, top);
    size++;
}

char LStack::pop(){
    if (top == nullptr){
        return '\0'; 
    }
    char it = top -> element;
    Link* ltemp = top -> next;
    delete top;
    top = ltemp;
    size--;
    return it;
}

const char& LStack::topValue() const{
    if ( top == nullptr){
        static const char nullchar = '\0';
        return nullchar;
    }
    return top -> element;
}

int LStack::length() const{
    return size;
}