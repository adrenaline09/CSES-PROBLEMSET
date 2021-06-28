#include<bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    cin>>S;
    long long n = S.size();
    // cout<<S;
    
    int count = 1;
    int Maxcount = 1;
    char A = S[0];
    for(int i = 1 ; i < n ; i++)
    {
       if(A == S[i])
       {
         count++;
         if( count > Maxcount)
           {
             Maxcount = count;
           }
       }
       else
       {
         A = S[i];
         if( count > Maxcount)
         {
             Maxcount = count;
         }
         count = 1;
       }

    
    }
cout<<Maxcount;
return 0;
}