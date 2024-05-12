# Aula 02: Métodos de Ordenação (09/05)

## índice

- [Ordenação](ordenação)
- [Problemas gulosos (mais básicos)](problemas-gulodos-mais-básicos)
- [Problemas ad-hoc](problemas-ad-hoc)
- [Estruturas do C++](estruturas-do-c++)
- [Questões recomendadas](questões-recomendadas)

## Ordenação

- Reorganizar elementos em uma sequência de acordo com um critério;
- **Tarefa**: dada uma sequência de inteiros, imprima-os em ordem não-decrescente.

### Algoritmo trivial
- Achar o menor elemento e colocá-lo na primeira posição, depois o segundo menor e colocá-lo na segunda posição etc;
- De maneira geral, o processo que está sendo feito é: achar o menor elemento entre os que não selecionei ainda, e colocar ele na próxima posição, para toda posição de 0 a n-1.
- **Complexidade:** O(n²)

#### Exemplo de código

```
#include <bits/stdc++.h>
using namespace std;

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  // lendo a entrada
  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; ++i)
      cin >> v[i];

  // ordenando
  for (int inicio = 0; inicio < n-1; ++inicio) {
      int idx = inicio;
      for (int i = inicio+1; i < n; ++i)
          if (v[i] < v[idx])
              idx = i;
      swap(v[inicio], v[idx]);
  }

  // imprimindo a saída
  for (int i = 0; i < n; ++i)
      cout << v[i] << " \n"[i+1 == n];
}
```

### Algoritmo O(nlogn)

- Na STL do C++ temos a função `sort` com complexidade O(nlogn);
- `v.begin()` (primeiro elemento) e `v.end()` (último + 1 elemento) são iteradores, uma espécie especial de ponteiros do C++.

#### Exemplo de código

```
#include <bits/stdc++.h>
using namespace std;

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  // lendo a entrada
  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; ++i)
      cin >> v[i];

  // ordenando
  sort(v.begin(), v.end());

  // imprimindo a saída
  for (int i = 0; i < n; ++i)
      cout << v[i] << " \n"[i+1 == n];
}
```

> **Nota sobre ordenação:** estamos falando sbore vetores de inteiros, mas essas operações funcionam para qualquer tipo onde haja o conceito de ordem!

### Busca binária

- Buscas fazem parte de muitas soluções:
    - Achar o menor x > y em um vetor;
    - Achar o menor x >= y em um vetor.
- Podemos fazê-las em O(n), mas, se a estrutura for ordenada, é possível em O(logn) com busca binária;
- `lower_bound` (primeiro **menor** elemento do que estamos buscando): O(logn);
- `upper_bound`(primeiro **maior** elemento do que estamos buscando): O(logn).


#### Exemplo de código

```
#include <bits/stdc++.h>
using namespace std;

signed main() {
  int x = 2;
  vector<int> v = {0, 1, 2, 3};
  int i = lower_bound(v.begin(), v.end(), x) - v.begin(); // 1º >= x
  int j = upper_bound(v.begin(), v.end(), x) - v.begin(); // 1º > x
  cout << "lower bound: " << v[i] << '\n';
  cout << "upper bound: " << v[j] << '\n';
}
```

## Problemas gulosos (mais básicos)

- Construir a solução ótima a partir de escolhas ótimas localmente sem desfazer escolhas passadas;
- Muitas vezes intuitivos;
- Muitas vezes difíceis de provar;
- Às vezes a estratégia gulosa pode ser complicada.

### Exemplo de código

```
#include <bits/stdc++.h>
using namespace std;

vector<int> moedas = {100, 50, 25, 10, 5, 1};

signed main() {
  int x;
  cin >> x;
  int ans = 0;
  for (int c : moedas)
    // podemos substituir o while por uma operação O(1)
    while (x >= c) {
      ans++;
      x -= c;
    }
  cout << ans << '\n';
}
```

## Problemas ad-hoc
- Não se enquadram em nenhuma categoria específica;
- Exigem, geralmente, uma solução mais criativa.

## Estruturas do C++

### `std::vector`

- Array com tamanho dinâmico;
- Oferece acesso rápido aos elementos e inserção eficiente;
- Gerência de memória é automática e fica por baixo dos panos;
- [Exemplo de código](https://github.com/almeidaraul/mfp/blob/main/codigos/vector.cpp).


### `std::set` e `std::multiset`
- Armazena elementos únicos;
- `std::set` armazena apenas elementos únicos e ordenados, descartando duplicatas;
- `std::multiset` permite elementos duplicados e também é ordenado;
- Inserção, remoção e busca têm complexidade de tempo O(log n);
- [Exemplo de código](https://github.com/almeidaraul/mfp/blob/main/codigos/set_e_multiset.cpp).

## Questões recomendadas

- [Restaurant Customers](https://cses.fi/problemset/task/1619/)
- [Josephus Problem I](https://cses.fi/problemset/task/2162)
- [Stick Lenghts](https://cses.fi/problemset/task/1074)
- [Sum of Two Values](https://cses.fi/problemset/task/1640)
- [Median of an Array](https://codeforces.com/problemset/problem/1946/A)
- [Maximum Sum](https://codeforces.com/contest/1946/problem/B)
- [Minimize Ordering](https://atcoder.jp/contests/abc242/tasks/abc242_b?lang=en)