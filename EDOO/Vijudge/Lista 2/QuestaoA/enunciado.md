# A - Hash it!

Sua tarefa é calcular o resultado de um processo hashing em uma tabela de 101 elementos, contendo chaves que são strings de comprimento de no máximo 15 letras (código ASCII 'A',...,'z'). Implemente as seguintes operações:

* Busque o índice do elemento definido pela chave(ignore, se não houver tal houver tal elemento)

* Insere uma nova chave na tabela (ignore a inserção da chave que já existe)

* Delete uma chave da tabela (sem mover as outras), marcando  a posição na tabela como vazia (ignore chaves não existentes na tabela)

Quando executando as operações find, insert e delete, define a seguinte função:

integer Hash(string key), que para uma string key=a1....an retorna o valor:

Hash(key)=h(key) mod 101, onde

h(key)=19 *(ASCII(a1)*1+...+ASCII(an
)*n).

Resolva a colisão usando o método de endereçamento aberto, i.e., tente inserir a chave na tabela na primeiro posição livre: (Hash(key)+j2+23*j) mod 101, para j=1,...,19. Após examinar pelo menos 20 entradas da tabela, nós assumimos que a operação insert não pode ser executada.


Input

t[o número de casos testes <= 100] 

n1[ o número de operações(uma por linha<=1000)]

ADD: string

[ou]

DEL: string[demais casos testes, sem linha vazias entre as séries]

Output

Para cada caso teste você tem que criar uma nova tabela, imserir ou deletar chaves, e escrever na saída:

o número de chaves na tabela[primeira linha]

índice: chave[ordenado por índices]

Exemplo



