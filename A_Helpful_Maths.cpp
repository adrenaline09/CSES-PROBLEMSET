#include<bits/stdc++.h>

using namespace std;

int main()
{
   
   char s[100];cin>>s;
   int count1 = 0;
   int count2 = 0;
   int count3 = 0;
   int n = strlen(s);
   for(int i = 0 ; i < n ; i++)
   {
      if(s[i] == '1')
      {
         count1++;
      }

      else if(s[i] == '2')
      {
         count2++;
      }
      else if(s[i] == '3')
      {
         count3++;
      }
   }

   string C = "";
   for(int i = 0 ; i < count1 ; i++)
   {
        C+="1+";
   }
    for(int i = 0 ; i < count2 ; i++)
   {
        C+="2+";
   }
    for(int i = 0 ; i < count3 ; i++)
   {
        C+="3+";
   }
   int l = C.length();
   C = C.substr( 0,  l-1);

   cout<<C<<"\n";

   return 0;
}