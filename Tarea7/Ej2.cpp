#include <iostream> 
#include <vector> 
#include <algorithm>

using namespace std;


void ordenarConMonticulo(vector<int> &vec){
    make_heap(vec.begin(),vec.end());
    while (!vec.empty()) {
 
    pop_heap(vec.begin(), vec.end(), greater<int>());

    vec.pop_back();

    if (!is_heap(vec.begin(), vec.end(), greater<int>())) {
      make_heap(vec.begin(), vec.end(), greater<int>());
    }
}
}

int main(){

    vector<int> vec = {4,5, 32, 4, 5, 1, 3};

    ordenarConMonticulo(vec);


     for (int num : vec) {
       cout << num << " ";
     }
     cout << endl;



    return 0;
}

