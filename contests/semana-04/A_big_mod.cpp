#include <iostream>
#include <cmath>
using namespace std;

#include <iostream>
using namespace std;

long long bigMod(long long b, long long p, long long m) {
    if (p == 0) {
        return 1;
    }
    else if (p % 2 == 0) {
        long long calc_parcial = bigMod(b, p/2, m);
        return (calc_parcial * calc_parcial) % m;
    } else {
        return ((b % m) * bigMod(b, p-1, m)) % m;
    }
}

int main() {
    long long r, b, p, m;

    while (cin >> b >> p >> m) {
        r = bigMod(b, p, m);
        cout << r << endl;
    }

    return 0;
}