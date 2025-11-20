# A - Colchetes/parênteses balanceados

Um colchetes é considerado qualquer um dos seguintes caracteres: `(`, `)`, `{`, `}`, `[`, ou `]`.

Dois colchetes são considerados um par correspondente se um colchete de abertura ocorre à esquerda do colchete de fechamento do mesmo tipo exato. Existem três tipos de pares correspondentes de colchetes: `()`, `[]`, e `{}`.

Um par correspondente de colchetes não é balanceado se o conjunto de colchetes que ele encerra não for correspondente. Por exemplo, `{[(])}` não é balanceado porque o conteúdo entre `{` e `}` não está balanceado. O par de colchetes retos encerra um único colchete de abertura desbalanceado, `(`, e o par de parênteses encerra um único colchete reto de fechamento desbalanceado, `]`.

Por esta lógica, dizemos que uma sequência de colchetes é balanceada se as seguintes condições forem atendidas:

* Não contém colchetes sem correspondência.

* O subconjunto de colchetes encerrado dentro dos limites de um par de colchetes correspodente é também um par de colchetes correspondente.

Dadas N strings de colchetes, determine se cada sequência de colchetes é balanceada. Se uma string for balanceada,retorne `YES`. Caso contrário, retorne`NO`.

### Descrição da Função

Complete a função isBalanced no editor abaixo.

is Balanced tem o seguinte parâmetro(s):
* string s: uma string de colchetes

### Retornos
* string: ou `YES` ou `NO`

### Formato de entrada

A primeira linha contém um único inteiro n, o número de strings.
Cada uma das próximas `n` linhas contém uma única string s, uma sequência de colchetes.

### Restrições
* 1 <= n <= 10^3
* 1 <= |s| <= 10^3, onde |s| é o tamanho da sequência.
* Todos caracteres na sequência ∈ { {, }, (, ), [, ] }


### Formato de saída

Para cada string, retorne `YES` ou `NO`.

### Explicação

1. A string `{[()]}` atende ambos os critérios para ser uma string balanceada.

2. A string `{[(])}` não é balanceada porque os colchetes encerrados pelo par correspondente `{` e `}` não são balanceados: `[(])`.

3. A string `{{[[(())]]}}` atende ambos os critérios para ser uma string balanceada.

