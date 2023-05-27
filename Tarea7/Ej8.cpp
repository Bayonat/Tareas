#include <vector>
#include <list>
#include <map>
#include <iostream>

using namespace std;

vector<list<pair<int, int>>> creaMatrizDispersa(vector<vector<int>>& matriz) {
    vector<list<pair<int, int>>> matrizD(matriz.size());

    for (int i = 0; i < matriz.size(); ++i) {
        for (int j = 0; j < matriz[i].size(); ++j) {
            int val = matriz[i][j];
            if (val != 0) {
                matrizD[i].push_back(make_pair(val, j));
            }
        }
    }
    return matrizD;
}

map<int, list<pair<int, int>>> creaMatrizDispersaMapa(vector<vector<int>>& matriz) {
    map<int, list<pair<int, int>>> matrizD;

    for (int i = 0; i < matriz.size(); ++i) {
        for (int j = 0; j < matriz[i].size(); ++j) {
            int val = matriz[i][j];
            if (val != 0) {
                matrizD[i].push_back(make_pair(val, j));
            }
        }
    }
    return matrizD;
}

int main() {
    vector<vector<int>> matriz = {
        {0, 2, 0, 0, 0, 0, 4},
        {0, 8, 9, 0, 0, 1, 0},
        {0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {5, 0, 0, 0, 0, 6, 0},
        {1, 2, 0, 0, 0, 0, 0},
        {4, 0, 0, 0, 0, 0, 0},
        {0, 0, 7, 0, 0, 11, 0}
    };

    vector<list<pair<int, int>>> matrizDispersa = creaMatrizDispersa(matriz);

    map<int, list<pair<int, int>>> matrizDispersaConMapas = creaMatrizDispersaMapa(matriz);

    return 0;
}
