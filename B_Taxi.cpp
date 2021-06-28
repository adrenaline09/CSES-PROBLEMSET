#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int n; cin>>n;
    int taxi_count = 0;
    int lst[n];

   for(int i = 0 ; i < n ; i++)
    {
       cin>>lst[i];
    }
    
   int c1 = 0,c2 = 0,c3 = 0,c4 = 0;
   for(int i = 0 ; i < n ; i++)
   {
      if (lst[i] == 1)
      {
         c1++;
      }
      else if (lst[i] == 2)
      {
         c2++;
      }
      else if (lst[i] == 3)
      {
         c3++;
      }
      else
      {
         c4++;
      }
      
      
   }
   
   taxi_count += c4;
   
   taxi_count+=min(c1,c3);

   int y = min(c1,c3);
   c1-=y;
   c3-=y;

   taxi_count+=c2/2;
   c2 = c2%2;

   taxi_count+=min(c2,c1/2);
   int z = min(c2,c1/2);
   c2-=z;
   c1-=2*z;

   if(c2 == 1 && c1>=0)
   {
      taxi_count++;
      c2--;
      c1--;
   }

   taxi_count+=ceil(c1/4.0);
   taxi_count+=c3;
   cout<<taxi_count;

    return 0;
}