#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    
    vector<int> vect;
    
    int S = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i<S; i++)
    {   int sum = 0;
        
        for(int j = i; j<=S; j++)
        {
            for(int x = i; x < j; x++ )
            {
                cout<<arr[x]<<" ";
            }
        //   sum+=arr[j];
        //   vect.push_back(sum);
        cout<<"\n";
        }
    }
    
    // for(int x:vect)
    // {
    //     cout<<x<<"\n";
    // }
    // cout<<*max_element(vect.begin(),vect.end());
	return 0;
}