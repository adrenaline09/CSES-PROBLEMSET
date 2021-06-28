#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t = 0;cin>>t;
  
  for(int i = 0 ; i < t ; i++)
  {
      int x,y;cin>>x>>y;
      
      int a,b;cin>>a>>b;
      
      int MAX = max(x,y);
      int MIN = min(x,y);

      int cost = 0;

    cost+=(MIN*b);
    cost+=((MAX-MIN)*a);
    cout<<cost<<"\n";
  }

return 0;
}