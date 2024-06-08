#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

int main() {
    long f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;

    if (s == g) {
        cout << 0 << endl;
        return 0;
    }

    vector<long> dist(f + 1, INT_MAX);
    queue<long> q;

    dist[s] = 0;
    q.push(s);
    
    while(!q.empty()){
        int atual = q.front();
        q.pop();
        
       long proximo_up = atual + u;
       if (proximo_up <= f && dist[proximo_up] > dist[atual] + 1) {
            dist[proximo_up] = dist[atual] + 1;
            q.push(proximo_up);
       }

       long proximo_down = atual - d;
       if (proximo_down >= 1 && dist[proximo_down] > dist[atual] + 1) {
            dist[proximo_down] = dist[atual] + 1;
            q.push(proximo_down);
       }
    }
    
    if (dist[g] == INT_MAX) {
        cout << "use the stairs" << endl;
    } else {
        cout << dist[g] << endl;
    }

    return 0;
}