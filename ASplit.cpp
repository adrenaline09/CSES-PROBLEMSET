#include<iostream>
using namespace std;
int main(){
int testcases;
cin>>testcases;
for(int j = 0; j<testcases;j++){
int n,k;
string s;
cin>>n>>k;
cin>>s;

if (k == 0){
    cout<<"YES"<<"\n";
}
else{ 
    //qwqwq
    bool ans = true;
    for(int i = 0; i < k; i++){
         if (s[i] != s[n-1-i])
         {
             ans = false;
            break;
         }
         else{
             continue;
         }
    
    }

    if (ans == true){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    }
}
return 0;    
}
