#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1e5;

struct Aresta { int viz; long long vizp; };
struct Vertice {
    int id; // identifica o vértice
    long long dist; // distância entre vértice de origem e vértice do grafo
    friend bool operator<(const Vertice &a, const Vertice &b){
        return a.dist > b.dist;
    }
};

int n, m, a, b;
long long dist[MAXN+1], c;
vector<Aresta> adj[MAXN+1];
priority_queue<Vertice> Q;

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }

    for (int i = 1; i <= n; ++i) {
        dist[i] = LLONG_MAX; 
    }

    dist[1] = 0;
    Q.push({1, 0});
    while(!Q.empty()){
        long long d = Q.top().dist;
        int u = Q.top().id;
        Q.pop();

        if(d > dist[u]) continue;

        for(Aresta e : adj[u]){
            if(dist[e.viz] > d+e.vizp){
                dist[e.viz] = d+e.vizp;
                Q.push({e.viz, d+e.vizp});
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << dist[i] << " ";
    }

    cout << endl;

    return 0;
}