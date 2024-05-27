#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        long k = 0;
        long j = 0;
        for (long i = 0; i < n && j < m; j++) {
            if (a[i] == b[j]) {
                k++;
                i++;
            }
        }

        cout << k << endl;
    }

    return 0;
}