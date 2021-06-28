#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;

   vector<int> arr;

   for(int i = 0 ; i < n ; i++)
   { 
       int x;
       cin>>x;
       arr.push_back(x);
   }

   int qualify_criteria = arr[k-1];

   int count = 0;

   for(int j = 0; j<n; j++)
   {
       if(arr[j] > 0 &&arr[j]>=qualify_criteria )
       {
           count++;
       }
   }

   cout<<count;


return 0;
}