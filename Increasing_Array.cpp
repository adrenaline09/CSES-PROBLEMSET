#include<bits/stdc++.h>

using namespace std;

int main()
{

int n ;
cin>>n;

vector<int> vect;

for(int i = 0; i<n; i++)
{
   long long x;
   cin>>x;
   vect.push_back(x);
}

// int a = vect[0];
long long  steps = 0;
for(int i = 1 ; i < n ; i++)
{
    if(vect[i] < vect[i-1])
    {   
        steps += (vect[i-1]-vect[i]);
        vect[i] = vect[i-1];
    }
}
cout<<steps;
return 0;
}