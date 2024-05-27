#include <bits/stdc++.h>

using namespace std;

int main() {
    long n;
    cin >> n;

    vector<long long> v(n), pref(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    pref[0] = 0;
    
    long long max_subarray_sum = pref[0];

    for (long i = 1; i < n; i++) {
        pref[i] = max(v[i], v[i] + pref[i - 1]);
        max_subarray_sum = max(max_subarray_sum, pref[i]);
    }

    cout << max_subarray_sum << endl;
    
    return 0;
}