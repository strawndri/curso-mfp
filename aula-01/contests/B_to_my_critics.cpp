#include <iostream>

using namespace std;

int main() {

    int t, a, b, c;

    do {
        cin >> t;
    } while ((t < 1) || (t > 1000));

    for (int i = 0; i < t; i++) {
        do {
            cin >> a >> b >> c;
        } while ((a < 0 || a > 9) || (b < 0 || b > 9) || (c < 0 || c > 9));

        if ((a + b >= 10) || (a + c >= 10) || (b + c >= 10)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}