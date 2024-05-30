# Aula 05: Soma de prefixos (18/05)

## índice

- [O que é soma de prefixos](#o-que-é-soma-de-prefixos)
- [Soma de prefixos 2D](#soma-de-prefixos-2d)
- [Questões recomendadas](#questões-recomendadas)

## O que é soma de prefixos?

- Técnica de programação usada normalmente em problema que tratam de **intervalos**;
- Utilizamos um *array* `pref` que, para cada índice `i`, guarda a soma de todos os valores do array original desde a primeira posição até a posição `i`;
- **i-ésimo prefixo de um vetor:** todos os valores que vão desde a 1ª posição até a i-ésima posição do *array*
- **Prefixo:** `pref[i] = pref[i - 1] = v[i]`;
- **Soma:** `pref[b] - pref[a - 1]`.

### Formalmente, temos que:

$$pref[i] = \sum_{k=1}^i v[k]$$

## Soma de prefixos 2D

### Exemplo de código

Complexidade O(n^2)

```cpp
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
        pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + m[i][j];  
    }
}
```

Complexidade O(q)

```cpp
while(q--){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << pref[c][d] - pref[c][b - 1] - pref[a - 1][d] + pref[a - 1][b - 1];
    cout << "\n";
}
```

## Questões recomendadas

- [Static Range Sum Queries](https://cses.fi/problemset/task/1646)	
- [Static Range Sum](https://judge.yosupo.jp/problem/static_range_sum)
- [B. Kuriyama Mirai's Stones](https://codeforces.com/contest/433/problem/B)
- [B. Vika and Squares](https://codeforces.com/contest/610/problem/B)	
- [Subarray Sums I](https://cses.fi/problemset/task/1660)
- [Subarray Sums II](https://cses.fi/problemset/task/1661)
- [Subarray Divisibility](https://cses.fi/problemset/task/1662)	
- [Range Xor Queries](https://cses.fi/problemset/task/1650)	
- [Sanduíche](https://neps.academy/br/exercise/60)	
- [Forest Queries](https://cses.fi/problemset/task/1652)