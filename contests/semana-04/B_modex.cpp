#include <iostream>
using namespace std;

long long quadrado(long long k) {
    return k * k;
} 

long long modex(long long x, long long y, long long n) {
    if (y == 0) {
        return 1;
    } else if (y % 2 == 0) {
        return quadrado(modex(x, y / 2, n)) % n;
    } else {
        return ((x % n) * modex(x, y - 1, n)) % n;
    }
}

int main() {
    long c;
    cin >> c;

    while (c--) {
        long long x, y, n, z;
        cin >> x >> y >> n;
        z = modex(x, y, n);
        cout << z << endl;
    }

    int zero;
    cin >> zero;

    return 0;
}