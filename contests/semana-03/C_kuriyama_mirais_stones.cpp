#include <bits/stdc++.h>

using namespace std;

int main() {

    long n;
    cin >> n;

    vector<long long> v(n + 1);

    for (long i = 1; i <= n; i++) {
        cin >> v[i];
    }

    vector<long long> v_ordenado = v;
    sort(v_ordenado.begin(), v_ordenado.end());

    vector<long long> pref_soma(n + 1);
    pref_soma[0] = 0;

    vector<long long> pref_soma_ordenado(n + 1);
    pref_soma_ordenado[0] = 0;

    for (int i = 1; i <= n; i++) {
        pref_soma[i] = pref_soma[i - 1] + v[i];
        pref_soma_ordenado[i] = pref_soma_ordenado[i - 1] + v_ordenado[i];
    }

    long m;
    cin >> m;

    for (long i = 0; i < m; i++) {
        int type;
        long l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            cout << pref_soma[r] - pref_soma[l - 1] << endl;
        } else {
            cout << pref_soma_ordenado[r] - pref_soma_ordenado[l - 1] << endl;
        }
    }
    
    return 0;
}