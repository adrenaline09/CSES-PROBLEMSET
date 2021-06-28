#include <iostream>
#include <vector>
using namespace std;

int main(){
    int i =2;
    cout<<&i;
    vector <int> v1;

    for(int i = 0;i<10; i++){
        v1.push_back(i);
    }

    for(auto j = v1.begin() ; j!=v1.end() ; j++){
        cout<<*j<<" ";
    }
    return 0;  
}