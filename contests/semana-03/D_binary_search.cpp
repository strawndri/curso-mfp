#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long n, q;
    cin >> n >> q;

    map<long long, long long> posicoes;

    for (long i = 0; i < n; i++) {
        long long a;
        cin >> a;
        
        if (posicoes.find(a) == posicoes.end()) {
            posicoes[a] = i;
        }
    }

    while (q--) {
        long long a;
        cin >> a;
        
        if (posicoes.find(a) != posicoes.end()) {
            cout << posicoes[a] << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}