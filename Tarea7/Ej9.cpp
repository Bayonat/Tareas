#include <iostream>
#include <queue>

using namespace std;

bool verificarRepetidosCola(queue <int> &cola){
    int check;
    int val;
    queue<int> temp;

    while(!cola.empty()){
        check = cola.front();
        cola.pop();
        for( int i= 0; i <=cola.size(); i++){
            if(check == cola.front()){
                return true;
            }
            val = cola.front();
            temp.push(val);
            cola.pop();
        
        for(int i=0; i <= temp.size(); i++){
            val = temp.front();
            cola.push(val);
            temp.pop();
        }
        }
    }

    return false;
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
   if (verificarRepetidosCola(cola)) {
       flag = "Si";
   } else {
       flag = "No";
   }

    cout << flag << " hay elementos repetidos en la cola." << endl;
    return 0;
}