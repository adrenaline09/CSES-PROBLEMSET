#include<bits/stdc++.h>

#define pb push_back
#define out cout
#define in cin
using namespace std;

int main()
{
   int n ;
   cin>>n;

   vector<int> v;

   int i = 1, j = 2;
   while(j<=n)
   {
     v.pb(j);
     j+=2;
   }
   while(i<=n)
   {
     v.pb(i);
     i+=2;
   }
   if(n <= 3 && n != 1)
   {
     cout<<"NO SOLUTION"<<"\n";
   }
   
   else if (n == 1){cout<<1<<"\n";}

   else
   {
     for(auto x: v){out<<x<<" ";}
   }

return 0;
}