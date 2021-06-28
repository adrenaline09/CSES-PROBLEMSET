#include<bits/stdc++.h>
using namespace std;

string removeVowel(string str)
{
    regex r ("[aeiouy]");

    return regex_replace(str,r,"");

}

int main()
    {  
        string S;
        cin>>S;

        transform(S.begin(),S.end(),S.begin(),::tolower);
        //cout<<S<<"\n";

        string S1 = removeVowel(S);

        int len = S1.length();
        string ans = "";

        for(int i = 0 ; i < len ; i++)
        {   ans+=".";
            ans+=S1[i];
        }
        
        cout<<ans;
         return 0;
    }