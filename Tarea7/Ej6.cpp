#include <iostream>
#include <queue>

using namespace std;


int verificarRepetidos(queue<int>& col) {

    queue<int> temp;
    int repetidos = 0;

    while (!col.empty()) {
        int val = col.front();
        col.pop();
        bool esRepetido = false;

        while (!col.empty()) {
            int val2 = col.front();
            col.pop();

            if (val == val2) {
                esRepetido = true;
                repetidos++;
            }

            temp.push(val2);
        }


        while (!temp.empty()) {
            col.push(temp.front());
            temp.pop();
        }

   
        if (esRepetido) {
            col.push(val);
        }
    }

    return repetidos;
}


int main(){

    queue <int> cola;


    cola.push(0);
    cola.push(1);
    cola.push(2);
    cola.push(3);
    cola.push(4);
    cola.push(5);
 
    string flag;
   if (verificarRepetidos(cola)) {
       flag = "Si";
   } else {
       flag = "No";
   }

    cout << flag << " hay elementos repetidos en la cola." << endl;
    return 0;
}