# Folhas caindo

A figura 1 mostra uma representação gráfica de uma árvore binária de letras. Pessoas familiarizadas com árvores binárias podem pular as definições de árvore binária de letras, folhas de uma árvore binária, e uma árvore de busca binária de letras, e ir direto para o problema.

Uma árvore binária de letras pode ser uma de duas coisas:

1. ELa pode estar vazia.

2. Ela pode ter um nó raiz. Um nó tem uma letra como dado e se refere a uma subárvore esquerda e uma direita. A subárvore  esquerda e direita também são árvores binárias de letras.

Na represetação gáfica da árvore binárias de letras:

1. Árvores vazias são omitidas completamente.

2. Cada nó é indicado por
    * Seu dado de letra,

    * Um segmento de linha para baixo à esquerda até a subárvore esquerda, se a subárvore esquerda não estiver vazia,

    * Um segmento de linha para baixo à direita até a subárvore direita, se a subárvore direita não estiver vazia.

Uma folha em uma árvore binária é um nó cujas subárvores estão vazias. No exemplo na Figura 1, seriam os cinco nós com dado "B", "H", "P", e "Y".
A travessia em pré-ordem de uma árvore de letras satisfaz as propriedades definidoras:

1. Se a árvore estiver vazia, então a travessia em pré-ordem está vazia.

2. Se a árvore não estiver vazia, então a travessia em pré-ordem consiste no seguinte, em ordem

    * O dado do nó raiz,
    * A travessia em pré-ordem da subárvore esquerda da raíz,
    * A travessia pré-ordem da subárvore direita da raíz. 

A travessia em pré-ordem da árvore da Figura 1 é "KGCBDHQMPY".
Uma árvore como a da Figura 1 é também uma árvore binária de busca de letras. Uma árvore binárias de busca de letras é uma árvore binária de letras na qual cada nó satisfaz:

1. O dado da raíz vem depois no alfabeto do que todos os dados nos nós na subárvore esquerda.
2. O dado da raíz vem antes no alfabeto do que todos os dados nos nós na subárvore direita.

O problema

Considere a seguinte sequência de operações em uma árvore binária de busca de letras

1. Remova as folhas e liste o dado removido

2. Repita esse processo até que a árvore esteja vazia

Começando da árvore abaixo abaixo à esquerda,nós produzimos a sequência de árvores mostrada, e então a árvore vazia, removendo as folhas com dados

BDHPY
CM
GQ
K

Seu problema é começar com tal sequência de linhas de folhas de uma árvore binária de letras e imprima a travessia em pré-ordem da árvore.

Input

O arquivo de entrada conterá um ou mais conjuntos de dados. Cada conjunto de dados é uma sequência de uma ou mais linhas de letras maiúsculas. As linhas contêm as folhas removidas de uma árvore binária de busca nas fases descritas acima. As letras em uma linha serão listadas em ordem alfabética crescente. Conjuntos de dados são separados por uma linha contendo apenas um asterisco(*). O último conjunto de dados é seguido por uma linha contendo apenas um cifrão($). Não há espaços em branco ou linhas vizias na entrada.

Output

Para cada conjunto de dados de entrada, existe uma árvore binária de busca única que produziria a sequência de folhas. A saída é uma linha contendo apenas a travessia em pré-ordem daquela árvore, sem espaços em branco.