#include <bits/stdc++.h>
using namespace std;

int bfs(vector<vector<long>>& adj, vector<int>& cores, long i, bool& impossible) {

    queue<long> q;

    q.push(i);
    cores[i] = 1;

    while (!q.empty()) {
        int no_atual = q.front();
        q.pop();

        for (long vizinho : adj[no_atual]) {
            if (cores[vizinho] == 0) {
                cores[vizinho] = (cores[no_atual] == 1) ? 2 : 1;
                q.push(vizinho);
            } else if (cores[vizinho] == cores[no_atual]) {
                cout << "IMPOSSIBLE" << endl;
                impossible = true;
                return 0;
            }
        }
    }

    return 0;
}

int main() {

    long n, m;
    cin >> n >> m;
    vector<vector<long>> adj(n + 1);
    vector<int> cores(n + 1, 0);
    bool impossible = false;

    for(long i = 0; i < m; i++){
        long a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (long i = 1; i <= n; i++) {
        if (cores[i] == 0 && !impossible) {
            bfs(adj, cores, i, impossible);
        }
    }

    if (!impossible) {
        for (long i = 1; i <= n; i++) {
            cout << cores[i] << " ";
        }
    }

    return 0;
}