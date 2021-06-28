#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;

  int arr[n];

  for(int i = 0 ; i < n ; i++)
  {
      cin>>arr[i];
  }


  int count = 0;
  sort(arr,arr+n);
  for(int i = 0 ; i < n ; i++)
  {
     if(arr[i]<0 && m>0)
     {
         count+=(-(arr[i]));
         m--;
     }
  }
cout<<count;
return 0;
}