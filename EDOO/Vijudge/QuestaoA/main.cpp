#include "LStack.h"
#include <iostream>
#include <string>

bool MatchingPair(char opening, char closing) {
   if (opening == '(' && closing == ')')
     return true;
   else if (opening == '{' && closing == '}')
     return true;
   else if (opening == '[' && closing == ']')
     return true;
   return false;
}

std::string isBalanced(std::string s){
    LStack stack;

    for (char c : s){
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        }
        else if (c == ')' || c == '}' || c == ']') {
            if (stack.length() == 0){
                return "NO";
            }
            char LastOpen = stack.topValue();
            if (MatchingPair(LastOpen, c)) {
                stack.pop();
            } else {
                return "NO";
            }
        }
    }
    return stack.length() == 0 ? "YES" : "NO";
}

int main(){
    int n;
    if (std::cin >> n){
        std::string nullchar;
        std::getline(std::cin, nullchar);

        for ( int i = 0; i < n; i++ ) {
            std::string s;
            std::cin >> s;
            std::cout << isBalanced(s) << std::endl;
        }
    }
    return 0;
}