# Aula 07: Recursividade (26/05)

## índice

- [Recursividade](#recursividade)
- [Busca binária](#busca-binária)
- [Busca binária recursiva](#busca-binária-recursiva)
- [Binary Exponentiation](#binary-exponentiation)
- [Questões recomendadas](#questões-recomendadas)

## Recursividade

- Ocorre quando uma função é capaz de chamar a si mesma durante sua execução;
- É frequentemente utilizada para resolver problemas que podem ser subdivididos em casos menores e mais simples.

### Exemplo de código

```cpp
#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n == 0 | n == 1)
        return 1
    else
        return n * fatorial(n - 1)
}

int main() {
    int n;
    cin >> n;
    cout << fatorial(n) << endl;
}
```

> *Neste exemplo, a função `fatorial()` chama a si mesma com um argumento reduzido em 1 até que atinja o caso base (quando n é 0 ou 1). Isso cria uma cadeia de chamadas de função que eventualmente se reduz ao caso base e, em seguida, retorna valores até a chamada original.*

## Busca binária

- Algoritmo eficiente para encontrar um detemrinado elemento em uma lista ordenada;
- Ele funciona divindo repetidamente a lista pela metada e descartando a metade onde certamente não está o elemento procurado;

### Exemplo de código

```cpp
int buscaBinaria(vector<int> &vet, int target, bool first) {
    int i = 0; r = (int)nums.size() - 1;
    int ans = -1;

    while (i <= r) {
        int mid = (i + r) / 2;
        if (nums[mid] == target) {
            ans = mid;
            if (first) r = mid - 1;
            else i = mid + 1;
        }
        else if (nums[mid] < target) {
            i = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    return ans;
}
```

## Busca binária recursiva

```cpp
int buscaBinaria(vector<int>& array, int alvo, int esquerda, int direita) {
    if (direita >= esquerda) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (array[meio] == alvo)
            return meio;

        // se o alvo for menor, vai para a esquerda
        if (array[meio] > alvo)
            return buscaBinaria(array, alvo, esquerda, meio - 1);

        // se o alvo for maior, vai para a direita
        return buscaBinaria(array, alvo, meio + 1, direita);
    }
    return - 1;   
}
```

## *Binary Exponentiation*

- A exponenciação binária, também conhecida como exponenciação por quadrados, é um método utilizado para calcular eficientemente grandes potências de um número;
- É particularmente útil em algoritmos que envolvem artimética modular e em diversos cálculos matemáticos;
- Sua proposta é reduzir o número de multiplicações necessárias para calcular uma potência, dividindo o expoente em sua representação binária.

### Exemplo de código

```cpp
#include <iostream>
#include <map>
using namespace std;

int exponenciacao(int base, int exp) {
    if (exp == 0)
        return 1;
    int metade = exponenciacao(base, exp/2);
    if (exp % 2 == 0) {
        return metade * metade;
    } else {
        return metade * metade * base;
    }
}
```

## Questões recomendadas

- [Maratona Brasileira de Comedores de Pipoca](https://www.beecrowd.com.br/repository/UOJ_2973.html)
- [Exponentiation](https://cses.fi/problemset/task/1095)
- [Factory Machines](https://cses.fi/problemset/task/1620)	
- [Pão a Metro](https://neps.academy/br/exercise/605)	
- [Array Division](https://cses.fi/problemset/task/1085)	
- [C - Maximum Median](https://codeforces.com/problemset/problem/1201/C)