//greedy algorithm

#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;cin>>n;
  vector<int> v1;
  vector<int> v2;
  set<int> s;
  int n1 ;cin>>n1;
  for (int i = 0; i < n1; i++)
  { int x;
    cin>>x;
    v1.push_back(x);
  }
//   cout<<v1[0]<<"\n";
//   cout<<v1[1]<<"\n";
//   cout<<v1[2]<<"\n";
//   cout<<v1[3]<<"\n";
  int n2;cin>>n2;
  for (int j = 0; j < n2; j++)
  { int y;
    cin>>y;
    v2.push_back(y);
  }
  
 
//   cout<<v2[0]<<"\n";
//   cout<<v2[1]<<"\n";
//   cout<<v2[2]<<"\n";
  
for(auto X:v1)
  {
      s.insert(X);
  }


for(auto Y:v2)
  {
      s.insert(Y);
  }

   if(s.size() == n){
      cout<<"I become the guy.";
   }
   else{
       cout<<"Oh, my keyboard!";
   }
return 0;
}