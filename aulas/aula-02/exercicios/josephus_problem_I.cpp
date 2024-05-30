#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
    long n, m;
    cin >> n;
    vector<long> criancas;

    for (long int i = 1; i <= n; i++) {
        criancas.push_back(i);
    }

    long posicao = 1;

    while (criancas.size() >= 1) {
        m = criancas[posicao];
        cout << m << " ";
        criancas.erase(criancas.begin() + posicao);
        posicao++;

        if (posicao + 1 > criancas.size()) {
            if (m % 2 == 0) {
                posicao = 1;
            } else {
                posicao = 0;
            }
        }
    }

    return 0;
}
