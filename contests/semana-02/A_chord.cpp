#include <bits/stdc++.h>

using namespace std;

int main() {

    string S;
    cin >> S;

    bool encontrado = false;

    vector<string> v = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    
    for (string item : v) {
        if (S == item) {
            encontrado = true;
            break;
        } 
    }

    if (encontrado) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}