#include <bits/stdc++.h>

using namespace std;

int main() {
    long n, num_atual, j;
    bool encontrado = true;
    cin >> n;

    multiset<long> numeros;

    for (long i = 1; i < n; i++) {
        cin >> num_atual;
        numeros.insert(num_atual);
    }

    j = 0;
    while (j <= n && encontrado) {
        j++;
        encontrado = (numeros.find(j) != numeros.end());
    }

    cout << j << endl;
    return 0;
}