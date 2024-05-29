#include <bits/stdc++.h>
using namespace std;

bool verifica_tempo(vector <long long> v, long long m, long long n, long long t) {
    long long soma = 0;

    for (long long i = 0; i < n; i++) {
        soma += (m / v[i]);

        if (soma >= t) {
            return true;
        }
    }
        return false;
}

int main() {
    long long n, t;
    cin >> n >> t;

    vector<long long> k(n);
    long long maior_tempo = 0;

    for (long long i = 0; i < n; i++) {
        cin >> k[i];

        if (k[i] >= maior_tempo) {
            maior_tempo = k[i];
        }
    }

    long long esquerda = 0, meio;
    long long direita = maior_tempo * t;
    long long r = direita;

    while (esquerda <= direita) {
        meio = (esquerda + direita) / 2;
        if (verifica_tempo(k, meio, n, t)) {
            r = meio;
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }

    cout << r << endl;

    return 0;
}