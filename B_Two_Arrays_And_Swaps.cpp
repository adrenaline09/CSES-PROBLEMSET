#include<bits/stdc++.h>

using namespace std;

int main()
{
  
  int n ;
  cin>>n;


  for(int i = 0 ; i < n ; i++)
  {
      int n1,k;
      cin>>n1>>k;
      vector<int> a;
      vector<int> b;

    for (int j = 0; j < n1; j++)
    {
        int an;
        cin>>an;
        a.push_back(an);
    }

    for (int j = 0; j < n1; j++)
    {
        int bn;
        cin>>bn;
        b.push_back(bn);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());

    for(int x = 0 ; x < k ; x++)
    {   if(a[x]< b[x]){swap(a[x],b[x]);}
    }

    cout<<accumulate(a.begin(),a.end(),0)<<"\n";
  }
return 0;
}