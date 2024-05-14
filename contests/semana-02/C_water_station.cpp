#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main() {
    int n, estacao_mais_proxima;
    cin >> n;

    estacao_mais_proxima = nearbyint((static_cast<double>(n) / 5)) * 5;

    cout << estacao_mais_proxima << endl;
    return 0;
}