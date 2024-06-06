# Aula 09: Caminhos mínimos em grafos (01/06)

## índice

- [Problema do caminho mínimo](#problema-do-caminho-mínimo)
- [BFS (Busca em Largura)](#bfs-busca-em-largura)
- [Caminho mínimo - generalização](#caminho-mínimo---generalização)
- [Dijkstra](#dijkstra)
- [Questões recomendadas](#questões-recomendadas)

## Problema do caminho mínimo

- Um caminho é uma sequência de vértices tal que existe aresta entre os vértices adjacentes dessa sequência
- Um caminho mínimo para um grafo sem peso, entre Se T, é aquele que minimiza a quantidade de arestas entre os caminhos que começam em S e terminam em T. O tamanho desse caminho é denominado **distância**.

## BFS (Busca em Largura)

- Achat todos os vértices com distância 1;
- Os vizinhos dos vértices com distância 1 terão distância 2;
- Os vizinhos deles terão distância 3;
- Repetir isso quantas vezes for necessário;
- **Complexidade:** O(|V| + |E|) ou O(N + M).

### Exemplo de código

```cpp
vector<int> adj[MAXN]

vector<int> dist(n, INF);
queue<int> q;
dist[s] = 0;
q.push(s);
while(!q.empty()){
	int cur = q.front();
	q.pop();
	
	for(int viz : adj[cur]){
		if(dist[viz] > dist[cur]+1){
			dist[viz] = dist[cur]+1;
			q.push(viz);
}
	}
}
cout << dist[t] << '\n';
```

## Caminho mínimo - generalização

- Trazendo o cenário de caminhos para o mundo real, sabe-se que nem todos eles são fáceis de ultrapassar;
- Visto isso, faz sentido falar que cada aresta tem um **peso**, simbolizando o custo de usar aquela aresta;
- Um **caminho mínimo**, para um grafo com pesos, é aquele que tem a menor soma dos pessoa;

## Dijkstra
- Achar o vértice mais próximo da origem;
- A partir disso, achar o segundo mais próximo;
- A partir disso, achar o terceiro;
- Repetir quantas vezes for necessário;
- **Complexidade:** O(N + Mlong(N)) ou O(N + Mlog(M)).

### Exemplo de código

```cpp
using pii = pair<int,int>;
vector<pii> adj[MAXN]

vector<int> dist(n, INF);
set<pii> q;
dist[s] = 0;
q.insert({0,s});
while(!q.empty()){
	int cur = q.begin()->second;
	q.erase(q.begin());
	
	for(auto [viz, vizp] : adj[cur]){
		if(dist[viz] > dist[cur]+vizp){
			q.erase({dist[viz],viz});
			dist[viz] = dist[cur]+vizp;
			q.insert({dist[viz],viz});
}
	}
}
cout  << ‘\n’;

```

## Questões recomendadas

- [Message Route](https://cses.fi/problemset/task/1667)
- [Shortest Routes I](https://cses.fi/problemset/task/1671)	
- [B - Planets](https://codeforces.com/problemset/problem/229/B)	
- [Flight Discount](https://cses.fi/problemset/task/1195/)
- [M - Maximizing Flight Efficiency](https://codeforces.com/gym/104555/problem/M)