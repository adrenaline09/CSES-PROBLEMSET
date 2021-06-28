#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long a;
   cin>>a;

//    vector<int> vect;
   long long  sum = 0;
   for(int i = 0; i< a-1;i++)
   {
       int x;
       cin>>x;
       sum+=x;
   }

   long long naturalSum = (a*(a+1))/2;
   
   cout<<naturalSum-sum;

return 0;
}