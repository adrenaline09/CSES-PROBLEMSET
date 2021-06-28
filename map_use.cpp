#include <iostream>
#include <map>
#include <string>
using namespace std;

void countFreq(int str[],int n){
    map<int,int> mp;
    for(int i = 0; i<n; i++){
        mp[str[i]]++;
        
    }
    for(auto x:mp){
        cout<<x.first<<"  is "<<x.second<<" times  "<<"\n";
    }
}
int main()
{
    //create a map that stores strings indexed by strings
    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    countFreq(arr,n);
    return 0;
}