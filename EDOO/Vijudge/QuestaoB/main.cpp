#include <iostream>

class ArrayList {
private:
    int* listArray; // array q armazena os elementos da lista
    int maxSize;    // tamanho max da lista
    int listSize;   // num atual dos itens da lista
    int curr;      // posicao atual de itens na lista
    
    // merge sort(manual)
    void merge(int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        // arrays temporarios
        int* L = new int[n1];
        int* R = new int[n2];
        
        // copiando dados para os arrays temporarios L e R
        for (int i = 0; i < n1; i++)
            L[i] = listArray[left + i];

        for (int j = 0; j < n2; j++)
            R[j] = listArray[mid + 1 + j];

        int i = 0, j = 0, k = left;
        
        // mesclando os arrays temporarios de volta para listArray
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                listArray[k] = L[i];
                i++;
            } 
            else {
                listArray[k] = R[j];
                j++;
            }
            k++;
        }

        // copiando os elementos restantes de L
        while (i < n1) {
            listArray[k] = L[i];
            i++;
            k++;
        }

        // copiando os elementos restantes de R
        while (j < n2) {
            listArray[k] = R[j];
            j++;
            k++;
        }

        delete[] L;
        delete[] R;
    }

    // recursao do merge sort
    void mergeSortRecursive(int left, int right) {
        if (left < right) {
            // calculando meio
            int mid = left + (right - left) / 2;

            // ordenando as duas metades
            mergeSortRecursive(left, mid);
            mergeSortRecursive(mid + 1, right);

            // mesclando as partes
            merge(left, mid, right);
        }
    }

public:
    // construtor
    ArrayList(int size) {
        maxSize = size;
        listSize = 0;
        curr = 0;
        listArray = new int[maxSize]; 
    }

    // destrutor
    ~ArrayList() {
        delete[] listArray;
    }

    void clear() {
        delete[] listArray;
        listSize = 0;
        curr = 0;
        listArray = new int[maxSize];
    }

    void append(int it) {
        if (listSize < maxSize) { 
            listArray[listSize++] = it;
        }
    }

    void moveToPos(int pos) {
        if (pos >= 0 && pos <= listSize) { 
            curr = pos;
        }
    }

    // retorna o elemento atual
    int getValue() const {
        return listArray[curr];
    }

    // retorna o tamanho da lista
    int length() const {
        return listSize;
    }

    // ordena a lista usando merge sort
    void sort() {
        if (listSize > 1) {
            mergeSortRecursive(0, listSize - 1);
        }
    }
};

int main() {
    int n;

    if (std::cin >> n) {
        // intanciando a lista
        ArrayList queueList(n);

        // lendo os Tis
        for (int i = 0; i < n; i++) {
            int t;
            std::cin >> t;
            queueList.append(t);
        }

        // ordenando a lista por Ti
        queueList.sort();

        long long currentWaitTime = 0; 
        int notDisappointedCount = 0;

        // iterando a lista ordenada
        
        for (int i = 0; i < queueList.length(); i++) {
            // move curr para a pos i
            queueList.moveToPos(i);

            // obtem o valor na poss i
            int serviceTime = queueList.getValue();

            // verificando desapontamento
            if (currentWaitTime <= serviceTime) {
                notDisappointedCount++;
                currentWaitTime += serviceTime;
            }
        }

        std::cout << notDisappointedCount << std::endl;
    }

    return 0;
}