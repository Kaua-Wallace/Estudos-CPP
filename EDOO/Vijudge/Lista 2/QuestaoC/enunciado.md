### C - Árvores Binárias legais

Árvores binárias podem, às vezes, ser muito díficeis de se trabalhar.
Felizmente, existe uma classe de árvores com algumas propriedades realmente legais. Uma árvore binária enraizada é chamada "legal", se todo nó ou é uma folha, ou tem exatamente dois filhos.

Por exemplo, a seguinte árvore é legal,

(img)

mas a seguinte árvore não é

(img)

As folhas de uma árvore binária legal são rotuladas pela letra "l",
e outros nós são rotulados pela letra "n".

Dada a travessia em pré-ordem de uma árvore binária legal você precisa encontrar a profundidade(altura) da árvore.

#### Notas

1. A profundidade de uma árvore é definida como o comprimento do caminho mais longo com uma extremidade na raíz.

2. A travessia em pré-ordem de uma árvore na primeira imagem acima produz a string "nlnnlll".

Input

A primeira linha contém o número de casos teste T. T linhas seguintes. Cada linha contém uma string, que representam a travessia em pré-ordem de uma árvore binária "legal". Folhas são representas pela letra "l" e outros nós pela letra "n". A entrada é garantida ser a travessia em pré-ordem de uma árvore binária legal.

Output

Imprima uma linha para cada caso teste, contendo um único inteiro, a profundidade da árvore.

Restrições

0 < T < 20

O comprimento da string de entrada em cada caso teste é no máximo 10000.
