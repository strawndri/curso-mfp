#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<char>>& mapa, vector<vector<bool>>& visitados, long x, long y) {
    long n = mapa.size();
    long m = mapa[0].size();

    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};

    visitados[x][y] = true;

    for (long i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m && mapa[nx][ny] == '.' && !visitados[nx][ny]) {
            dfs(mapa, visitados, nx, ny); // recursão!
        }
    }

    return 0;
}

int main() {
    long n, m;
    cin >> n >> m;

    vector<vector<char>> mapa(n, vector<char>(m));
    vector<vector<bool>> visitados(n, vector<bool>(m, false));

    for (long i = 0; i < n; i++) {
        for (long j = 0; j < m; j++) {
            cin >> mapa[i][j];
        }
    }

    long qtd_quartos = 0;

    for (long i = 0; i < n; i++) {
        for (long j = 0; j < m; j++) {
            if (mapa[i][j] == '.' && !visitados[i][j]) {
                dfs(mapa, visitados, i, j);
                qtd_quartos++;
            }
        }
    }

    cout << qtd_quartos << endl;

    return 0;
}