#include <iostream>
#include <list>
#include <vector> 
#include <unordered_set>
using namespace std;

int main(){
    string S ;
    cin>>S;
    string A = "hello";
    int x = 0,y = 0;
    for(int i = 0; i < S.size(); i++){
        if(S[i]== A[x]){
            x++;
            y++;
        }
    }
    if(y==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;  
}