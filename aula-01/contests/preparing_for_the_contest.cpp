#include <iostream>

using namespace std;

int main() {
    long t, n, k;

    cin >> t;

    for (long i = 0; i < t; i++) {
        cin >> n >> k;

        for (long l = 1; l <= k; l++) {
            cout << l << " ";
        }
        
        for (long j = n; j > k; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}