# Aula 03: Estruturas de dados (11/05)

## índice

- [O que é estrutura de dados?](#o-que-é-estrutura-de-dados)
- [`pair`](#pair)
- [Pilha (`stack`)](#pilha-stack)
- [Fila (`queue`)](#fila-queue)
- [Fila de prioridade (`priority_queue`)](#fila-de-prioridade-priority_queue)
- [`set`](#set)
- [`map`](#map)
- [`vector`](#vector)
- [Questões recomendadas](#questões-recomendadas)

## O que é estrutura de dados?

* **Definição**: a estrutura de dados refere-se à organização e armazenamento de dados de forma eficiente para acesso, manipulação e utilização;
* **Eficiência**: estruturas de dados eficientes podem melhorar o desempenho de algoritmos;
* **Organizaçaõ**: permitem uma melhor organização e gerenciamento de dados em aplicações complexas.

## `pair`

* Estrutura de dados simples que armazena dois elementos;
* Aceitar quaisquer tipos de dados;
* É útil quando precisamos associar dois valores de tipos diferentes.

### Exemplo de código

```cpp
#include <iostream>
#include <utility>

int main() {
    pair<int, int> par1;
    pair<int, char> par2;
    pair<string, int> par3;

    par1.first = 10; // primeiro elemento
    par1.second = 50; // segundo elemento

    cout << par1.first << " ";
    cout << par1.second << endl;
}
```

## Pilha (`stack`)

* Estrutura de dados **linear** que segue o princípio **LIFO** (Last In, First Out), isto é, o último elementi inserido é o primeiro a ser removido;
* Pilhas são amplamento utilizadas em muitos contextos, como expressões artiméticas, recursão, gerenciamento de memória e na implementação de algoritmos.

### Exemplo de código

```cpp
#include <iostream>
#include <stack>

int main() {
    stack<int> pilha;

    pilha.push(10); // adicionar valor
    pilha.push(5); // adicionar valor
    pilha.size(); // quantidade de elementos
    pilha.pop(); // remover o último item

    // mostrar 'topo' da pilha
    cout << pilha.top() << endl;

    pilha.empty(); // indica se a pilha está vazia
    pilha.clear(); // remove todos os elementos da pilha
}
```

## Fila (`queue`)

* Estrutura de dados linear que segue o princípio FIFO (First In, First Out), ou seja, o primeiro elemento inserido é o primeiro a ser removido;
* São amplamente usadas em problemas de simulação, processamento de tarefas em ordem de chegada, gestão de recursos compartilhados e na implementação de algoritmos como BFS (*Breadth-First Search*).

### Exemplo de código

```cpp
#include <iostream>
#include <queue>

int main() {
    queue<int> fila;

    fila.push(10);
    fila.push(5);
    fila.size();
    fila.pop(); // remove o primeiro elemento adicionado

    cout << fila.front() << endl;

    fila.empty();
    fila.clear(); 
}
```

## Fila de prioridade (`priority_queue`)

* Estrutura de dados que mantém uma coleção de elementos, em que cada elemento tem uma prioridade associada;
* Elementos são removidos da fila de acordo com a prioridade, em vez da "ordem de chegada";
* Útil quando precisamos processar elementos de acordo com sua prioridade, como em algoritmos de busca ou ordenação.

### Exemplo de código

```cpp
#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<int> fila;

    fila.push(10);
    fila.push(5);
    fila.size();
    fila.pop();

    cout << fila.front() << endl;

    fila.empty();
    fila.clear(); 
}
```

## `set`

* Coleção de elementos distintos, sem repetição;
* Mantém os elementos em uma ordem específica (normalmente ordenada);
* Útil quando precisamos garantir que não haja **duplicatas** e não nos importamos com a ordem dos elementos.

### Exemplo de código

```cpp
#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s1;
    set<char> s2;

    s1.inser(2);
    s1.size();
    s1.empty();
    s1.erase(2);
    s1.find(3);
}
```

## `map`

* Estrutura de dados que associa chaves a valores;
* Cada chave é única e mapeada para um valor correspondente;
* Útil quando precisamos armazenar e recuperar valores com base em uma chave, sem nos importar com a ordem das chaves.

### Exemplo de código

```cpp
#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main() {
    map<int> m1;

    m1.insert(pair<char, int>("a", 100));
    m1["b"] = 200;
    m1.size();
    m1.empty();
    m1.erase("a");
    m1.find("b");
}
```

## `vector`

* Sequência dinâmica de elementos;
* Permite acesso rápido aos elementos por meio de índices;
* Útil para armazenar coleções ordenadas de elementos de tamanho variável.

### Exemplo de código

```cpp
#include <iostream>
#include <vector>

int main() {
    vector<int> vec;

    vec.push_back(3);
    vec.pop_back();
    vec.clear();
    vec.empty();
    vec.size();
}
```

## Questões recomendadas
- [Distinct Numbers](https://cses.fi/problemset/task/1621)		
- [Zero para Cancelar](https://neps.academy/br/course/treinamento-intensivo-obi-2022/lesson/zero-para-cancelar)	
- [Exceotion Handling](https://atcoder.jp/contests/abc134/tasks/abc134_c?lang=en)
- [Frequência na Aula](https://neps.academy/br/exercise/252)
- [Expressões](https://neps.academy/br/exercise/271)	
- [Sitck Divisions](https://cses.fi/problemset/task/1161)	
- [Concert Tickets](https://cses.fi/problemset/task/1091)