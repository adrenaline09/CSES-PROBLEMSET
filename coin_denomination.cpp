#include<bits/stdc++.h>

#define fo(i,a,b) for(int i = a; i<b; i++)
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v;

    fo(i,0,n)
        cin>>v[i];

    int amount;
    cin>>amount;

    sort(v.begin(),v.end(),greater<int>());

    int N = 0;
    for (int i = 0; i < n; i++)
    {
        N += amount/v[i];
        amount-=amount/v[i]*v[i];
    }
    cout<< N <<"\n";
    
    
}