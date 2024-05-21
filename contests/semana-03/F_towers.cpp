#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;

    long long torres = 0;

    vector<long long> cubos(n);
    multiset<long long> cubos_do_topo;

    for (int i = 0; i < n; i++) {
        cin >> cubos[i];
    }

    for (int i = 0; i < n; i++) {
        auto j = cubos_do_topo.upper_bound(cubos[i]);

        if (j == cubos_do_topo.end()) {
            torres++;
            cubos_do_topo.insert(cubos[i]);
        } else {
            cubos_do_topo.erase(j);
            cubos_do_topo.insert(cubos[i]);
        }
    }

    cout << torres << endl;

    return 0;
}