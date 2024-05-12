#include <iostream>

using namespace std;

int main() {

    long long t, m, a, b, c;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c >> m;

        if (a > b) swap(a, b);
        if (a > c) swap(a, c);
        if (b > c) swap(b, c);  

        int limite_inferior = c - 1 - (a + b);
        int limite_superior = a + b + c - 3;

        if (m <= limite_superior && m >= limite_inferior) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}