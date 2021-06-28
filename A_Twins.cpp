#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;

  vector<int> vect ;

  for(int i = 0 ; i < n ; i++)
  {
     int x;
     cin>>x;
     vect.push_back(x);
  }

   int coin_count = 0;

   sort(vect.begin(),vect.end(),greater<int>());

   int SUM  = accumulate(vect.begin(),vect.end(),0);

   int count = 0;
   int x = 0;
   for(int i = 0 ; i < n ; i++)
   {
       x += vect[i];
       count++;
       if(x>SUM-x)
       {
           break;
       }

   }
cout<<count;
return 0;
}