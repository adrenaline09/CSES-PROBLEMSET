#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> arr = {1,2,3,5,4,6,8,10,7};
    
    int n = 9;
    int totalsum = 0;
    for(auto x:arr)
    {
        totalsum+=x;
        //cout << x <<"\n";
    }

    int T = (n+1)*(n+2)/2-totalsum;
    cout<<T;
	return 0;
}