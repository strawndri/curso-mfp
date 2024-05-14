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

        if ((a < b) && (b < c)) {
            cout << "STAIR" << endl;
        } else if ((a < b) && (b > c)) {
            cout << "PEAK" << endl;
        } else {
            cout << "NONE" << endl;
        }
    }

    return 0;
}