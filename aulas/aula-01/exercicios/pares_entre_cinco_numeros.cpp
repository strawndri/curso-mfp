#include <iostream>
 
using namespace std;
 
int main() {
 
    int numero, pares;
    pares = 0;
    
    for (int i = 0; i < 5; i++) {
        cin >> numero;
        if (numero % 2 == 0) {
            pares++;
        }
    }
    
    cout << pares << " valores pares" << endl;
 
    return 0;
}