#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;

    map<long long, long long> posicoes;

    for (long long i = 1; i <= n; i++) {
        long long a;
        cin >> a;

        if (posicoes.count(x - a)) {
            cout << posicoes[x - a] << " " << i << endl;
            return 0;
        }

        posicoes[a] = i;
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}