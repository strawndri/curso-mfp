#include <bits/stdc++.h>

using namespace std;

int main() {

    long n;
    long long x;

    cin >> n;

    set<long long> numeros_distintos;

    for (long i = 0; i < n; i++) {
        cin >> x;
        numeros_distintos.insert(x);
    }

    cout << numeros_distintos.size() << endl;

    return 0;
}