#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    std::vector<char> letras(s.begin(), s.end());

    sort(letras.begin(), letras.end());

    for(int i = 0; i < letras.size(); i++) {
        cout << letras[i];
    }

    return 0;
}