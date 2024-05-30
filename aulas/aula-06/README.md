# Aula 06: Busca Binária (23/05)

## índice

- [Busca binária](#busca-binária)
- [Outras formas de busca](#outras-formas-de-busca)
- [Questões recomendadas](#questões-recomendadas)

## Busca binária

- Busca elementos de acordo com uma ordenação (crescente ou decrescente);
- Enquanto uma busca linear tem como o pior caso **O(n)**, a busca binária tem **O(log n)**;
- Lembre-se de ordenar o vetor antes de efetuar a busca;
- Caso seja necessário obter os índices originais de cada elementos, pode-se utilizar a estrutura de dado `pair`;

### Exemplo de código

```cpp
int busca(int x){
    int l=0, r=n-1, mid;


    while(l<=r){
        mid = (l+r)/2;
        if(v[mid]==x) return mid;
        if(v[mid]>x){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
```

## Outras formas de busca

- É possível usar `set` e `multiset`;
- Para saber se um elemento está presente:

    ```cpp
    set <int> conj;

    conj.insert(10);
    conj.insert(5);

    if( conj.find(5) != conj.end() ) {
        cout<< “elemento está presente\n”;
    }
    else{
        cout<< “elemento não está presente\n”;
    }

    ```

### `upper_bound` e `lower_bound` em `set` e `multiset`

- `upper_bound`: acha o iterador do primeiro elemento que é maior ou igual a `x`;
- `lower_bound`: acha o iterador do primeiro elemento que é maior que `x`.

#### Exemplo de código

```cpp
set<int> conj;
int x=10;
auto it1 = conj.lower_bound(x);
if (it1 != conj.end()){
    cout<< *it1<< “ é maior ou igual a “ << x <<”\n”;	
}
auto it2 = conj.upper_bound(x);
if (it2 != conj.end()){
    cout<< *it2 << “ é maior que  “ << x <<”\n”;	
}
```

## Questões recomendadas

- [A - Binary Search](https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A)
- [C - Counting 2](https://atcoder.jp/contests/abc231/tasks/abc231_c?lang=en)
- [Soma de Casas](https://neps.academy/br/course/tecnicas-de-programacao-(codcad)/lesson/soma-de-casas)
- [C - Min Difference](https://atcoder.jp/contests/abc212/tasks/abc212_c?lang=en)
- [B - Worms](https://codeforces.com/problemset/problem/474/B)
- [B - Closest to the Left](https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B)
- [C- Closest to the Right](https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C)	

## Materiais complementares

- [Aula de Busca Binária por Rogério Júnior, Lúcio Figueiredo e Pedro Racchetti](https://noic.com.br/materiais-informatica/curso/techniques-01/)
- [Binary Search](https://usaco.guide/silver/binary-search?lang=cpp)
- [Curso Técnicas de Programação (CodCad): Busca Binária](https://neps.academy/br/course/tecnicas-de-programacao-(codcad)/lesson/busca-binaria)

