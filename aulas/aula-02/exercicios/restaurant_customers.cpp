#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {

    long n;
    cin >> n;

    vector<int> entradas;
    vector<int> saidas;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        entradas.push_back(a);
        saidas.push_back(b);
    }

    sort(entradas.begin(), entradas.end());
    sort(saidas.begin(), saidas.end());

    int max_clientes = 0;
    int clientes_atuais = 0;
    long i = 0;
    long j = 0;

    while (i < n && j < n) {
        if(entradas[i] < saidas[j]) {
            clientes_atuais++;
            max_clientes = max(max_clientes, clientes_atuais);
            i++;
        } else {
            clientes_atuais--;
            j++;
        }
    }

    cout << max_clientes << endl;

    return 0;
}