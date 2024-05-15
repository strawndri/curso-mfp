#include <bits/stdc++.h>

using namespace std;

int main() {

    long t, n, operacoes, central;
    long long a;

    cin >> t;

    for (long i = 0; i < t; i++) {
        cin >> n;
        
        vector<long long> sequencia;

        for (long j = 0; j < n; j++) {
            cin >> a;
            sequencia.push_back(a);
        }

        sort(sequencia.begin(), sequencia.end());

        if (n % 2 == 0) {
            central = (n/2) - 1;
        } else {
            central = (n/2);
        }

        operacoes = 0;
        for (long k = central; k < n; k++) {

            if (sequencia[k] == sequencia[central]) {
                operacoes++;
            } else {
                break;
            }
        }
        
        cout << operacoes << endl;
    }
    return 0;
}