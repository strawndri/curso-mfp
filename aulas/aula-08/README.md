# Aula 08: Grafos (29/05)

## índice

- [Motivação](#motivação)
- [Definições](#definições)
- [Representações](#representações)
- [Tipos especiais de grafos](#tipos-especiais-de-grafos)
- [Questões recomendadas](#questões-recomendadas)

## Motivação

Enquanto humanos, precisamos transformar coisas complexas em simples — processo chamado de modelagem — para facilitar a compreensão de estruturas do mundo real.

## Definições

- **Grafo:** é um conjunto de vértices (bolinhas) e arestas (ligação entre pares de bolinhas);
    - Normalmente, denotados por `G = (V, E)`;
- **Grau:** o grau de um vértice **v** é o número de arestas que estão ligadas nele. Obs.: a soma dos graus é **2*M**, sendo **M** o conjunto de arestas;
- **Caminho:** sequência de vértices v1, v2, v3, ..., vk tal que existe aresta entre os vértices adjacentes na sequência;
    - **Simples:** onde não são repetidos vértices;
    - **Ciclo:** caminho que temrina onde começou.
- **Componente conexa:** conjunto maximal de vértices tal que cada par de vérticestem caminho entre si. 

## Representações

- **Lista de arestas:** talvez o jeito mais simples de guardar um grafo. Podemos apenas manter uma lista de arestas que compõem o grafo;
- **Matriz de adjacências:** podemos menter uma matriz onde `A[u][v] = 1` se e somente se existe aresta entre `u` e `v`;
- **Lista de adjacências:** para cada vértice, podemos manter a lista de vértices que ele é adjacente (ou seja, os vértices ligados a ele por alguma aresta).

### Exemplo de código

```cpp
#include<bits/stdc++.h>

int main(){
    int n, m;
    cin >> n >> m;
    
    // lista de arestas
    vector<pair<int,int>> edges(m);
    
   // matriz de adjacência
   vector<vector<int>> A(n, vector<int>(n));

   // lista de adjacências
   vector<vector<int>> adj(n);

    for(int i = 0; i < m; i++){
    int u, v;
    cin >> u >> v;
    // existe aresta entre u e v

    // inserindo na lista de arestas
    edges[i] = {u,v};
    
    // inserindo na matriz de adjacências
    A[u][v] = 1
    A[v][u] = 1
    
    // inserindo na lista de adjacências
    adj[u].push_back(v);
    adj[v].push_back(u);
}
```

### Complexidade das representações

| Operação → Representação ↓ | Verificar se dois vértices são vizinhos | Passar pelos vizinhos de um vértice | Passar pelas aresta do grafo | Complexidade de espaço |
| --- | --- | --- | --- | --- |
| Lista de arestas | O([E]) | O([E]) | O([E]) | O([E]) |
| Matriz de adjacências | O(1) | O([V]) | O([V]^2) | O([V]^2) |
| Lista de adjacências | O(grau[V]) | O(grau[V]) | O([V] + [E]) | O([V] + [E]) | 

## *Depth First Search (DFS)*

- Também chamado de **busca em profundidade**;
- Algoritmo que nos permite passar por todos os vértices das componentes conexas;
- Se vemos um vértice que não "visitamos" antes, vamos ir até ele; senão, voltaremos.

## Tipos especiais de grafos

### Grids 

- São tabuleiros onde podemos nos mover para norte, sul, leste e oeste se não houver obstáculos no caminho;
- Caso quisermos montar explicitamente a lista de adjacências, precisamos de uma **matriz**;
- Truque `dx/dy`: podemos iterar pelos vizinhos da seguinte forma:
    ```cpp
    int dx[]{1,0,-1,0}, dy[]{0,1,0,-1};
    for(int i = 0; i < 4; i++){
        int xi = x + dx[i], yi = y + dy[i];
        if(ok(xi,yi) && visited[xi][yi] == 0)
            dfs(xi,yi);
    }
    ```

### Árvores

- São grafos não direcionados sem ciclos;
- Toda árvode de N vértices tem N-1 arestas;
- Todo par de vértices de uma árvore tem apenas um caminho simples entre eles;
- DFS sem "visited":
    ```cpp
    void dfs(int id, int last){
	for(int viz : g[id])
		if(viz != last)
			dfs(viz,id);
    }
    ```

### Grafos direcionados

- São grafos onde arestas têm apenas uma direção;
- Por exemplo, uma arestas (a, b) é diferente de uma arestas (b, a);
- Poucas mudanças na implementação:
    ```cpp
    int a, b;
    cin >> a >> b; // vamos criar uma aresta de a para b

    adj[a].push_back(b);
    // adj[b].push_back(a); 
    // não vamos fazer esse segundo pushback mais!
    ```

## Questões recomendadas

- [B - Path](https://atcoder.jp/contests/yahoo-procon2019-qual/tasks/yahoo_procon2019_qual_b?lang=en)
- [B - Star or Not](https://atcoder.jp/contests/abc225/tasks/abc225_b?lang=en)
- [A - Love Triangle](https://codeforces.com/problemset/problem/939/A)
- [SERGRID - Grid](https://www.spoj.com/problems/SERGRID/en/)
- [NAKANJ - Minimum Knight moves !!!](https://www.spoj.com/problems/NAKANJ/en/)
- [Round Trip](https://cses.fi/problemset/task/1669/)
- [Counting Rooms](https://cses.fi/problemset/task/1192)
- [A - Valera and X](https://codeforces.com/problemset/problem/404/A)