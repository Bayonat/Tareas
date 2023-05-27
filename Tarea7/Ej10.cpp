#include <iostream>
#include <queue>
#include <stack>

using namespace std;

stack<int> filtrarNParesCola(queue<int> col, unsigned int n){
    stack <int> pila;
    int val;
    int i =0;
    
    while(!col.empty()){
        val = col.front();
        if(val!=0 && val % 2 ==0 && i>=n){
        pila.push(val);

        i++;
        }
        col.pop();
    }
    return pila;
}


int main(){

    queue <int> cola;


    cola.push(2);
    cola.push(16);
    cola.push(2);
    cola.push(20);
    cola.push(4);
    cola.push(52);
    stack<int> pila = filtrarNParesCola(cola, 4);

    while(!pila.empty()){
        cout << pila.top() << endl;
        pila.pop();
    }

    cout << endl;
 
    return 0;
}