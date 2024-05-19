#include <bits/stdc++.h>

using namespace std;

int main() {
    long n, q;
    cin >> n >> q;

    vector<long long> v(n + 1), pref(n + 1);

    // lê os valores do vetor, começando do índice 1 (índice 0 não será usado)
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    pref[0] = 0;

    // calcula a soma de prefixo para cada índice i
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + v[i];
    }

    while (q--) {
        long a, b;
        cin >> a >> b;

        // calcula e imprime a soma do subarray de índice a até b usando a soma de prefixo
        cout << pref[b] - pref[a - 1] << endl;
    }

    return 0;
}