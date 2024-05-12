#include <iostream>

using namespace std;

int main() {

    long long int n, k, pow;

    do {
        cin >> n;
    } while ((n < 1) || (n > 1000000000000000000LL));

    k = 0;
    pow = 1;

    while (pow <= n) {
        pow *= 2;
        k++;
    };

    cout << k - 1 << endl;

    return 0;
}