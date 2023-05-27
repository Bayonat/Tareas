#include <iostream>
#include <list>
#include <queue>

using namespace std;

int obtenerMenorCosto(list<int>& lista) {
    int sum = 0;
    priority_queue<int, vector<int>, greater<int>> filaP;

    for (int num : lista) {
        filaP.push(num);
    }

    while (filaP.size() > 1) {
        int num1 = filaP.top();
        filaP.pop();
        int num2 = filaP.top();
        filaP.pop();

        int val = num1 + num2;
        sum += val;

        filaP.push(val);
    }

    return sum;
}

int main() {
    list<int> lista = {3, 4, 4, 2};

    int ans = obtenerMenorCosto(lista);

    cout << ans << endl;

    return 0;
}
 
